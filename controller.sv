module controller (
    input  logic [2:0] f3,        // funct3 field from the instruction
    input  logic [6:0] f7,        // funct7 field from the instruction
    input  logic [6:0] opcode,    // Opcode from the instruction

    output logic reg_wr,          // Register write enable
    output logic mem_rd, mem_wr,  // Memory read/write control
    output logic [1:0] wb_ctrl,   // Write-back control
    output logic [2:0] branch_ctrl, mem_ctrl, // Branch and memory control
    output logic alu_s1, alu_s2,  // ALU input selection control
    output logic [3:0] alu_op     // ALU operation control
);

    // Combinational control logic block
    always_comb begin
        // Default values (NOP case)
        reg_wr      = 1'b0;
        mem_rd      = 1'b0;
        mem_wr      = 1'b0;
        wb_ctrl     = 2'b00;
        alu_s1      = 1'b0;
        alu_s2      = 1'b0;
        branch_ctrl = 3'b000;
        mem_ctrl    = 3'b000;
        alu_op      = 4'b0000;

        // Opcode-based control logic
        case (opcode)
            7'b0110011: begin  // R-type (arithmetic/logic)
                reg_wr  = 1'b1;
                wb_ctrl = 2'b01;
                alu_s1  = 1'b1;
                alu_s2  = 1'b1;
                branch_ctrl = 3'b000;  // No branching

                // ALU operation control based on funct3 and funct7
                case (f3)
                    3'b000: alu_op = (f7 == 7'b0) ? 4'b0000 : 4'b1000; // ADD / SUB
                    3'b101: alu_op = (f7 == 7'b0) ? 4'b0101 : 4'b1101; // SRL / SRA
                    default: alu_op = {1'b0, f3};  // Other ALU operations
                endcase
            end

            7'b0010011: begin  // I-type (arithmetic immediate)
                reg_wr  = 1'b1;
                wb_ctrl = 2'b01;
                alu_s1  = 1'b1;
                alu_s2  = 1'b0;

                case (f3)
                    3'b101: alu_op = (f7 == 7'b0) ? 4'b0101 : 4'b1101; // SRL / SRA
                    default: alu_op = {1'b0, f3};  // Other immediate operations
                endcase
            end

            7'b0000011: begin  // Load (LW, LH, LB)
                reg_wr  = 1'b1;
                mem_rd  = 1'b1;
                wb_ctrl = 2'b00;
                alu_s1  = 1'b1;
                alu_s2  = 1'b0;
                alu_op  = 4'b0000;  // ADD for address calculation

                // Memory access type control
                case (f3)
                    3'b000: mem_ctrl = 3'b000;  // LB
                    3'b001: mem_ctrl = 3'b001;  // LH
                    3'b010: mem_ctrl = 3'b010;  // LW
                    3'b100: mem_ctrl = 3'b011;  // LBU
                    3'b101: mem_ctrl = 3'b100;  // LHU
                    default: mem_ctrl = 3'b000;  // Default to LB
                endcase
            end

            7'b0100011: begin  // Store (SW, SH, SB)
                mem_wr  = 1'b1;
                alu_s1  = 1'b1;
                alu_s2  = 1'b0;
                alu_op  = 4'b0000;  // ADD for address calculation

                // Memory store type control
                case (f3)
                    3'b000: mem_ctrl = 3'b101;  // SB
                    3'b001: mem_ctrl = 3'b110;  // SH
                    3'b010: mem_ctrl = 3'b111;  // SW
                    default: mem_ctrl = 3'b101;  // Default to SB
                endcase
            end

            7'b1100011: begin  // Branch instructions (BEQ, BNE, etc.)
                branch_ctrl = f3;  // Branch control is based on funct3
                alu_op  = 4'b0001;  // SUB for comparison
            end

            7'b0110111: begin  // LUI
                reg_wr  = 1'b1;
                wb_ctrl = 2'b01;
                alu_op  = 4'b0000;  // Pass immediate value
            end

            7'b0010111: begin  // AUIPC
                reg_wr  = 1'b1;
                wb_ctrl = 2'b01;
                alu_op  = 4'b0000;  // PC + immediate
            end

            7'b1101111, 7'b1100111: begin  // JAL and JALR
                reg_wr  = 1'b1;
                wb_ctrl = 2'b10;  // Write PC+4 to rd
                alu_op  = 4'b0000;  // Pass immediate
            end

            default: begin  // Default case: No operation
                reg_wr      = 1'b0;
                mem_rd      = 1'b0;
                mem_wr      = 1'b0;
                wb_ctrl     = 2'b00;
                alu_op      = 4'b0000;
                branch_ctrl = 3'b000;
                mem_ctrl    = 3'b000;
            end
        endcase
    end

endmodule
