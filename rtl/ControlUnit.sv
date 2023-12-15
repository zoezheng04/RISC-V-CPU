module ControlUnit  (
    input logic [6:0]               opcode,     // Input determines the type of Instruction alongside funct3 and funct7
    input logic [2:0]               funct3,
    input logic                     funct7,
    input logic                     EQ,         // zero flag

    output logic                    RegWrite,   // this needs to be synchronous
    output logic [3:0]              ALUctrl,    // Sets type of arithmetic operation is done
    output logic                    ALUsrc,     // select line for ALU - selects ImmOp or regOp2
    output logic [2:0]              ImmSrc,     // selects what type of extension it is
    output logic                    PCSrc,      // Sets PCNext to PCTarget or PCPlus4
    output logic                    MemWrite,   // memory write enable
    output logic                    ResultSrc,  // Sets write data to Data Memory or ALUResult
    output logic                    JumpSrc,
    output logic                    JRetSrc,
    output logic                    MemType     // Memory address type - byte addressing or word addressing
);

logic [1:0]                         opfunct7;

assign opfunct7 = {opcode[5], funct7};

typedef enum logic [6:0] {
    Type_R      = 7'b0110011,   // 3 register instructions (ALU operations)
    Type_I      = 7'b0000011,   // Immediate Load Instructions
    Type_I_ALU  = 7'b0010011,   // Immediate ALU Instructions
    Type_S      = 7'b0100011,   // Immediate Store Instructions
    Type_B      = 7'b1100011,   // Branch Instructions
    Type_U      = 7'b0010111,   // Add upper immediate to PC
    Type_U_LUI  = 7'b0110111,   // Load upper immediate
    Type_I_JALR = 7'b1100111,   // Jump and Link register
    Type_J_JAL  = 7'b1101111    // Jump and Link
} Type;

always_comb begin
    Type Type_O = opcode;
    RegWrite  = (Type_O == Type_R || Type_O == Type_I || Type_O == Type_I_ALU || Type_O == Type_I_JALR || Type_O == Type_J_JAL || Type_O == Type_U || Type_O == Type_U_LUI) ? 1'b1 : 1'b0;
    ALUsrc    = (Type_O == Type_I || Type_O == Type_I_ALU || Type_O == Type_I_JALR || Type_O == Type_J_JAL || Type_O == Type_S || Type_O == Type_U_LUI) ? 1'b1 : 1'b0;
    MemWrite  = (Type_O == (Type_S)) ? 1'b1 : 1'b0; // Sets Memory write enable only for store instructions
    ResultSrc = (Type_O == (Type_I)) ? 1'b1 : 1'b0; // Sets source to Data Memory only for load instructions
    PCSrc     = ((Type_O == Type_B && funct3 == 3'b000 && EQ) || (Type_O == Type_B && funct3 == 3'b001 && ~EQ) || Type_O == Type_J_JAL || Type_O == Type_I_JALR) ? 1'b1 : 1'b0; //Sets PCSrc to true for branch and jump instructions
    JumpSrc   = (Type_O == Type_J_JAL || Type_O == Type_I_JALR) ? 1'b1 : 1'b0;
    JRetSrc   = (Type_O == Type_I_JALR) ? 1'b1 : 1'b0;

    case (Type_O)

        Type_R, Type_I_ALU:
            case(funct3)
                3'b000: begin
                    if(opfunct7 == 2'b11) begin
                        ImmSrc = 3'b000;
                        ALUctrl = 4'b1000; // SUB
                        MemType = 1'b0;
                    end 
                    else begin
                        ALUctrl = 4'b0000; // ADD
                        ImmSrc = 3'b000;
                        MemType = 1'b0;
                    end
                end
                3'b001: begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b0111; // Shift Left Logical
                    MemType = 1'b0; 
                end  
                3'b100: begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b1010; // XOR
                    MemType = 1'b0;
                end
                
                3'b101: begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b1001; // Shift Right Logical
                    MemType = 1'b0;
                end
                3'b110: begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b1011; // OR
                    MemType = 1'b0;
                end
                3'b111: begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b1100; // AND
                    MemType = 1'b0;
                end
                default: ;
            endcase

        Type_I: begin
            case(funct3)
                3'b100:begin
                    ImmSrc = 3'b000;
                    ALUctrl = 4'b0101; // Load Byte Unsigned
                    MemType = 1'b1;
                end
                default: ;
            endcase
        end


        Type_B: begin
            case (funct3)
                3'b000: begin
                    ImmSrc = 3'b011;
                    ALUctrl = 4'b1101; // BEQ
                    MemType = 1'b0;
                end
                3'b001: begin
                    ImmSrc = 3'b011;
                    ALUctrl = 4'b0001; // BNE
                    MemType = 1'b0;
                end
                default: ;
            endcase
        end

        Type_S: begin
            ImmSrc = 3'b010;
            ALUctrl = 4'b0110; // Store Byte
            MemType = 1'b1;
        end

        Type_U_LUI: begin
            ImmSrc = 3'b100;
            ALUctrl = 4'b0100; // Load Upper Immediate
            MemType = 1'b0;
        end

        Type_J_JAL: begin
            ImmSrc = 3'b100;
            ALUctrl = 4'b0010; // Jump and Link
            MemType = 1'b0;
        end

        Type_I_JALR: begin
            ImmSrc = 3'b000;   
            ALUctrl = 4'b0011; // Jump and link register
            MemType = 1'b0;
        end

        default: begin
            ImmSrc = 3'b000;
            ALUctrl = 4'b0000;
            MemType = 1'b0;
        end
    endcase
end    

endmodule
