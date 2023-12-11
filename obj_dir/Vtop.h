// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(a0,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ top__DOT__ALUctrlE_wire;
    CData/*0:0*/ top__DOT__RegWriteE_wire;
    CData/*0:0*/ top__DOT__RegWriteM_wire;
    CData/*0:0*/ top__DOT__RegWriteW_wire;
    CData/*0:0*/ top__DOT__StallF_wire;
    CData/*0:0*/ top__DOT__StallD_wire;
    CData/*1:0*/ top__DOT__ForwardAE_wire;
    CData/*1:0*/ top__DOT__ForwardBE_wire;
    CData/*0:0*/ top__DOT__MemWriteE_wire;
    CData/*0:0*/ top__DOT__MemWriteM_wire;
    CData/*0:0*/ top__DOT__PCSrcD_wire;
    CData/*0:0*/ top__DOT__ALUsrcE_wire;
    CData/*4:0*/ top__DOT__Rs1E_wire;
    CData/*4:0*/ top__DOT__Rs2E_wire;
    CData/*4:0*/ top__DOT__RdE_wire;
    CData/*4:0*/ top__DOT__RdM_wire;
    CData/*4:0*/ top__DOT__RdW_wire;
    CData/*0:0*/ top__DOT__ResultSrcE_wire;
    CData/*0:0*/ top__DOT__ResultSrcM_wire;
    CData/*0:0*/ top__DOT__ResultSrcW_wire;
    CData/*0:0*/ top__DOT__BranchD_wire;
    CData/*0:0*/ top__DOT__FlushE_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__RegWrite_wire;
    CData/*3:0*/ top__DOT__Decode_Stage__DOT__ALUctrl_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__ALUSrc_wire;
    CData/*2:0*/ top__DOT__Decode_Stage__DOT__ImmSrc_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__MemWrite_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__ResultSrc_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__BranchD_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__JumpSrc_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__JRetSrc_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__BEQ_wire;
    CData/*0:0*/ top__DOT__Decode_Stage__DOT__BNE_wire;
    CData/*6:0*/ top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O;
    CData/*0:0*/ top__DOT__HazardUnit__DOT__BranchStall;
    CData/*0:0*/ top__DOT__HazardUnit__DOT__lwstall;
    IData/*31:0*/ top__DOT__InstrD_wire;
    IData/*31:0*/ top__DOT__ExtImmE_wire;
    IData/*31:0*/ top__DOT__ALUResultM_wire;
    IData/*31:0*/ top__DOT__ALUResultW_wire;
    IData/*31:0*/ top__DOT__ResultW_wire;
    IData/*31:0*/ top__DOT__ReadDataW_wire;
    IData/*31:0*/ top__DOT__PCPlus4D_wire;
    IData/*31:0*/ top__DOT__WriteDataM_wire;
    IData/*31:0*/ top__DOT__RD1E_wire;
    IData/*31:0*/ top__DOT__RD2E_wire;
    IData/*31:0*/ top__DOT__Fetch_Stage__DOT__PCF_wire;
    IData/*31:0*/ top__DOT__Fetch_Stage__DOT__PCNext_wire;
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__RD1D_wire;
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__RD2D_wire;
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__ExtImmD_wire;
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__ForwardAD_MUX;
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__ForwardBD_MUX;
    IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcAE_wire;
    IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcBE_wire;
    IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire;
    IData/*31:0*/ top__DOT__Execute_Stage__DOT__Result_wire;
    CData/*7:0*/ top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array[4096];
    IData/*31:0*/ top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[32];
    CData/*7:0*/ top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[131072];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
