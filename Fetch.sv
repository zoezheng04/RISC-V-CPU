module Fetch (
    input logic             clk,
    input logic             reset,
    input logic             trigger,
    input logic             StallPC,
    input logic             StallF,
    input logic [31:0]      PCBranchD,
    input logic             PCSrcD,
    input logic [31:0]      BranchReturnE,
    input logic             MissPredictionE,

    output logic [31:0]     InstrD,
    output logic [31:0]     PCPlus4D         
);

////////////////// Wires //////////////////////
logic  [31:0]            PCF_wire;
logic  [31:0]            PCNext_wire;
logic  [31:0]            PCPlus4F_wire;
logic  [31:0]            InstrF_wire;
logic                    MissPredictionE_wire;

//////////////// Assignments /////////////////
assign PCPlus4F_wire = PCF_wire + 4;
assign PCNext_wire = (trigger ? (MissPredictionE ? BranchReturnE : ((PCSrcD ? PCBranchD : PCPlus4F_wire))) : 32'hBFC00000);
assign MissPredictionE_wire = MissPredictionE;
always_ff @(posedge clk) begin
        MissPredictionE_wire = 0;
end
//////////// Instantiating Modules ///////////
PC ProgramCounter(
    //////// INPUTS ////////
    .clk(clk),
    .rst(reset),
    .Stall(StallPC),
    .PCNext(PCNext_wire),
    .MissPredictionE(MissPredictionE),
    //////// OUTPUTS ///////
    .PC(PCF_wire)
);

rom Instruction_Memory(
    //////// INPUTS ////////
    .addr(PCF_wire),
    //////// OUTPUTS ///////
    .dout(InstrF_wire)
);

RegF Pipeline_RegisterF(
    //////// INPUTS ////////
    .InstrF(InstrF_wire),
    .PCPlus4F(PCPlus4F_wire),
    .clk(clk),
    .Stall(StallF),
    .Flush(MissPredictionE_wire),
    //////// OUTPUTS ///////
    .InstrD(InstrD),
    .PCPlus4D(PCPlus4D)
);
    
endmodule
