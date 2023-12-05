module alu #(
    parameter DATA_WIDTH = 32
)(
input logic [DATA_WIDTH-1:0] SrcA,
input logic [DATA_WIDTH-1:0] SrcB,
input logic [2:0] ALUControl,
output logic [DATA_WIDTH-1:0] ALUResult,
output logic Zero
);

always_comb begin
    case(ALUControl)
        3'b000: ALUResult = SrcA + SrcB; //"ADDI" 
        3'b001: ALUResult = (SrcA != SrcB); //"BNE"
        3'b010: ALUResult = SrcA + SrcB; //"JAL"
        3'b011: ALUResult = SrcA + SrcB; //"JALR"
        3'b100: ALUResult = {{20{1'b0}}, SrcB[32:12]}; //"LUI" 
        3'b101: ALUResult = {24'b0, SrcB[7:0]}; //"LBU"
        3'b110: ALUResult = SrcA + SrcB; //"SB" 
        3'b111: ALUResult = SrcA << SrcB[4:0]; //"SLL" 
        default:
            ALUResult = 0;
    endcase;
    case(ALUResult)
        32'b0: Zero = 1'b1;
        default: Zero = 1'b0;
    endcase;

end

endmodule
