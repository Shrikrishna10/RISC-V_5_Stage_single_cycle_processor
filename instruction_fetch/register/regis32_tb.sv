module regis32_tb;
    logic        clk;
    logic        rst;
    logic [31:0] din;
    logic [31:0] q;

    // Instantiate the 32-bit register
    regis32 uut (
        .clk(clk),
        .rst(rst),
        .din(din),
        .q(q)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns clock period
    end

    // Test process
    initial begin
        // Initialize signals
        rst = 0;
        din = 32'hDEADBEEF;

        // Apply reset
        rst = 1; #10;
        rst = 0; #10;

        // Enable and load data into the register
        din = 32'h12345678; #10;
        $display("Time: %0t | q = %h", $time, q); // Should be 12345678

        // Load new data
        din = 32'h87654321; #10;
        $display("Time: %0t | q = %h", $time, q); // Should be 87654321

        // Disable enable signal, value should not change
        din = 32'hAABBCCDD; #10;
        $display("Time: %0t | q = %h", $time, q); // Should remain 87654321

        $stop;
    end
endmodule
