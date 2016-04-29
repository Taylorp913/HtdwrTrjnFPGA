`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:56 11/24/2008 
// Design Name: 
// Module Name:    Key_Top 
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
module Key_Top(CHIP_SELECT_BAR, ADDRESS, KEY1, KEY2, KEY3, KEY4, KEY5, KEY6, KEY7, KEY8, KEY9, KEY10, KEY11 ,KEY12,
					KEY13, KEY14, KEY15, KEY16,KEY);

  input   CHIP_SELECT_BAR;
  
  input   ADDRESS;

  output  [48 : 1]  KEY1,KEY2,KEY3,KEY4,KEY5,KEY6,KEY7,KEY8,KEY9,KEY10,KEY11,KEY12,KEY13,KEY14,
                    KEY15, KEY16;
					
output  [64 : 1] 	KEY ;					
						  
 // wire    [28 : 1]  LEFT_CIRCULAR_SHIFT1;						  
  
 // wire    [28 : 1]  RIGHT_CIRCULAR_SHIFT1;
  
 // wire    [28 : 1]  LEFTHALF_CIRCULAR_SHIFT1; 
  
 
 
  //wire    [28 : 1]  RIGHTHALF_CIRCULAR_SHIFT1;  
  
  wire    [48 : 1]  KEY1,KEY2,KEY3,KEY4,KEY5,KEY6,KEY7,KEY8,KEY9,KEY10,KEY11,KEY12,KEY13,KEY14,
                    KEY15,KEY16;
  
  wire    [28 : 1]  LEFT_HALF0,LEFT_HALF1,LEFT_HALF2,LEFT_HALF3,LEFT_HALF4,LEFT_HALF5,LEFT_HALF6,LEFT_HALF7,
                    LEFT_HALF8,LEFT_HALF9,LEFT_HALF10,LEFT_HALF11,LEFT_HALF12,LEFT_HALF13,LEFT_HALF14,
						  LEFT_HALF15,LEFT_HALF16;
  
  wire    [28 : 1]  RIGHT_HALF0,RIGHT_HALF1,RIGHT_HALF2,RIGHT_HALF3,RIGHT_HALF4,RIGHT_HALF5,RIGHT_HALF6,RIGHT_HALF7,
                    RIGHT_HALF8,RIGHT_HALF9,RIGHT_HALF10,RIGHT_HALF11,RIGHT_HALF12,RIGHT_HALF13,RIGHT_HALF14,
						  RIGHT_HALF15,RIGHT_HALF16;
						  
 // wire    [48 : 1]  SUBKEY;						  
  
   Key_Generation key_gen (
	                        .CHIP_SELECT_BAR(CHIP_SELECT_BAR),
                           .ADDRESS(ADDRESS),
                           .LEFT_CIRCULAR_SHIFT1(LEFT_HALF0),
								   .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF0),
								   .KEY(KEY) 
								   );						  
								  
    assign LEFT_HALF1  = {LEFT_HALF0[27 : 1],LEFT_HALF0[28]};
    assign LEFT_HALF2  = {LEFT_HALF1[27 : 1],LEFT_HALF1[28]};
    assign LEFT_HALF3  = {LEFT_HALF2[26 : 1],LEFT_HALF2[28],LEFT_HALF2[27]};
    assign LEFT_HALF4  = {LEFT_HALF3[26 : 1],LEFT_HALF3[28],LEFT_HALF3[27]};
	 assign LEFT_HALF5  = {LEFT_HALF4[26 : 1],LEFT_HALF4[28],LEFT_HALF4[27]};
    assign LEFT_HALF6  = {LEFT_HALF5[26 : 1],LEFT_HALF5[28],LEFT_HALF5[27]};
	 assign LEFT_HALF7  = {LEFT_HALF6[26 : 1],LEFT_HALF6[28],LEFT_HALF6[27]};
	 assign LEFT_HALF8  = {LEFT_HALF7[26 : 1],LEFT_HALF7[28],LEFT_HALF7[27]};
	 assign LEFT_HALF9  = {LEFT_HALF8[27 : 1],LEFT_HALF8[28]};
	 assign LEFT_HALF10 = {LEFT_HALF9[26 : 1],LEFT_HALF9[28],LEFT_HALF9[27]};  
	 assign LEFT_HALF11 = {LEFT_HALF10[26 : 1],LEFT_HALF10[28],LEFT_HALF10[27]};
	 assign LEFT_HALF12 = {LEFT_HALF11[26 : 1],LEFT_HALF11[28],LEFT_HALF11[27]};
	 assign LEFT_HALF13 = {LEFT_HALF12[26 : 1],LEFT_HALF12[28],LEFT_HALF12[27]};
	 assign LEFT_HALF14 = {LEFT_HALF13[26 : 1],LEFT_HALF13[28],LEFT_HALF13[27]};
	 assign LEFT_HALF15 = {LEFT_HALF14[26 : 1],LEFT_HALF14[28],LEFT_HALF14[27]};
	 assign LEFT_HALF16 = {LEFT_HALF15[27 : 1],LEFT_HALF15[28]};
	 
	 assign RIGHT_HALF1  = {RIGHT_HALF0[27 : 1],RIGHT_HALF0[28]};
	 assign RIGHT_HALF2  = {RIGHT_HALF1[27 : 1],RIGHT_HALF1[28]};
	 assign RIGHT_HALF3  = {RIGHT_HALF2[26 : 1],RIGHT_HALF2[28],RIGHT_HALF2[27]};
	 assign RIGHT_HALF4  = {RIGHT_HALF3[26 : 1],RIGHT_HALF3[28],RIGHT_HALF3[27]};
	 assign RIGHT_HALF5  = {RIGHT_HALF4[26 : 1],RIGHT_HALF4[28],RIGHT_HALF4[27]};
	 assign RIGHT_HALF6  = {RIGHT_HALF5[26 : 1],RIGHT_HALF5[28],RIGHT_HALF5[27]};
	 assign RIGHT_HALF7  = {RIGHT_HALF6[26 : 1],RIGHT_HALF6[28],RIGHT_HALF6[27]};
	 assign RIGHT_HALF8  = {RIGHT_HALF7[26 : 1],RIGHT_HALF7[28],RIGHT_HALF7[27]};
	 assign RIGHT_HALF9  = {RIGHT_HALF8[27 : 1],RIGHT_HALF8[28]};
	 assign RIGHT_HALF10 = {RIGHT_HALF9[26 : 1],RIGHT_HALF9[28],RIGHT_HALF9[27]};
	 assign RIGHT_HALF11 = {RIGHT_HALF10[26 : 1],RIGHT_HALF10[28],RIGHT_HALF10[27]};
	 assign RIGHT_HALF12 = {RIGHT_HALF11[26 : 1],RIGHT_HALF11[28],RIGHT_HALF11[27]};
	 assign RIGHT_HALF13 = {RIGHT_HALF12[26 : 1],RIGHT_HALF12[28],RIGHT_HALF12[27]};
	 assign RIGHT_HALF14 = {RIGHT_HALF13[26 : 1],RIGHT_HALF13[28],RIGHT_HALF13[27]};
	 assign RIGHT_HALF15 = {RIGHT_HALF14[26 : 1],RIGHT_HALF14[28],RIGHT_HALF14[27]};
	 assign RIGHT_HALF16 = {RIGHT_HALF15[27 : 1],RIGHT_HALF15[28]};
	 
	 
	 Permuted_Choice2 u1 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF1),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF1),
								  .SUBKEY(KEY1)
								  
								);
	 
	 
	 Permuted_Choice2 u2 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF2),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF2),
								  .SUBKEY(KEY2)
								  
								);
	 
	 Permuted_Choice2 u3 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF3),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF3),
								  .SUBKEY(KEY3)
								  
								);
	 
	 
	 Permuted_Choice2 u4 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF4),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF4),
								  .SUBKEY(KEY4)
								  
								);
								
    Permuted_Choice2 u5 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF5),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF5),
								  .SUBKEY(KEY5)
								  
								);
	 
    Permuted_Choice2 u6 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF6),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF6),
								  .SUBKEY(KEY6)
								  
								);
	 
    Permuted_Choice2 u7 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF7),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF7),
								  .SUBKEY(KEY7)
								  
								);
	 
    Permuted_Choice2 u8 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF8),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF8),
								  .SUBKEY(KEY8)
								  
								);
	 
    Permuted_Choice2 u9 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF9),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF9),
								  .SUBKEY(KEY9)
								  
								);
	 
    Permuted_Choice2 u10 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF10),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF10),
								  .SUBKEY(KEY10)
								  
								 );
	 
    Permuted_Choice2 u11 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF11),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF11),
								  .SUBKEY(KEY11)
								  
								 );
	 
    Permuted_Choice2 u12 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF12),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF12),
								  .SUBKEY(KEY12)
								  
								 );
	 
    Permuted_Choice2 u13 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF13),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF13),
								  .SUBKEY(KEY13)
								  
								 );
	 
    Permuted_Choice2 u14 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF14),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF14),
								  .SUBKEY(KEY14)
								  
								  );
	 
    Permuted_Choice2 u15 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF15),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF15),
								  .SUBKEY(KEY15)
								  
								  );
	 
    Permuted_Choice2 u16 (
	                       .LEFT_CIRCULAR_SHIFT1(LEFT_HALF16),
								  .RIGHT_CIRCULAR_SHIFT1(RIGHT_HALF16),
								  .SUBKEY(KEY16)
								  
								 );
	 	 	 
endmodule 
