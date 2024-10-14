module adderpcnooffset_tb;
    // Parameters
    parameter WIDTH = 32;

    // Testbench signals
    logic [WIDTH-1:0] a; b;  // Inputs a and b
    logic cin;               // Carry-in
    logic [WIDTH-1:0] sum;   // Output sum
    logic cout;              // Carry-out

    // Instantiate the parameterized CLA adder
    param_adder #(.WIDTH(WIDTH)) uut (
        .a(a),
        .b(b),
        .cin(cin),
        .sum(sum),
        .cout(cout)
    );

    // Test procedure
    initial begin
        // Test case 1: Adding two small numbers
        a = 32'h00000005;  // a = 5
        b = 32'h00000003;  // b = 3
        cin = 1'b0;        // carry-in = 0
        #10;  // Wait 10 time units
        $display("Test Case 1: a = %h, b = %h, cin = %b, sum = %h, cout = %b", a, b, cin, sum, cout);

        // Test case 2: Adding with carry-in
        a = 32'h000000FF;  // a = 255
        b = 32'h00000001;  // b = 1
        cin = 1'b1;        // carry-in = 1
        #10;  // Wait 10 time units
        $display("Test Case 2: a = %h, b = %h, cin = %b, sum = %h, cout = %b", a, b, cin, sum, cout);

        // Test case 3: Overflow test
        a = 32'hFFFFFFFF;  // a = maximum 32-bit value
        b = 32'h00000001;  // b = 1
        cin = 1'b0;        // carry-in = 0
        #10;  // Wait 10 time units
        $display("Test Case 3: a = %h, b = %h, cin = %b, sum = %h, cout = %b", a, b, cin, sum, cout);

        // Test case 4: Adding two large numbers
        a = 32'h80000000;  // a = largest negative number in 32-bit signed
        b = 32'h7FFFFFFF;  // b = largest positive number in 32-bit signed
        cin = 1'b0;        // carry-in = 0
        #10;  // Wait 10 time units
        $display("Test Case 4: a = %h, b = %h, cin = %b, sum = %h, cout = %b", a, b, cin, sum, cout);

        // Test case 5: Random values
        a = 32'h12345678;  // a = some random value
        b = 32'h87654321;  // b = some random value
        cin = 1'b1;        // carry-in = 1
        #10;  // Wait 10 time units
        $display("Test Case 5: a = %h, b = %h, cin = %b, sum = %h, cout = %b", a, b, cin, sum, cout);

        // Finish the simulation
        $stop;
    end
endmodule
