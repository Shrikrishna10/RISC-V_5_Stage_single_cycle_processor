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