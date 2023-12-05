module WriteBack (
    input logic          RegWriteW,
    input logic [1:0]    ResultSrcW,
    input logic [31:0]   ALUResultW,
    input logic [31:0]   ReadDataW,
    input logic [31:0]   PCPlus4W,

    output logic [31:0]  ResultW
);
    
case (ResultSrcW)
    2'b00: assign ResultW = ALUResultW;
    2'b01: assign ResultW = ReadDataW;
    2'b10: assign ResultW = PCPlus4W; 
    default: ResultW = ALUResult;
endcase

endmodule
