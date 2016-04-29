
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:39:24 11/28/2008 
// Design Name: 
// Module Name:    Inverse_Initial_Permutation 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Inverse_Initial_Permutation(RIGHT_SWAP, LEFT_SWAP, CIPHER_TEXT); 
 
input   [32 : 1]RIGHT_SWAP; 
 
input   [32 : 1]LEFT_SWAP; 
 
output  [64 : 1]CIPHER_TEXT; 
 
wire    [32 : 1]RIGHT_SWAP;
 
wire    [32 : 1]LEFT_SWAP; 
		   
reg     [64 : 1]CIPHER_TEXT; 
 
wire    [64 : 1]TEMP; 
 
assign  TEMP  = {LEFT_SWAP,RIGHT_SWAP}; 
 
always @(TEMP) 
 
  begin  
    
	CIPHER_TEXT[1]  <= TEMP[40]; 
	CIPHER_TEXT[2]  <= TEMP[8]; 
	CIPHER_TEXT[3]  <= TEMP[48]; 
	CIPHER_TEXT[4]  <= TEMP[16]; 
	CIPHER_TEXT[5]  <= TEMP[56]; 
	CIPHER_TEXT[6]  <= TEMP[24]; 
	CIPHER_TEXT[7]  <= TEMP[64]; 
	CIPHER_TEXT[8]  <= TEMP[32]; 
	CIPHER_TEXT[9]  <= TEMP[39]; 
	CIPHER_TEXT[10] <= TEMP[7]; 
	CIPHER_TEXT[11] <= TEMP[47]; 
	CIPHER_TEXT[12] <= TEMP[15]; 
	CIPHER_TEXT[13] <= TEMP[55]; 
	CIPHER_TEXT[14] <= TEMP[23]; 
	CIPHER_TEXT[15] <= TEMP[63]; 
	CIPHER_TEXT[16] <= TEMP[31]; 
	CIPHER_TEXT[17] <= TEMP[38]; 
	CIPHER_TEXT[18] <= TEMP[6]; 
	CIPHER_TEXT[19] <= TEMP[46]; 
	CIPHER_TEXT[20] <= TEMP[14]; 
	CIPHER_TEXT[21] <= TEMP[54]; 
	CIPHER_TEXT[22] <= TEMP[22]; 
	CIPHER_TEXT[23] <= TEMP[62]; 
	CIPHER_TEXT[24] <= TEMP[30]; 
	CIPHER_TEXT[25] <= TEMP[37]; 
	CIPHER_TEXT[26] <= TEMP[5]; 
	CIPHER_TEXT[27] <= TEMP[45]; 
	CIPHER_TEXT[28] <= TEMP[13]; 
	CIPHER_TEXT[29] <= TEMP[53]; 
	CIPHER_TEXT[30] <= TEMP[21]; 
	CIPHER_TEXT[31] <= TEMP[61]; 
	CIPHER_TEXT[32] <= TEMP[29]; 
	CIPHER_TEXT[33] <= TEMP[36]; 
	CIPHER_TEXT[34] <= TEMP[4]; 
	CIPHER_TEXT[35] <= TEMP[44]; 
	CIPHER_TEXT[36] <= TEMP[12]; 
	CIPHER_TEXT[37] <= TEMP[52]; 
	CIPHER_TEXT[38] <= TEMP[20]; 
	CIPHER_TEXT[39] <= TEMP[60]; 
	CIPHER_TEXT[40] <= TEMP[28]; 
	CIPHER_TEXT[41] <= TEMP[35]; 
	CIPHER_TEXT[42] <= TEMP[3]; 
	CIPHER_TEXT[43] <= TEMP[43]; 
	CIPHER_TEXT[44] <= TEMP[11]; 
	CIPHER_TEXT[45] <= TEMP[51]; 
	CIPHER_TEXT[46] <= TEMP[19]; 
	CIPHER_TEXT[47] <= TEMP[59]; 
	CIPHER_TEXT[48] <= TEMP[27]; 
	CIPHER_TEXT[49] <= TEMP[34]; 
	CIPHER_TEXT[50] <= TEMP[2]; 
	CIPHER_TEXT[51] <= TEMP[42]; 
	CIPHER_TEXT[52] <= TEMP[10]; 
	CIPHER_TEXT[53] <= TEMP[50]; 
	CIPHER_TEXT[54] <= TEMP[18]; 
	CIPHER_TEXT[55] <= TEMP[58]; 
	CIPHER_TEXT[56] <= TEMP[26]; 
	CIPHER_TEXT[57] <= TEMP[33]; 
	CIPHER_TEXT[58] <= TEMP[1]; 
	CIPHER_TEXT[59] <= TEMP[41]; 
	CIPHER_TEXT[60] <= TEMP[9]; 
	CIPHER_TEXT[61] <= TEMP[49]; 
	CIPHER_TEXT[62] <= TEMP[17]; 
	CIPHER_TEXT[63] <= TEMP[57]; 
	CIPHER_TEXT[64] <= TEMP[25]; 
	 
 end
endmodule
