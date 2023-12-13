// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    CData/*0:0*/ cpu__DOT__PCSrc_wire;
    CData/*0:0*/ cpu__DOT__ResultSrc_wire;
    CData/*0:0*/ cpu__DOT__MemWrite_wire;
    CData/*3:0*/ cpu__DOT__ALUctrl_wire;
    CData/*0:0*/ cpu__DOT__ALUSrc_wire;
    CData/*0:0*/ cpu__DOT__JumpSrc_wire;
    CData/*0:0*/ cpu__DOT__JRetSrc_wire;
    CData/*0:0*/ cpu__DOT__EQ_wire;
    CData/*0:0*/ cpu__DOT__MemType_wire;
    CData/*2:0*/ cpu__DOT__D__DOT__ImmSrc_wire;
    CData/*0:0*/ cpu__DOT__D__DOT__RegWrite_wire;
    CData/*1:0*/ cpu__DOT__D__DOT__control__DOT__opfunct7;
    CData/*6:0*/ cpu__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vchglast__TOP__cpu__DOT__EQ_wire;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__Result_wire;
    IData/*31:0*/ cpu__DOT__instr_wire;
    IData/*31:0*/ cpu__DOT__WD3_wire;
    IData/*31:0*/ cpu__DOT__RD1_wire;
    IData/*31:0*/ cpu__DOT__RD2_wire;
    IData/*31:0*/ cpu__DOT__Imm_o_wire;
    IData/*31:0*/ cpu__DOT__ALU_o_wire;
    IData/*31:0*/ cpu__DOT__PC_target;
    IData/*31:0*/ cpu__DOT__JRet_o_wire;
    IData/*31:0*/ cpu__DOT__IM__DOT__next;
    IData/*31:0*/ cpu__DOT__IM__DOT__pc_wire;
    IData/*31:0*/ cpu__DOT__IM__DOT__inc_pc;
    IData/*31:0*/ cpu__DOT__IM__DOT__PC_next;
    IData/*31:0*/ cpu__DOT__E__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 4096> cpu__DOT__IM__DOT__InstructionMem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__D__DOT__rf__DOT__registers;
    VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
