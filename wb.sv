`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 28.10.2024 14:20:20
// Design Name: 
// Module Name: wb
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


module wb( input logic[31:0] md, ar, input logic mtr, output logic[31:0] wbd);
always_comb begin 
    if(mtr) begin
        wbd = md;
    end
    else begin
    wbd = ar;
    end
end
endmodule
