// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwo_way_set_associative_cache.h for the primary calling header

#ifndef VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE___024ROOT_H_
#define VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE___024ROOT_H_  // guard

#include "verilated.h"

class Vtwo_way_set_associative_cache__Syms;

class Vtwo_way_set_associative_cache___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(write_enable,0,0);
        VL_OUT8(cache_hit,0,0);
        CData/*0:0*/ two_way_set_associative_cache__DOT__cache_hit_1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__data_0__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__data_1__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0;
        CData/*0:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1;
        CData/*0:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v1;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0;
        CData/*0:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v0;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1;
        CData/*0:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v1;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v2;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v2;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v2;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v3;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v2;
        CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v2;
        CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v3;
        CData/*0:0*/ __Vclklast__TOP__clk;
        VL_IN(address,31,0);
        VL_IN(data,31,0);
        VL_OUT(cache_data,31,0);
        VL_OUT(write_back_data,31,0);
        VL_OUT(write_back_address,31,0);
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0;
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0;
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1;
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1;
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v2;
        IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v2;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__lru_counter_0;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__lru_counter_1;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__V_0;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__D_0;
        VlUnpacked<IData/*26:0*/, 8> two_way_set_associative_cache__DOT__tag_0;
        VlUnpacked<IData/*31:0*/, 8> two_way_set_associative_cache__DOT__data_0;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__V_1;
        VlUnpacked<CData/*0:0*/, 8> two_way_set_associative_cache__DOT__D_1;
        VlUnpacked<IData/*26:0*/, 8> two_way_set_associative_cache__DOT__tag_1;
        VlUnpacked<IData/*31:0*/, 8> two_way_set_associative_cache__DOT__data_1;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtwo_way_set_associative_cache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwo_way_set_associative_cache___024root(Vtwo_way_set_associative_cache__Syms* symsp, const char* name);
    ~Vtwo_way_set_associative_cache___024root();
    VL_UNCOPYABLE(Vtwo_way_set_associative_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
