
 `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: RAJEST GLOBAL SOLUTIONS(RGS)
// Engineer: KRUPESH
// 
// Create Date:    11:32:23 11/17/2008 
// Design Name:    DES
// Module Name:    Key_Generation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS MODULE WORKS IF CHIP SELECT SIGNAL IS LOW.IT TAKES 64 BIT INPUT KEY
//                 WHICH IS STORED IN ROM AND AFTER THAT IT PERFORMS PERMUTATION CHOICE1 ON 
//                 64 BIT INPUT KEY.AFTER DOING PERMUTATION IT WILL GENERATE 56 BIT OUTPUT.
//                 IT WILL IGNORE EVERY EIGHTH BIT OF THE KEY INPUT.
//  
//
// Dependencies:   MAIN INPUT
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Key_Generation(CHIP_SELECT_BAR, ADDRESS, LEFT_CIRCULAR_SHIFT1, RIGHT_CIRCULAR_SHIFT1);

    input  CHIP_SELECT_BAR;
	 
	 input  ADDRESS;
	   
	 output [28 : 1] LEFT_CIRCULAR_SHIFT1;
	 
	 output [28 : 1] RIGHT_CIRCULAR_SHIFT1;
	 
	 wire   CHIP_SELECT_BAR;
	 
	 wire   ADDRESS;
	 
	 wire   [28 : 1] LEFT_CIRCULAR_SHIFT1;
	 
	 wire   [28 : 1] RIGHT_CIRCULAR_SHIFT1;
    	  
	 reg    [56 : 1] OUTPUT_PERMUTATION_CHOICE1;
	 
	 reg    [64 : 1] KEY;
	 
	 assign RIGHT_CIRCULAR_SHIFT1 = OUTPUT_PERMUTATION_CHOICE1[28 : 1];
	 
	 assign LEFT_CIRCULAR_SHIFT1  = OUTPUT_PERMUTATION_CHOICE1[56 : 29];

    always @(ADDRESS)	 
	 
	 begin

         case (ADDRESS)			
								  
			      1'b0    : KEY = 64'h 0000000000000000; 
			  
      		   default : KEY = 64'h 1111001010110001;
				 
		   endcase
	   
	  end
					 
     always @(CHIP_SELECT_BAR or KEY)
 
            begin
								
   				  if(CHIP_SELECT_BAR == 0)
								  
				   		begin
									
									 OUTPUT_PERMUTATION_CHOICE1[1] <= KEY[57];
									 OUTPUT_PERMUTATION_CHOICE1[2] <= KEY[49];
									 OUTPUT_PERMUTATION_CHOICE1[3] <= KEY[41];
									 OUTPUT_PERMUTATION_CHOICE1[4] <= KEY[33];
									 OUTPUT_PERMUTATION_CHOICE1[5] <= KEY[25];
									 OUTPUT_PERMUTATION_CHOICE1[6] <= KEY[17];
									 OUTPUT_PERMUTATION_CHOICE1[7] <= KEY[9];
									 OUTPUT_PERMUTATION_CHOICE1[8] <= KEY[1];
									 OUTPUT_PERMUTATION_CHOICE1[9] <= KEY[58];
									 OUTPUT_PERMUTATION_CHOICE1[10] <= KEY[50];
									 OUTPUT_PERMUTATION_CHOICE1[11] <= KEY[42];
									 OUTPUT_PERMUTATION_CHOICE1[12] <= KEY[34];
									 OUTPUT_PERMUTATION_CHOICE1[13] <= KEY[26];
									 OUTPUT_PERMUTATION_CHOICE1[14] <= KEY[18];
									 OUTPUT_PERMUTATION_CHOICE1[15] <= KEY[10];
									 OUTPUT_PERMUTATION_CHOICE1[16] <= KEY[2];
									 OUTPUT_PERMUTATION_CHOICE1[17] <= KEY[59];
									 OUTPUT_PERMUTATION_CHOICE1[18] <= KEY[51];
									 OUTPUT_PERMUTATION_CHOICE1[19] <= KEY[43];
									 OUTPUT_PERMUTATION_CHOICE1[20] <= KEY[35];
									 OUTPUT_PERMUTATION_CHOICE1[21] <= KEY[27];
									 OUTPUT_PERMUTATION_CHOICE1[22] <= KEY[19];
									 OUTPUT_PERMUTATION_CHOICE1[23] <= KEY[11];
									 OUTPUT_PERMUTATION_CHOICE1[24] <= KEY[3];
									 OUTPUT_PERMUTATION_CHOICE1[25] <= KEY[60];
									 OUTPUT_PERMUTATION_CHOICE1[26] <= KEY[52];
									 OUTPUT_PERMUTATION_CHOICE1[27] <= KEY[44];
									 OUTPUT_PERMUTATION_CHOICE1[28] <= KEY[36];
									 OUTPUT_PERMUTATION_CHOICE1[29] <= KEY[63];
									 OUTPUT_PERMUTATION_CHOICE1[30] <= KEY[55];
									 OUTPUT_PERMUTATION_CHOICE1[31] <= KEY[47];
									 OUTPUT_PERMUTATION_CHOICE1[32] <= KEY[39];
									 OUTPUT_PERMUTATION_CHOICE1[33] <= KEY[31];
									 OUTPUT_PERMUTATION_CHOICE1[34] <= KEY[23];
									 OUTPUT_PERMUTATION_CHOICE1[35] <= KEY[15];
									 OUTPUT_PERMUTATION_CHOICE1[36] <= KEY[7];
									 OUTPUT_PERMUTATION_CHOICE1[37] <= KEY[62];
									 OUTPUT_PERMUTATION_CHOICE1[38] <= KEY[54];
									 OUTPUT_PERMUTATION_CHOICE1[39] <= KEY[46];
									 OUTPUT_PERMUTATION_CHOICE1[40] <= KEY[38];
									 OUTPUT_PERMUTATION_CHOICE1[41] <= KEY[30];
									 OUTPUT_PERMUTATION_CHOICE1[42] <= KEY[22];
									 OUTPUT_PERMUTATION_CHOICE1[43] <= KEY[14];
									 OUTPUT_PERMUTATION_CHOICE1[44] <= KEY[6];
									 OUTPUT_PERMUTATION_CHOICE1[45] <= KEY[61];
									 OUTPUT_PERMUTATION_CHOICE1[46] <= KEY[53];
									 OUTPUT_PERMUTATION_CHOICE1[47] <= KEY[45];
									 OUTPUT_PERMUTATION_CHOICE1[48] <= KEY[37];
									 OUTPUT_PERMUTATION_CHOICE1[49] <= KEY[29];
									 OUTPUT_PERMUTATION_CHOICE1[50] <= KEY[21];
									 OUTPUT_PERMUTATION_CHOICE1[51] <= KEY[13];
									 OUTPUT_PERMUTATION_CHOICE1[52] <= KEY[5];
									 OUTPUT_PERMUTATION_CHOICE1[53] <= KEY[28];
									 OUTPUT_PERMUTATION_CHOICE1[54] <= KEY[20];
									 OUTPUT_PERMUTATION_CHOICE1[55] <= KEY[12];
									 OUTPUT_PERMUTATION_CHOICE1[56] <= KEY[4];
									 
								end	 
								
						 else
								 
						      begin

                            OUTPUT_PERMUTATION_CHOICE1 <= 64'bZ;								 
									 
							   end
									
					end

      endmodule
			