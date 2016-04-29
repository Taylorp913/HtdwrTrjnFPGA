`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:58 04/28/2015 
// Design Name: 
// Module Name:    comparator32 
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

//this comparator checks for the 32 input bits to match the bit stream
//00110011 00011101 01011000 10111010
//msb                             lsb
//                          lsb
//I suggest connecting bits 0, 1, 3, 6, 7, 9, 11, 13, 14, 15, 19, 20, 22,
//23, 26, 29, 30, 32, 35, 36, 38, 39, 41, 45, 47, 49, 50, 52, 55, 58, 59, and 61
//                                                                           msb
//from the plaintext as the inputs to this comparator.

module comparator32(in,out);
input [31:0] in;
output out;

reg out;

wire [31:0] in;

always @(in)begin
out <= in[1]&in[3]&in[4]&in[5]&in[7]&in[11]&in[12]&in[14]&in[16]&in[18]&in[19]&in[20]&in[24]&in[25]&in[28]&in[29]
    &~(in[0]|in[2]|in[6]|in[8]|in[9]|in[10]|in[13]|in[15]|in[17]|in[21]|in[22]|in[23]|in[26]|in[27]|in[30]|in[31]);
end

endmodule
