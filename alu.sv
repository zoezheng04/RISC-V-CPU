module alu #(
    parameter DATA_WIDTH = 32
)(
input logic [DATA_WIDTH-1:0] SrcA,
input logic [DATA_WIDTH-1:0] SrcB,
input logic [3:0] ALUControl,
output logic [DATA_WIDTH-1:0] ALUResult,
output logic Zero
);

always_comb begin
    case (ALUControl)
        4'b0000: ALUResult = SrcA + SrcB; //ADD 
        4'b0001: ALUResult = 32'(SrcA != SrcB); //BNE
        //4'b0001: ALUResult = (SrcA != SrcB); //BNE
        4'b0010: ALUResult = SrcB; //JAL
        //4'b0010: ALUResult = SrcA + SrcB; //JAL
        4'b0011: ALUResult = SrcA + SrcB; //JALR
        4'b0100: ALUResult = {SrcB[31:12], 12'b0}; //LUI
        //4'b0100: ALUResult = {{20{1'b0}}, SrcB[32:12]}; //LUI
        4'b0101: ALUResult = {24'b0, SrcB[7:0]}; //LBU
        4'b0110: ALUResult = SrcA + SrcB; //SB
        4'b0111: ALUResult = SrcA << SrcB[4:0]; //SLL
        4'b1000: ALUResult = SrcA - SrcB; //SUB
        4'b1001: ALUResult = SrcA >> SrcB[4:0];//SRL
        4'b1010: ALUResult = SrcA ^ SrcB; //XOR
        4'b1011: ALUResult = SrcA | SrcB; //OR
        4'b1100: ALUResult = SrcA & SrcB; //AND
        4'b1101: ALUResult = (SrcA ^ SrcB); //BEQ
        default:
            ALUResult = 0;
    endcase;
    case (ALUResult)
        32'b0: Zero = 1'b1;
        default: Zero = 1'b0;
    endcase;

end

endmodule
