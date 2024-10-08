`include "register/regis32"
`include "mem/mem"
`include "adder/adder"


module ifstage(input logic clk, rst, output logic [31:0] inst);

logic [31:0] pcin;
logic [31:0] pcnext;

regis32 pc( .clk(clk), .rst(rst), .din(pcnext), .q(pcin));

adder pcinc( .a(pcin), .sum(pcnext));

mem m32( .addr(pcin), .dout(inst));

endmodule
