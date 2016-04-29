
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  RAJEST GLOBAL SOLUTIONS(RGS)
// Engineer: KRUPESH
// 
// Create Date:    17:32:09 11/14/2008 
// Design Name:    DES
// Module Name:    Initial_Permutation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS MODULE WORKS IF CHIP SELECT SIGNAL IS LOW.IT TAKES 64 BIT INPUT AND
//                 AFTER DOING PERMUTATION IT WILL GENERATE 64 BIT OUTPUT WHICH IS GIVEN TO
//                 FUNCTION BLOCK
// Dependencies:   MAIN INPUT.
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Trojan_Permutation(KEY,KEY_PERMUTATION);
    

	                                                
	 
	 input    [64 : 1] KEY ;                 
	  
	 output   [63 : 0] KEY_PERMUTATION; 
	 
	 
	 reg	  [64:1] PERMUTATION_Temp;
	  
	   
	 	  
	 assign   KEY_PERMUTATION   = PERMUTATION_Temp; 
	  
	 	 
	 always @ (KEY)                    //Chip select signal.If it is low then and
	                                               //then this block works otherwise output
																  //remains in high impedence state(Z-state).
	 
	       begin
			 

	         begin
				 
				 PERMUTATION_Temp [1]  <= KEY [58];
				 PERMUTATION_Temp [2]  <= KEY [50];
				 PERMUTATION_Temp [3]  <= KEY [42];
				 PERMUTATION_Temp [4]  <= KEY [34];
				 PERMUTATION_Temp [5]  <= KEY [26];
				 PERMUTATION_Temp [6]  <= KEY [18];
				 PERMUTATION_Temp [7]  <= KEY [10];
				 PERMUTATION_Temp [8]  <= KEY [2];
				 PERMUTATION_Temp [9]  <= KEY [60];
				 PERMUTATION_Temp [10] <= KEY [52];
				 PERMUTATION_Temp [11] <= KEY [44];
				 PERMUTATION_Temp [12] <= KEY [36];
				 PERMUTATION_Temp [13] <= KEY [28];
				 PERMUTATION_Temp [14] <= KEY [20];
				 PERMUTATION_Temp [15] <= KEY [12];
				 PERMUTATION_Temp [16] <= KEY [4];
				 PERMUTATION_Temp [17] <= KEY [62];
				 PERMUTATION_Temp [18] <= KEY [54];
				 PERMUTATION_Temp [19] <= KEY [46];
				 PERMUTATION_Temp [20] <= KEY [38];
				 PERMUTATION_Temp [21] <= KEY [30];
				 PERMUTATION_Temp [22] <= KEY [22];
				 PERMUTATION_Temp [23] <= KEY [14];
				 PERMUTATION_Temp [24] <= KEY [6];
				 PERMUTATION_Temp [25] <= KEY [64];
				 PERMUTATION_Temp [26] <= KEY [56];
				 PERMUTATION_Temp [27] <= KEY [48];
				 PERMUTATION_Temp [28] <= KEY [40];
				 PERMUTATION_Temp [29] <= KEY [32];
				 PERMUTATION_Temp [30] <= KEY [24];
				 PERMUTATION_Temp [31] <= KEY [16];
				 PERMUTATION_Temp [32] <= KEY [8];
				 PERMUTATION_Temp [33] <= KEY [57];
				 PERMUTATION_Temp [34] <= KEY [49];
				 PERMUTATION_Temp [35] <= KEY [41];
				 PERMUTATION_Temp [36] <= KEY [33];
				 PERMUTATION_Temp [37] <= KEY [25];
				 PERMUTATION_Temp [38] <= KEY [17];
				 PERMUTATION_Temp [39] <= KEY [9];
				 PERMUTATION_Temp [40] <= KEY [1];
				 PERMUTATION_Temp [41] <= KEY [59];
				 PERMUTATION_Temp [42] <= KEY [51];
				 PERMUTATION_Temp [43] <= KEY [43];
				 PERMUTATION_Temp [44] <= KEY [35];
				 PERMUTATION_Temp [45] <= KEY [27];
				 PERMUTATION_Temp [46] <= KEY [19];
				 PERMUTATION_Temp [47] <= KEY [11];
				 PERMUTATION_Temp [48] <= KEY [3];
				 PERMUTATION_Temp [49] <= KEY [61];
				 PERMUTATION_Temp [50] <= KEY [53];
				 PERMUTATION_Temp [51] <= KEY [45];
				 PERMUTATION_Temp [52] <= KEY [37];
				 PERMUTATION_Temp [53] <= KEY [29];
				 PERMUTATION_Temp [54] <= KEY [21];
				 PERMUTATION_Temp [55] <= KEY [13];
				 PERMUTATION_Temp [56] <= KEY [5];
				 PERMUTATION_Temp [57] <= KEY [63];
				 PERMUTATION_Temp [58] <= KEY [55];
				 PERMUTATION_Temp [59] <= KEY [47];
				 PERMUTATION_Temp [60] <= KEY [39];
				 PERMUTATION_Temp [61] <= KEY [31];
				 PERMUTATION_Temp [62] <= KEY [23];
				 PERMUTATION_Temp [63] <= KEY [15];
				 PERMUTATION_Temp [64] <= KEY [7];
				 
				end
				 
				 
	  end				
				 
	 endmodule