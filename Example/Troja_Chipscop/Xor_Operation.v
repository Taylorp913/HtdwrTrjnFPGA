
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        RAJESH GLOBAL SOLUTION
// Engineer:       KRUPESH
// 
// Create Date:    17:09:15 11/20/2008 
// Design Name:    DES
// Module Name:    Xor_Operation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS MODULE TAKES 48 BIT INPUT FROM Permuted_Choice2 BLOCK AND 48 BIT
//                 INPUT FROM Expansion_Permutation AND GIVES 48 BIT OUTPUT AFTER PERFORMING
//                 XOR OPERATION ON INPUTS.
//
// Dependencies:   Permutated_Choice2 AND Expansion_Permutation BLOCK
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Xor_Operation(EXPANSION_PERMUTATION, SUBKEY, SBOX1_INPUT, SBOX2_INPUT, SBOX3_INPUT, 
                     SBOX4_INPUT, SBOX5_INPUT, SBOX6_INPUT, SBOX7_INPUT, SBOX8_INPUT);
    
	 input    [48 : 1] EXPANSION_PERMUTATION;
    
	 input    [48 : 1] SUBKEY;
    
	 output   [6 : 1]  SBOX1_INPUT; 
	  
	 output   [6 : 1]  SBOX2_INPUT; 
	  
	 output   [6 : 1]  SBOX3_INPUT; 
	  
	 output   [6 : 1]  SBOX4_INPUT; 
	  
	 output   [6 : 1]  SBOX5_INPUT; 
	  
	 output   [6 : 1]  SBOX6_INPUT; 
	  
	 output   [6 : 1]  SBOX7_INPUT; 
	  
	 output   [6 : 1]  SBOX8_INPUT;
	 
	 wire     [48 : 1] EXPANSION_PERMUTATION;
	 
	 wire     [48 : 1] SUBKEY;
	 
	 wire     [48 : 1] SBOX_INPUT;
	 
	 assign   SBOX_INPUT    =  EXPANSION_PERMUTATION ^ SUBKEY; 
	  
	 assign   SBOX1_INPUT   =  SBOX_INPUT[48 : 43];
	  
	 assign   SBOX2_INPUT   =  SBOX_INPUT[42 : 37]; 
	  
	 assign   SBOX3_INPUT   =  SBOX_INPUT[36 : 31]; 
	  
	 assign   SBOX4_INPUT   =  SBOX_INPUT[30 : 25]; 
	  
	 assign   SBOX5_INPUT   =  SBOX_INPUT[24 : 19]; 
	   
	 assign   SBOX6_INPUT   =  SBOX_INPUT[18 : 13]; 
		 
	 assign   SBOX7_INPUT   =  SBOX_INPUT[12 : 7]; 
	  
	 assign   SBOX8_INPUT   =  SBOX_INPUT[6 : 1]; 
		   
		  
endmodule
