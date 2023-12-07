module Execute #(
        parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0]    RD1,
    input logic [DATA_WIDTH-1:0]    RD2,
    input logic [DATA_WIDTH-1:0]    Imm_o,
    input logic [2:0]               ALUctrl,
    input logic                     ALUsrc,
    output logic                    EQ,
    output logic [DATA_WIDTH-1:0]   ALU_o
);

logic [DATA_WIDTH-1:0] ALUop2;

alu alu_top(
    .SrcA(RD1),
    .SrcB(ALUop2),
    .ALUControl(ALUctrl),
    .ALUResult(ALU_o),
    .Zero(EQ)
);

always_comb begin
    ALUop2 = ALUsrc ? Imm_o : RD2;
end

endmodule
