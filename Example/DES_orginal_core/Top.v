`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:16 11/28/2008 
// Design Name: 
// Module Name:    Des_Top 
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
module Des_Top(CLK, RST, CHIP_SELECT_BAR, ADDRESS, PLAIN_TEXT, CIPHER_TEXT); 
 
input   CLK; 
 
input   RST; 
 
input   CHIP_SELECT_BAR; 
 
input   ADDRESS; 
 
input   [64 : 1]PLAIN_TEXT; 
 
output  [64 : 1]CIPHER_TEXT; 
 
wire    CLK; 
 
wire    RST; 
 
wire    CHIP_SELECT_BAR; 
 
wire    ADDRESS; 
 
wire    [64 : 1] PLAIN_TEXT; 
 
wire    [64 : 1] CIPHER_TEXT; 
 
wire    [48 : 1] KEY1,KEY2,KEY3,KEY4,KEY5,KEY6,KEY7,KEY8,KEY9,KEY10,KEY11,KEY12,KEY13,KEY14,KEY15, 
                 KEY16; 
					   
wire    [32 : 1] LEFT1,LEFT2,LEFT3,LEFT4,LEFT5,LEFT6,LEFT7,LEFT8,LEFT9,LEFT10,LEFT11,LEFT12,LEFT13, 
                 LEFT14,LEFT15,LEFT16; 
 
wire    [32 : 1] RIGHT1,RIGHT2,RIGHT3,RIGHT4,RIGHT5,RIGHT6,RIGHT7,RIGHT8,RIGHT9,RIGHT10,RIGHT11, 
                 RIGHT12,RIGHT13,RIGHT14,RIGHT15,RIGHT16;					   
 
wire    [32 : 1] LEFT,RIGHT; 
 
wire    [32 : 1] LEFT_SWAP,RIGHT_SWAP; 
 
 Initial_Permutation ip ( 
                         .CHIP_SELECT_BAR(CHIP_SELECT_BAR), 
								 .PLAIN_TEXT(PLAIN_TEXT), 
								 .LEFT(LEFT), 
								 .RIGHT(RIGHT) 
								); 
								 
 Key_Top key            ( 
                         .CHIP_SELECT_BAR(CHIP_SELECT_BAR), 
								 .ADDRESS(ADDRESS), 
								 .KEY1(KEY1), 
								 .KEY2(KEY2), 
								 .KEY3(KEY3), 
								 .KEY4(KEY4), 
								 .KEY5(KEY5), 
								 .KEY6(KEY6), 
								 .KEY7(KEY7), 
								 .KEY8(KEY8), 
								 .KEY9(KEY9), 
								 .KEY10(KEY10), 
								 .KEY11(KEY11), 
								 .KEY12(KEY12), 
								 .KEY13(KEY13), 
								 .KEY14(KEY14), 
								 .KEY15(KEY15), 
								 .KEY16(KEY16) 
                        ); 
 
 Round1 round1          ( 
                        .CLK(CLK), 
								.RST(RST), 
								.LEFT(LEFT), 
								.RIGHT(RIGHT), 
								.KEY(KEY1), 
								.LEFT1(LEFT1), 
								.RIGHT1(RIGHT1) 
								);								 
								 
 Round1 round2          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT1),
								.RIGHT(RIGHT1),
								.KEY(KEY2),
								.LEFT1(LEFT2),
								.RIGHT1(RIGHT2)
								);							 
 
 Round1 round3          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT2),
								.RIGHT(RIGHT2),
								.KEY(KEY3),
								.LEFT1(LEFT3),
								.RIGHT1(RIGHT3)
								);							 
 
 Round1 round4          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT3),
								.RIGHT(RIGHT3),
								.KEY(KEY4),
								.LEFT1(LEFT4),
								.RIGHT1(RIGHT4)
								);							 
 
 Round1 round5          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT4),
								.RIGHT(RIGHT4),
								.KEY(KEY5),
								.LEFT1(LEFT5),
								.RIGHT1(RIGHT5)
								);							 
 
 Round1 round6          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT5),
								.RIGHT(RIGHT5),
								.KEY(KEY6),
								.LEFT1(LEFT6),
								.RIGHT1(RIGHT6)
								);							 
 
 Round1 round7          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT6),
								.RIGHT(RIGHT6),
								.KEY(KEY7),
								.LEFT1(LEFT7),
								.RIGHT1(RIGHT7)
								);							 
 
 Round1 round8          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT7),
								.RIGHT(RIGHT7),
								.KEY(KEY8),
								.LEFT1(LEFT8),
								.RIGHT1(RIGHT8)
								);							 
 
 Round1 round9          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT8),
								.RIGHT(RIGHT8),
								.KEY(KEY9),
								.LEFT1(LEFT9),
								.RIGHT1(RIGHT9)
								);							 
 
 Round1 round10         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT9),
								.RIGHT(RIGHT9),
								.KEY(KEY10),
								.LEFT1(LEFT10),
								.RIGHT1(RIGHT10)
								);							 
 
 Round1 round11         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT10),
								.RIGHT(RIGHT10),
								.KEY(KEY11),
								.LEFT1(LEFT11),
								.RIGHT1(RIGHT11)
								);							 
 
 Round1 round12         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT11),
								.RIGHT(RIGHT11),
								.KEY(KEY12),
								.LEFT1(LEFT12),
								.RIGHT1(RIGHT12)
								);							 
 
 Round1 round13         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT12),
								.RIGHT(RIGHT12),
								.KEY(KEY13),
								.LEFT1(LEFT13),
								.RIGHT1(RIGHT13)
								);							 
 
 Round1 round14         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT13),
								.RIGHT(RIGHT13),
								.KEY(KEY14),
								.LEFT1(LEFT14),
								.RIGHT1(RIGHT14)
								);							 
 
 Round1 round15          (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT14),
								.RIGHT(RIGHT14),
								.KEY(KEY15),
								.LEFT1(LEFT15),
								.RIGHT1(RIGHT15)
								);							 
 
 Round1 round16         (
                        .CLK(CLK),
								.RST(RST),
								.LEFT(LEFT15),
								.RIGHT(RIGHT15),
								.KEY(KEY16),
								.LEFT1(LEFT16),
								.RIGHT1(RIGHT16)
								);							 
								 
 Swap   swap            ( 
                         .LEFT16(LEFT16), 
								 .RIGHT16(RIGHT16), 
								 .LEFT_SWAP(LEFT_SWAP), 
								 .RIGHT_SWAP(RIGHT_SWAP) 
                         ); 
 
 Inverse_Initial_Permutation iip ( 
                                  .LEFT_SWAP(LEFT_SWAP), 
											 .RIGHT_SWAP(RIGHT_SWAP), 
											 .CIPHER_TEXT(CIPHER_TEXT) 
											 ); 
 
 endmodule 