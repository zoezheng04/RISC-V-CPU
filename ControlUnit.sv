module ControlUnit  #(
        parameter   OP_WIDTH = 7
)(
    input logic [OP_WIDTH-1:0]      opcode,
    input logic                     EQ,         // zero flag
    input logic                     clk,        // need a clock to make RegWrite synchronous
    output logic                    RegWrite,   // this needs to be synchronous
    output logic                    ALUctrl,
    output logic                    ALUsrc,     // select line for ALU - selects ImmOp or regOp2
    output logic                    ImmSrc,     // selects what kind of extension it is
    output logic                    PCsrc
);

always_ff @(posedge clk) begin
        if(opcode == 7'd19)         // addi instruction                 
            RegWrite <= 1'b1;
        else 
            RegWrite <= 1'b0;
end

always_comb begin
    if((opcode == 7'd99) && (EQ == 0))begin      // bne instruction
        PCsrc = 1;
        ImmSrc = 0;
        ALUctrl =1;
        ALUsrc = 1;
    end

    else if (opcode == 7'd19)begin // addi instruction
        PCsrc = 0;
        ImmSrc = 1;
        ALUctrl = 0;       // add is zero
        ALUsrc = 1;        // want the immediate
    end

end

endmodule
