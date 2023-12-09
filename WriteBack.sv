module WriteBack (
    input logic          RegWriteW,
    input logic          ResultSrcW,
    input logic [31:0]   ALUResultW,
    input logic [31:0]   ReadDataW,

    output logic [31:0]  ResultW
);
assign ResultW = ResultSrcW ? ReadDataW : ALUResultW;
    
endmodule
