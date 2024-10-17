module mem(input clk, input [31:0] addr, output[31:0] dout);

reg [31:0] mem [1023:0];

always_ff @(posedge clk) begin
	dout <= mem[ addr[31:0]];
end 
endmodule
