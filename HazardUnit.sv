module HazardUnit (
    
    input logic             Rs1E,
    input logic             Rs2E,
    input logic             Rs1D,
    input logic             Rs2D,
    input logic             RdM,
    input logic             BranchD,
    input logic             RegWriteE,
    input logic             RegWriteM,
    input logic             WriteRegE;
    input logic             RdW,
    input logic             RegWriteW,
    input logic             ResultSrcE,
    input logic             ResultSrcM, // ResultSrc can be used here
    input logic             clk,

    output logic  [1:0]     ForwardAE,  // Forward data to RD1E
    output logic  [1:0]     ForwardBE,  // Forward data to RD2E
    output logic            ForwardAD,  // 
    output logic            ForwardBD,  //
    output logic            Stall,
    output logic            StallF,
    output logic            StallD,      
    output logic            FlushE

);
    logic                BranchStall;
    logic                lwstall;
    
always_comb begin
    // Initialize signals to no forwarding
    BranchStall = 0;
    ForwardAE = 2'b00;
    ForwardBE = 2'b00;
    ForwardAD = ((Rs1D != 0) && (Rs1D == RdM) && RegWriteM);
    ForwardBD = ((Rs2D != 0) && (Rs2D == RdM) && RegWriteM);
    lwstall   = (RegWriteE && ResultSrcE);
    StallF    = (lwstall || BranchStall);
    StallD    = (lwstall || BranchStall);
    FlushE    = (lwstall || BranchStall);  
    Stall     = (lwstall || BranchStall);

    // Check for data hazards
        if (RegWriteW && (RdW == Rs1E)) 
            ForwardAE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD1E
        
        if (RegWriteW && (RdW == Rs2E)) 
            ForwardBE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD2E        

        if (RegWriteM && (RdM == Rs1E)) 
            ForwardAE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD1E
        
        if (RegWriteM && (RdM == Rs2E)) 
            ForwardBE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD2E
        
        if (BranchD && RegWriteE && ((WriteRegE == Rs1D) || (WriteRegE == Rs2D)))
            BranchStall = 1;         // Set Stall to 1 if it is a Load Instruction and the next Instruction needs the value
    
        if (BranchD && ResultSrcM && ((RdM == Rs1D) || (RdM == Rs2D)))
            BranchStall = 1;
    end

endmodule
