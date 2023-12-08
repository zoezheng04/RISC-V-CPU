// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu1.h for the primary calling header

#ifndef VERILATED_VCPU1___024ROOT_H_
#define VERILATED_VCPU1___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu1__Syms;

class Vcpu1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    CData/*0:0*/ cpu1__DOT__PCSrc_wire;
    CData/*0:0*/ cpu1__DOT__ResultSrc_wire;
    CData/*0:0*/ cpu1__DOT__MemWrite_wire;
    CData/*3:0*/ cpu1__DOT__ALUctrl_wire;
    CData/*0:0*/ cpu1__DOT__ALUSrc_wire;
    CData/*0:0*/ cpu1__DOT__JumpSrc_wire;
    CData/*0:0*/ cpu1__DOT__JRetSrc_wire;
    CData/*0:0*/ cpu1__DOT__EQ_wire;
    CData/*2:0*/ cpu1__DOT__D__DOT__ImmSrc_wire;
    CData/*0:0*/ cpu1__DOT__D__DOT__RegWrite_wire;
    CData/*6:0*/ cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vchglast__TOP__cpu1__DOT__EQ_wire;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu1__DOT__Result_wire;
    IData/*31:0*/ cpu1__DOT__instr_wire;
    IData/*31:0*/ cpu1__DOT__WD3_wire;
    IData/*31:0*/ cpu1__DOT__RD1_wire;
    IData/*31:0*/ cpu1__DOT__RD2_wire;
    IData/*31:0*/ cpu1__DOT__Imm_o_wire;
    IData/*31:0*/ cpu1__DOT__ALU_o_wire;
    IData/*31:0*/ cpu1__DOT__JRet_o;
    IData/*31:0*/ cpu1__DOT__PC_target;
    IData/*31:0*/ cpu1__DOT__JRet_o_wire;
    IData/*31:0*/ cpu1__DOT__IM__DOT__next;
    IData/*31:0*/ cpu1__DOT__IM__DOT__pc_wire;
    IData/*31:0*/ cpu1__DOT__IM__DOT__inc_pc;
    IData/*31:0*/ cpu1__DOT__IM__DOT__PC_next;
    IData/*31:0*/ cpu1__DOT__E__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 4096> cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu1__DOT__D__DOT__rf__DOT__registers;
    VlUnpacked<CData/*7:0*/, 131072> cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu1___024root(Vcpu1__Syms* symsp, const char* name);
    ~Vcpu1___024root();
    VL_UNCOPYABLE(Vcpu1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
