`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        RAJESH GLOBAL SOLUTION(RGS)
// Engineer:       KRUPESH
// 
// Create Date:    17:03:56 11/19/2008 
// Design Name:    DES
// Module Name:    Expansion_Permutation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS BLOCK WILL DIVIDE 64 BIT INPUT INTO TWO 32 BIT REGISTER.AFTER DOING
//                 IT IT WILL APPLY EXPAND PERMUTATION ON LOWER 32 BIT REGISTER.
//
// Dependencies:   Initial_Permutation BLOCK.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Expansion_Permutation(RIGHT, EXPANSION_PERMUTATION);
    
    input  [32 : 1] RIGHT; 
	
	 output [48 : 1] EXPANSION_PERMUTATION;
	 
	 wire   [32 : 1] RIGHT;
	 
	 reg    [48 : 1] EXPANSION_PERMUTATION;
	 
	
    always @(RIGHT)

        begin

           EXPANSION_PERMUTATION[1]   <= RIGHT[32];
           EXPANSION_PERMUTATION[2]   <= RIGHT[1];		  
           EXPANSION_PERMUTATION[3]   <= RIGHT[2];		  			  
	        EXPANSION_PERMUTATION[4]   <= RIGHT[3];		  
           EXPANSION_PERMUTATION[5]   <= RIGHT[4];
           EXPANSION_PERMUTATION[6]   <= RIGHT[5];		  
           EXPANSION_PERMUTATION[7]   <= RIGHT[4];
           EXPANSION_PERMUTATION[8]   <= RIGHT[5];		  
           EXPANSION_PERMUTATION[9]   <= RIGHT[6];
           EXPANSION_PERMUTATION[10]  <= RIGHT[7];		  
			  EXPANSION_PERMUTATION[11]  <= RIGHT[8];		  
			  EXPANSION_PERMUTATION[12]  <= RIGHT[9];		  
			  EXPANSION_PERMUTATION[13]  <= RIGHT[8];		  
			  EXPANSION_PERMUTATION[14]  <= RIGHT[9];		  
			  EXPANSION_PERMUTATION[15]  <= RIGHT[10];		  
			  EXPANSION_PERMUTATION[16]  <= RIGHT[11];		  
			  EXPANSION_PERMUTATION[17]  <= RIGHT[12];		  
			  EXPANSION_PERMUTATION[18]  <= RIGHT[13];		  
			  EXPANSION_PERMUTATION[19]  <= RIGHT[12];		  
			  EXPANSION_PERMUTATION[20]  <= RIGHT[13];		  
			  EXPANSION_PERMUTATION[21]  <= RIGHT[14];		  
			  EXPANSION_PERMUTATION[22]  <= RIGHT[15];		  
			  EXPANSION_PERMUTATION[23]  <= RIGHT[16];		  
			  EXPANSION_PERMUTATION[24]  <= RIGHT[17];		  
			  EXPANSION_PERMUTATION[25]  <= RIGHT[16];		  
			  EXPANSION_PERMUTATION[26]  <= RIGHT[17];		  
			  EXPANSION_PERMUTATION[27]  <= RIGHT[18];		  
			  EXPANSION_PERMUTATION[28]  <= RIGHT[19];		  
			  EXPANSION_PERMUTATION[29]  <= RIGHT[20];		  
			  EXPANSION_PERMUTATION[30]  <= RIGHT[21];		  
			  EXPANSION_PERMUTATION[31]  <= RIGHT[20];		  
			  EXPANSION_PERMUTATION[32]  <= RIGHT[21];		
			  EXPANSION_PERMUTATION[33]  <= RIGHT[22];	
           EXPANSION_PERMUTATION[34]  <= RIGHT[23];		  
           EXPANSION_PERMUTATION[35]  <= RIGHT[24];
           EXPANSION_PERMUTATION[36]  <= RIGHT[25];		  
           EXPANSION_PERMUTATION[37]  <= RIGHT[24];		  			  
			  EXPANSION_PERMUTATION[38]  <= RIGHT[25];		  
			  EXPANSION_PERMUTATION[39]  <= RIGHT[26];		  
			  EXPANSION_PERMUTATION[40]  <= RIGHT[27];		  
			  EXPANSION_PERMUTATION[41]  <= RIGHT[28];		  
			  EXPANSION_PERMUTATION[42]  <= RIGHT[29];		  
			  EXPANSION_PERMUTATION[43]  <= RIGHT[28];		  
			  EXPANSION_PERMUTATION[44]  <= RIGHT[29];		  
			  EXPANSION_PERMUTATION[45]  <= RIGHT[30];		  
			  EXPANSION_PERMUTATION[46]  <= RIGHT[31];		  
			  EXPANSION_PERMUTATION[47]  <= RIGHT[32];		  
			  EXPANSION_PERMUTATION[48]  <= RIGHT[1];

       end
		 
endmodule