// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(trigger,0,0);
        CData/*3:0*/ top__DOT__ALUctrlE_wire;
        CData/*0:0*/ top__DOT__RegWriteE_wire;
        CData/*0:0*/ top__DOT__RegWriteM_wire;
        CData/*0:0*/ top__DOT__RegWriteW_wire;
        CData/*0:0*/ top__DOT__StallF_wire;
        CData/*0:0*/ top__DOT__StallPC_wire;
        CData/*1:0*/ top__DOT__ForwardAE_wire;
        CData/*1:0*/ top__DOT__ForwardBE_wire;
        CData/*0:0*/ top__DOT__MemWriteE_wire;
        CData/*0:0*/ top__DOT__MemWriteM_wire;
        CData/*0:0*/ top__DOT__ALUsrcE_wire;
        CData/*0:0*/ top__DOT__MemTypeE_wire;
        CData/*0:0*/ top__DOT__MemTypeM_wire;
        CData/*4:0*/ top__DOT__Rs1E_wire;
        CData/*4:0*/ top__DOT__Rs2E_wire;
        CData/*4:0*/ top__DOT__RdE_wire;
        CData/*4:0*/ top__DOT__RdM_wire;
        CData/*4:0*/ top__DOT__RdW_wire;
        CData/*0:0*/ top__DOT__ResultSrcE_wire;
        CData/*0:0*/ top__DOT__ResultSrcM_wire;
        CData/*0:0*/ top__DOT__ResultSrcW_wire;
        CData/*0:0*/ top__DOT__BranchD_wire;
        CData/*0:0*/ top__DOT__FlushD_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__RegWrite_wire;
        CData/*3:0*/ top__DOT__Decode_Stage__DOT__ALUctrl_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__ALUSrc_wire;
        CData/*2:0*/ top__DOT__Decode_Stage__DOT__ImmSrc_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__MemWrite_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__ResultSrc_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__JumpSrc_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__JRetSrc_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__BEQ_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__BNE_wire;
        CData/*0:0*/ top__DOT__Decode_Stage__DOT__MemType_wire;
        CData/*1:0*/ top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7;
        CData/*6:0*/ top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O;
        CData/*0:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire;
        CData/*0:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__WBEN;
        CData/*0:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__cache_hit_1;
        CData/*0:0*/ top__DOT__HazardUnit__DOT__BranchStall;
        CData/*0:0*/ top__DOT__HazardUnit__DOT__lwstall;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0;
        CData/*0:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1;
        CData/*0:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0;
        CData/*0:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1;
        CData/*0:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1;
    };
    struct {
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v1;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v1;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v1;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v1;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v1;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v3;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v2;
        CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v2;
        CData/*2:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v3;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_OUT(a0,31,0);
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
        IData/*31:0*/ top__DOT__Fetch_Stage__DOT__InstrF_wire;
        IData/*31:0*/ top__DOT__Decode_Stage__DOT__RD1D_wire;
        IData/*31:0*/ top__DOT__Decode_Stage__DOT__RD2D_wire;
        IData/*31:0*/ top__DOT__Decode_Stage__DOT__ExtImmD_wire;
        IData/*31:0*/ top__DOT__Decode_Stage__DOT__ForwardAD_MUX;
        IData/*31:0*/ top__DOT__Decode_Stage__DOT__ForwardBD_MUX;
        IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcAE_wire;
        IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcBE_wire;
        IData/*31:0*/ top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire;
        IData/*31:0*/ top__DOT__Execute_Stage__DOT__Result_wire;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__WBData;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__WBaddr;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__mem_data;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__missed_data;
        IData/*31:0*/ top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v1;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v1;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v2;
        IData/*31:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v2;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0;
        VlUnpacked<IData/*26:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1;
        VlUnpacked<IData/*26:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
