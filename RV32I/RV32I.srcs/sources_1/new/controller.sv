module control_unit (
    input  logic [6:0] opcode,     // Opcode from instruction
    input  logic [2:0] f3,         // funct3 field from instruction
    
    output logic reg_wr,           // Register write enable
    output logic mem_rd, mem_wr,   // Memory read/write control
    output logic wb_ctrl,    // Write-back control
    output logic [2:0] branch_ctrl, // Branch control
    output logic [2:0] mem_ctrl,   // Memory access control
    output logic alu_s1, alu_s2,   // ALU input selection control
    output logic [1:0] alu_ctrl    // ALU control type (to ALU controller)
);

    // Combinational control logic block
    always_comb begin
        // Default values
        reg_wr      = 1'b0;
        mem_rd      = 1'b0;
        mem_wr      = 1'b0;
        wb_ctrl     = 2'b00;
        alu_s1      = 1'b0;
        alu_s2      = 1'b0;
        branch_ctrl = 3'b000;
        mem_ctrl    = 3'b000;
        alu_ctrl    = 2'b00;

        case (opcode)
            7'b0110011: begin  // R-type
                reg_wr   = 1'b1;
                wb_ctrl  = 2'b01;
                alu_s1   = 1'b1;
                alu_s2   = 1'b1;
                alu_ctrl = 2'b10;  // R-type ALU operations
            end

            7'b0010011: begin  // I-type
                reg_wr   = 1'b1;
                wb_ctrl  = 2'b01;
                alu_s1   = 1'b1;
                alu_s2   = 1'b0;
                alu_ctrl = 2'b00;  // I-type ALU operations
            end

            7'b0000011: begin  // Load
                reg_wr   = 1'b1;
                mem_rd   = 1'b1;
                wb_ctrl  = 2'b00;
                alu_s1   = 1'b1;
                alu_s2   = 1'b0;
                alu_ctrl = 2'b01;  // Address calculation
                
                case (f3)
                    3'b000: mem_ctrl = 3'b000;  // LB
                    3'b001: mem_ctrl = 3'b001;  // LH
                    3'b010: mem_ctrl = 3'b010;  // LW
                    3'b100: mem_ctrl = 3'b011;  // LBU
                    3'b101: mem_ctrl = 3'b100;  // LHU
                    default: mem_ctrl = 3'b000;
                endcase
            end

            7'b0100011: begin  // Store
                mem_wr   = 1'b1;
                alu_s1   = 1'b1;
                alu_s2   = 1'b0;
                alu_ctrl = 2'b01;  // Address calculation
                
                case (f3)
                    3'b000: mem_ctrl = 3'b101;  // SB
                    3'b001: mem_ctrl = 3'b110;  // SH
                    3'b010: mem_ctrl = 3'b111;  // SW
                    default: mem_ctrl = 3'b101;
                endcase
            end

            7'b1100011: begin  // Branch
                branch_ctrl = f3;
                alu_ctrl = 2'b11;  // Branch comparison
            end

            7'b0110111: begin  // LUI
                reg_wr   = 1'b1;
                wb_ctrl  = 2'b01;
                alu_ctrl = 2'b01;  // Pass immediate
            end

            7'b0010111: begin  // AUIPC
                reg_wr   = 1'b1;
                wb_ctrl  = 2'b01;
                alu_ctrl = 2'b01;  // PC + immediate
            end

            7'b1101111, 7'b1100111: begin  // JAL/JALR
                reg_wr   = 1'b1;
                wb_ctrl  = 2'b10;
                alu_ctrl = 2'b01;
            end

            default: begin  // NOP
                reg_wr      = 1'b0;
                mem_rd      = 1'b0;
                mem_wr      = 1'b0;
                wb_ctrl     = 2'b00;
                alu_ctrl    = 2'b00;
                branch_ctrl = 3'b000;
                mem_ctrl    = 3'b000;
            end
        endcase
    end
endmodule
