module SignExtend#(
        parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:7]    Imm_i,  // first seven bits are part of opcode and not needed
    input logic [2:0]               ImmSrc,
    output logic [DATA_WIDTH-1:0]   Imm_o
);

always_comb begin
    case(ImmSrc)
    //I-type
    3'b000: Imm_o = {{21{Imm_i[31]}}, Imm_i[30:20]};
    //U-type
    3'b001: Imm_o = {Imm_i[31:12], 12'b0};
    //S-type
    3'b010: Imm_o = {{21{Imm_i[31]}}, Imm_i[30:25], Imm_i[11:7]};
    //B-type
    3'b011: Imm_o = {{20{Imm_i[31]}}, Imm_i[7], Imm_i[30:25], Imm_i[11:8], 1'b0};
    //J-type
    3'b100: Imm_o = {{12{Imm_i[31]}}, Imm_i[19:12], Imm_i[20], Imm_i[30:21], 1'b0};
    endcase
end

endmodule
