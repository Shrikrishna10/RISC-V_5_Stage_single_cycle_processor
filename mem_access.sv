module mem_access(input logic[31:0] addr, data, input logic clk, mR, mW, output logic[31:0] mout );
    reg [31:0] mem [1023:0];
    always_ff @(posedge clk) begin
        if (mR) begin
            mout <= mem[addr[9:0]];
        end
        else if (mW) begin
            mem[addr[9:0]] <= data;
        end
        else
        mem[addr[9:0]] <= 10'b0;
        end
endmodule
