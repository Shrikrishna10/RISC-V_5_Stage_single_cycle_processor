module rca_adder#(parameter w= 32) (input logic [w-1:0] a, b, input logic cin, output logic [w-1:0] sum, output logic cout);
logic [w-1:0] p, [w-1]g;

assign p = a & b;
assign g = a ^ b;

endmodule 
