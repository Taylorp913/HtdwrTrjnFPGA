`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:       RAJESH GLOBAL SOLUTIONS(RGS)
// Engineer:      KRUPESH
// 
// Create Date:    15:39:04 11/24/2008 
// Design Name:    DES
// Module Name:    Reg32 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS BLOCK TAKES 64 BIT INPUT FROM Initial_Permutation BLOCK AND DIVIDE
//                 IT INTO TWO 32 BIT REGISTER.
// Dependencies:   Initial_Permutation;
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Reg32(CLK, RST, RIGHT, RIGHT_REG, LEFT_REG1, RIGHT_REG1);

 input   CLK;
 
 input   RST; 
  
 input   [32 : 1]RIGHT; 
  
 input   [32 : 1]RIGHT_REG;
 
 output  [32 : 1] LEFT_REG1;
 
 output  [32 : 1] RIGHT_REG1;

 wire    CLK;
 
 wire    RST;
   
 reg     [32 : 1] LEFT_REG1;
 
 reg     [32 : 1] RIGHT_REG1;
 
 always @ (posedge CLK or posedge RST)
 
   begin
	
	  if(RST)
	  
	    begin
		 
		   LEFT_REG1  <= 32'h00000000;
			
			RIGHT_REG1 <= 32'h00000000;
			
		 end
			
	  else
	   
		 begin
		 
		   LEFT_REG1  <=  RIGHT;
			
			RIGHT_REG1 <=  RIGHT_REG;
			
		 end
		 
  end
 
endmodule 
