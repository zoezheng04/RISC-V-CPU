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
        3'b000: begin //"ADDI" -> addition
            ALUResult = SrcA + SrcB;
        end
        3'b001: begin //"BNE" -> branch if not equal
            ALUResult = (SrcA != SrcB);
        end
        3'b010: begin //"JAL" -> jump and link
            ALUResult = SrcA + SrcB;
        end 
        3'b011: begin //"JALR" -> 
            ALUResult = SrcA + SrcB;
        end
        3'b100: begin //"LUI" ->
            ALUResult = {SrcB[32:12], 12b'0};
        end
        3'b101: begin //"LBU" ->
            ALUResult = {24b'0, SrcB[7:0]}
        end
        3'b110: begin //"SB" -> atomic swap word
            ALUResult = SrcA + SrcB
        end
        3'b111:begin //"SLL" 
            ALUResult = SrcA << SrcB[4:0]
        end
        default: begin
            ALUResult = 0;
            Zero = 0;
        end
    endcase;

    Zero = (ALUResult == 0) ? 1 : 0;

end

endmodule
