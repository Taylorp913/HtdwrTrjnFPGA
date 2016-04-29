`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:       RAJESH GLOBAL SOLUTION(RGS
// Engineer:      KRUPESH
// 
// Create Date:    14:33:47 11/24/2008 
// Design Name:    DES
// Module Name:    SBOX_OUTPUT 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS MODULE TAKES INPUT FROM THE 8 SBOX TABLE AND GERENRATE 32 BIT OUTPUT
//                 WHICH IS GIVEN TO PERMUTATION BLOCK AS A INPUT.
//
// Dependencies:   Sbox_Rom1,Sbox_Rom2,Sbox_Rom3,Sbox_Rom4,Sbox_Rom5,Sbox_Rom6,Sbox_Rom7,Sbox_Rom8
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Sbox_Output(S1_OUTPUT, S2_OUTPUT, S3_OUTPUT, S4_OUTPUT, S5_OUTPUT, S6_OUTPUT,
                   S7_OUTPUT, S8_OUTPUT, S_OUTPUT);
						 
  input   [3 : 0] S1_OUTPUT;
  input   [3 : 0] S2_OUTPUT;
  input   [3 : 0] S3_OUTPUT;
  input   [3 : 0] S4_OUTPUT;
  input   [3 : 0] S5_OUTPUT;
  input   [3 : 0] S6_OUTPUT;
  input   [3 : 0] S7_OUTPUT;
  input   [3 : 0] S8_OUTPUT;
  output  [32 : 1]S_OUTPUT;
  
  wire [3 : 0] S1_OUTPUT;
  wire [3 : 0] S2_OUTPUT;
  wire [3 : 0] S3_OUTPUT;
  wire [3 : 0] S4_OUTPUT;
  wire [3 : 0] S5_OUTPUT;
  wire [3 : 0] S6_OUTPUT;
  wire [3 : 0] S7_OUTPUT;
  wire [3 : 0] S8_OUTPUT;
  
  wire [32 : 1]S_OUTPUT;
  
  assign S_OUTPUT = {S1_OUTPUT,S2_OUTPUT,S3_OUTPUT,S4_OUTPUT,S5_OUTPUT,S6_OUTPUT,
                     S7_OUTPUT,S8_OUTPUT};


endmodule