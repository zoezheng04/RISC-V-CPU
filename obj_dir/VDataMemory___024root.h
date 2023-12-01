// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDataMemory.h for the primary calling header

#ifndef VERILATED_VDATAMEMORY___024ROOT_H_
#define VERILATED_VDATAMEMORY___024ROOT_H_  // guard

#include "verilated.h"

class VDataMemory__Syms;

class VDataMemory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(WE,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(A,31,0);
    VL_IN(WD,31,0);
    VL_OUT(RD,31,0);
    VlUnpacked<CData/*7:0*/, 131072> DataMemory__DOT__DataMemory_array;

    // INTERNAL VARIABLES
    VDataMemory__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDataMemory___024root(VDataMemory__Syms* symsp, const char* name);
    ~VDataMemory___024root();
    VL_UNCOPYABLE(VDataMemory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
