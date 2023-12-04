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
        3'b000: begin //"ADDI" 
            ALUResult = SrcA + SrcB;
            Zero = (ALUResult == 0) ? 1 : 0;
        end
        3'b001: begin //"BNE" 
            ALUResult = (SrcA != SrcB);
            Zero = (ALUResult == 0) ? 1 : 0;
        end
        3'b010: begin //"JAL" 
            ALUResult = SrcA + SrcB;
            Zero = (ALUResult == 0) ? 1 : 0;
        end 
        3'b011: begin //"JALR" 
            ALUResult = SrcA + SrcB;
            Zero = (ALUResult == 0) ? 1 : 0;
        end
        3'b100: begin //"LUI" 
            ALUResult = {{20{1'b0}}, SrcB[32:12]};
            Zero = (ALUResult == 0) ? 1 : 0;
        end
        3'b101: begin //"LBU" 
            ALUResult = {24'b0, SrcB[7:0]};
            Zero = (ALUResult == 0) ? 1 : 0;
        end
        3'b110: begin //"SB" 
            ALUResult = SrcA + SrcB;
            Zero = (SrcA == 0 && SrcB == 0 && ALUResult == 0) ? 1 : 0;
        end
        3'b111:begin //"SLL" 
            ALUResult = SrcA << SrcB[4:0];
            Zero = (SrcB == 0 || ALUResult == 0) ? 1 : 0;
        end
        default: begin
            ALUResult = 0;
            Zero = 0;
        end
    endcase;

end

endmodule
