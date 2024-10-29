module reg_file( input clk, wb, 
    input	logic[4:0]  rs1,
  	input	logic[4:0]  rs2,
  	input	logic[4:0]  rd,
    input logic[31:0] datain,
    output logic[31:0] reg1,
    output logic[31:0] reg2
    );
    reg [31:0] reg_fi [0:1023];


endmodule
