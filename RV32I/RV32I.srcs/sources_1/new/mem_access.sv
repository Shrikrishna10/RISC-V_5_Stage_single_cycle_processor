module mem_access#(parameter S=32)(input logic[31:0] data, input logic[S-1:0] addr, input logic clk, mR, mW, output logic[31:0] mout );
    logic [7:0] df[2*S-1:0];    
    always @(posedge clk) begin
        if (mR) begin
            mout[7:0] <= df[addr];
            mout[15:8] <= df[addr+1];
            mout[23:16] <= df[addr+2];
            mout[31:24] <= df[addr+3];
        end
        else if (mW) begin
           if(mout[31:24]!=8'bx)
            df[addr+3] <= mout[31:24];
           else
            df[addr+3] <= 8'b0;
           if(mout[23:16]!=8'bx)
            df[addr+2] <= mout[23:16];
           else 
            df[addr+2] <= 8'b0;
            if(mout[15:8]!=8'bx)
            df[addr+1] <= mout[15:8];
           else 
            df[addr+1] <= 8'b0;
            if(mout[7:0]!=8'bx)
            df[addr] <= mout[7:0];
           else 
            df[addr] <= 8'b0;
        end
        end
endmodule
