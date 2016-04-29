
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:       RAJESH GLOBAL SOLUTION(RGS
// Engineer:      KRUPESH
// 
// Create Date:    14:46:00 11/24/2008 
// Design Name:    DES
// Module Name:    Permuatation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS BLOCK PERFORMS PERMUTATION ON 32 BIT INPUT WHICH COMES FROM Sbox_Output
//                 AND GENERATES 32 BIT OUTPUT. 
//
// Dependencies:   Sbox_Output
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Permutation(S_OUTPUT, PERMUTATION_OUTPUT);

 input   [32 : 1] S_OUTPUT;
 
 output  [32 : 1] PERMUTATION_OUTPUT;
 
 wire    [32 : 1] S_OUTPUT;
 
 reg     [32 : 1] PERMUTATION_OUTPUT;
 
 always @ (S_OUTPUT)
 
   begin
	
	  PERMUTATION_OUTPUT[1]  <= S_OUTPUT[16];
	  PERMUTATION_OUTPUT[2]  <= S_OUTPUT[7];
	  PERMUTATION_OUTPUT[3]  <= S_OUTPUT[20];
	  PERMUTATION_OUTPUT[4]  <= S_OUTPUT[21];
	  PERMUTATION_OUTPUT[5]  <= S_OUTPUT[29];
	  PERMUTATION_OUTPUT[6]  <= S_OUTPUT[12];
	  PERMUTATION_OUTPUT[7]  <= S_OUTPUT[28];
	  PERMUTATION_OUTPUT[8]  <= S_OUTPUT[17];
	  PERMUTATION_OUTPUT[9]  <= S_OUTPUT[1];
	  PERMUTATION_OUTPUT[10] <= S_OUTPUT[15];
	  PERMUTATION_OUTPUT[11] <= S_OUTPUT[23];
	  PERMUTATION_OUTPUT[12] <= S_OUTPUT[26];
	  PERMUTATION_OUTPUT[13] <= S_OUTPUT[5];
	  PERMUTATION_OUTPUT[14] <= S_OUTPUT[18];
	  PERMUTATION_OUTPUT[15] <= S_OUTPUT[31];
	  PERMUTATION_OUTPUT[16] <= S_OUTPUT[10];
	  PERMUTATION_OUTPUT[17] <= S_OUTPUT[2];
	  PERMUTATION_OUTPUT[18] <= S_OUTPUT[8];
	  PERMUTATION_OUTPUT[19] <= S_OUTPUT[24];
	  PERMUTATION_OUTPUT[20] <= S_OUTPUT[14];
	  PERMUTATION_OUTPUT[21] <= S_OUTPUT[32];
	  PERMUTATION_OUTPUT[22] <= S_OUTPUT[27];
	  PERMUTATION_OUTPUT[23] <= S_OUTPUT[3];
	  PERMUTATION_OUTPUT[24] <= S_OUTPUT[9];
	  PERMUTATION_OUTPUT[25] <= S_OUTPUT[19];
	  PERMUTATION_OUTPUT[26] <= S_OUTPUT[13];
	  PERMUTATION_OUTPUT[27] <= S_OUTPUT[30];
	  PERMUTATION_OUTPUT[28] <= S_OUTPUT[6];
	  PERMUTATION_OUTPUT[29] <= S_OUTPUT[22];
	  PERMUTATION_OUTPUT[30] <= S_OUTPUT[11];
	  PERMUTATION_OUTPUT[31] <= S_OUTPUT[4];
	  PERMUTATION_OUTPUT[32] <= S_OUTPUT[25];
	  
   end
	
endmodule 
