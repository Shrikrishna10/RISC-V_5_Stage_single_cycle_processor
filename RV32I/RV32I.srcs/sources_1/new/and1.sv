`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05.11.2024 14:13:05
// Design Name: 
// Module Name: and1
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module and1#(parameter WIDTH = 2) (input [WIDTH-1:0] a, [WIDTH-1:0] b, output [WIDTH-1:0] c);
assign c = a & b;
endmodule

