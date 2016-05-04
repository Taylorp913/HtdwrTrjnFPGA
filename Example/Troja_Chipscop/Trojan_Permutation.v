
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

				 PERMUTATION_Temp <= 64'hd5a0c370b049996e ^ KEY;
				                         
				end
				 
				 
	  end				
				 
	 endmodule