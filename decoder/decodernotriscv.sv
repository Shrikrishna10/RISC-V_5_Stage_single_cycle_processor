module decodernotriscv(input [4:0]din, output [31:0] dout);
int dout1;
always_comb begin
dout1 = 32'b1 << din;
end
assign dout = dout1;
endmodule
