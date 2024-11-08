module alu_controller (
    input  logic [2:0] f3,          // funct3 field from instruction
    input  logic [6:0] f7,          // funct7 field from instruction
    input  logic [1:0] alu_ctrl,    // ALU control type from main control unit
    output logic [3:0] alu_op       // ALU operation control
);

    always_comb begin
        case (alu_ctrl)
            2'b00: begin  // I-type operations
                case (f3)
                    3'b101: alu_op = (f7 == 7'b0) ? 4'b0101 : 4'b1101; // SRLI/SRAI
                    default: alu_op = {1'b0, f3};  // Other immediate operations
                endcase
            end

            2'b01: begin  // Address calculation/immediate passing
                alu_op = 4'b0000;  // ADD
            end

            2'b10: begin  // R-type operations
                case (f3)
                    3'b000: alu_op = (f7 == 7'b0) ? 4'b0000 : 4'b1000; // ADD/SUB
                    3'b101: alu_op = (f7 == 7'b0) ? 4'b0101 : 4'b1101; // SRL/SRA
                    default: alu_op = {1'b0, f3};  // Other ALU operations
                endcase
            end

            2'b11: begin  // Branch comparison
                alu_op = 4'b0001;  // SUB for comparison
            end
        endcase
    end
endmodule