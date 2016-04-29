
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:        RAJESH GLOBAL SOLUTION(RGS
// Engineer:       KRUPESH
// 
// Create Date:    15:03:44 11/24/2008 
// Design Name:    DES
// Module Name:    Xor_Permutation 
// Project Name:   DATA ENCRYPTION STANDARD(DES)
// Target Devices: SPARTAN-3(XC3S400)
// Tool versions:  XILINX 9.1I
// Description:    THIS BLOCK PERFORMS XOR OPERATION.IT TAKES ONE 32 BIT INPUT FROM Permutation
//                 BLOCK AND SECOND 32 BIT INPUT FROM Reg32 BLOCK.AND IT GENERATES 32 BIT OUTPUT.
//
// Dependencies:   Permutation and Reg32
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Xor_Permutation(PERMUTATION_OUTPUT, LEFT, RIGHT_REG);

  input  [32 : 1]PERMUTATION_OUTPUT;
  
  input  [32 : 1]LEFT;
  
 // input  [32 : 1]RIGHT_REG1;
  
 // output [32 : 1]LEFT_REG2;
  
  output [32 : 1]RIGHT_REG;
  
  wire   [32 : 1]PERMUTATION_OUTPUT;
  
  wire   [32 : 1]LEFT;
  
 // wire   [32 : 1]RIGHT_REG1;
  
 // reg    [32 : 1]LEFT_REG2;
  
  reg    [32 : 1]RIGHT_REG;
  
  always @(PERMUTATION_OUTPUT or LEFT or RIGHT_REG)
  
     begin
	  
//	     LEFT_REG2  <= RIGHT_REG1;
	  
	     RIGHT_REG <= PERMUTATION_OUTPUT ^ LEFT;
		  
     end

endmodule 