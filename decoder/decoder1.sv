module decoder1(input [4:0]din, output [31:0] dout);
always_comb begin
dout = 32'b1 << din;
end
endmodule
