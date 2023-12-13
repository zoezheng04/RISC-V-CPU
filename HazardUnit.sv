module HazardUnit (
    
    input logic [4:0]       Rs1E,
    input logic [4:0]       Rs2E,
    input logic [4:0]       Rs1D,
    input logic [4:0]       Rs2D,
    input logic [4:0]       RdM,
    input logic             BranchD,
    input logic             RegWriteE,
    input logic             RegWriteM,
    input logic [4:0]       WriteRegE,
    input logic [4:0]       RdW,
    input logic             RegWriteW,
    input logic             ResultSrcE,
    input logic             ResultSrcM, // ResultSrc can be used here

    output logic  [1:0]     ForwardAE,  // Forward data to RD1E
    output logic  [1:0]     ForwardBE,  // Forward data to RD2E
    output logic            ForwardAD,  // 
    output logic            ForwardBD,  //
    output logic            StallF,
    output logic            StallD,
    output logic            FlushE
);
logic                BranchStall;
logic                lwstall;
    
always_comb begin
    // Initialize signals to no forwarding
    ForwardAE = 2'b00;
    ForwardBE = 2'b00;
    ForwardAD = ((Rs1D != 0) && (Rs1D == RdM) && RegWriteM);
    ForwardBD = ((Rs2D != 0) && (Rs2D == RdM) && RegWriteM);
    BranchStall = (BranchD && RegWriteE && ((WriteRegE == Rs1D) || (WriteRegE == Rs2D))) || (BranchD && ResultSrcM && ((RdM == Rs1D) || (RdM == Rs2D)));
    lwstall   = (RegWriteE && ResultSrcE);
    StallD = (lwstall || BranchStall);
    StallF = (lwstall || BranchStall);
    FlushE = (lwstall);
    
        if ((Rs1E != 0) && RegWriteW && (RdW == Rs1E)) 
            ForwardAE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD1E
        
        if ((Rs2E != 0) && RegWriteW && (RdW == Rs2E)) 
            ForwardBE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD2E        

        if ((Rs1E != 0) && RegWriteM && (RdM == Rs1E)) 
            ForwardAE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD1E
        
        if ((Rs2E != 0) && RegWriteM && (RdM == Rs2E)) 
            ForwardBE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD2E
        
    end

endmodule
