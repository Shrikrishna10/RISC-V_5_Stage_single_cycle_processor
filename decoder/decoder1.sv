module riscv_decoder (
    input  logic [31:0] instr,    // 32-bit instruction
    output logic [6:0]  opcode,   // Opcode
    output logic [4:0]  rd,       // Destination register (for R/I-type)
    output logic [2:0]  funct3,   // Function3 code
    output logic [4:0]  rs1,      // Source register 1
    output logic [4:0]  rs2,      // Source register 2 (for R/S-type)
    output logic [6:0]  funct7,   // Function7 code (for R-type)
    output logic [31:0] imm       // Immediate value (for I/S-type)
);

    // Extracting opcode
    assign opcode = instr[6:0];

    // R-type Instruction: Extract relevant fields
    assign rd     = instr[11:7];   // Destination register
    assign funct3 = instr[14:12];  // Function code 3
    assign rs1    = instr[19:15];  // Source register 1
    assign rs2    = instr[24:20];  // Source register 2 (for R and S-type)
    assign funct7 = instr[31:25];  // Function code 7 (for R-type)

    // Decoding immediate value based on the instruction type
    always_comb begin
        case(opcode)
            7'b0010011: // I-type (e.g., ADDI, SLTI, ORI)
                imm = {{20{instr[31]}}, instr[31:20]}; // Sign-extended immediate
            7'b0100011: // S-type (e.g., SW, SH, SB)
                imm = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // Sign-extended immediate
            default:
                imm = 32'b0;
        endcase
    end

endmodule
