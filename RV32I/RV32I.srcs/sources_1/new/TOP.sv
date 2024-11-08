module TOP(input logic clk, rst);
// I_F stage
logic [31:0] pcin;
logic [31:0] pcnext;
logic [31:0] inst;
//I_D stage
logic [31:0] reg_wr, wd, reg1, reg2, i_type_imm, s_type_imm, b_type_imm, u_type_imm, j_type_imm, eimm;
logic [4:0] rs1, rs2, rd;
logic [6:0] opcode;
logic [2:0] funct3;
logic [6:0] funct7;
//controller
//logic [6:0] opcod;     // Opcode from instruction
//logic [2:0] f3;     // funct3 field from instruction
logic reg_w;         // Register write enable
logic mem_rd, mem_wr;   // Memory read/write control
logic wb_ctrl;   // Write-back control
logic [2:0] branch_ctrl; // Branch control
logic [2:0] mem_ctrl;   // Memory access control
logic alu_s1, alu_s2;   // ALU input selection control
logic [1:0] alu_ctrl;
//alu controller
//logic [2:0] alu_f3;        // funct3 field from instruction
//logic [6:0] f7;          // funct7 field from instruction
logic [1:0] ctrl;    // ALU control type from main control unit
logic [3:0] op;
//EX stage
logic [31:0] r1, r2, imm, alu_res;
logic [3:0] alu_op;
logic alu_src, zf;
//WB stage
logic [31:0] mr;
logic bout;


// I_F stage connections
regis_if pc( .clk(clk), .rst(rst), .din(pcnext), .q(pcin));
adder_if pcinc( .a(pcin), .sum(pcnext));
mem_if m32( .addr(pcin), .dout(inst));

// I_D stage connections
    decoder_id decoder (
        .instruction(inst), .rs1(rs1), .rs2(rs2), .rd(rd), .opcode(opcode), .funct3(funct3),
        .funct7(funct7), .i_type_imm(i_type_imm), .s_type_imm(s_type_imm), .b_type_imm(b_type_imm),
        .u_type_imm(u_type_imm), .j_type_imm(j_type_imm));
    reg_id regfile (
        .clk(clk), .rst(rst), .reg_wr(reg_wr), .rs1(rs1), .rs2(rs2), .rd(rd), .wd(wd),
        .reg1(reg1), .reg2(reg2));
    sign_extension immgen(.iti(i_type_imm), .sti(s_type_imm), .bti(b_type_imm), .uti(u_type_imm), 
    .jti(j_type_imm), .opcode(opcode), .eimm(eimm));

// controllers
control_unit controller(.opcode(opcode), .f3(funct3), .reg_wr(reg_wr), .mem_rd(mem_wd),
                         .mem_wr(mem_wr), .wb_ctrl(wb_ctrl), .branch_ctrl(branch_ctrl),
                         .mem_ctrl(mem_ctrl), .alu_s1(alu_s1), .alu_s2(alu_s2), .alu_ctrl(alu_ctrl));
alu_controller alu_cu(.f3(funct3), .f7(funct7), .alu_ctrl(alu_ctrl), .alu_op(op));

//Ex stage
// idk where to add the imm correctly
mux2_1 m1(.d0(reg1), .d1(eimm), .s(alu_s1), .y(r1));
mux2_1 m2(.d0(reg2), .d1(eimm), .s(alu_s2), .y(r2));
ALU alu_ex(.alu_op(op), .rs1(r1), .rs2(r2), .rd1(alu_res), .zf(zf));

// Mem_ stage
mem_access mema( .data(reg2), .addr(alu_res), .mR(mem_wd), .mW(mem_wr), .clk(clk), .mout(mr));
// Wb stage
wb wrb(.md(mr), .ar(alu_res), .mtr(wb_ctrl), .wbd(pcin));

//branch additions
and1 an(.a(zf), .b(branch_ctrl), .c(bout));
endmodule
