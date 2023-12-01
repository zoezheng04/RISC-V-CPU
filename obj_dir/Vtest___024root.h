// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"

class Vtest__Syms;

class Vtest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(EQ,0,0);
    VL_IN8(PCSrc_i,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(ImmSrc,2,0);
    VL_OUT8(PCSrc,0,0);
    VL_OUT8(MemWrite,0,0);
    VL_OUT8(ResultSrc,0,0);
    VL_OUT8(JumpSrc,0,0);
    VL_OUT8(JRetSrc,0,0);
    CData/*6:0*/ test__DOT__control__DOT__unnamedblk1__DOT__Type_O;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    IData/*31:0*/ test__DOT__instr_wire;
    IData/*31:0*/ test__DOT__in__DOT__pcwire;
    IData/*31:0*/ test__DOT__in__DOT__pc_t__DOT__next;
    VlUnpacked<CData/*7:0*/, 33> test__DOT__in__DOT__rom_t__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest___024root(Vtest__Syms* symsp, const char* name);
    ~Vtest___024root();
    VL_UNCOPYABLE(Vtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
