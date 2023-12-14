// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwo_way_set_associative_cache.h for the primary calling header

#ifndef VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE___024ROOT_H_
#define VERILATED_VTWO_WAY_SET_ASSOCIATIVE_CACHE___024ROOT_H_  // guard

#include "verilated.h"


class Vtwo_way_set_associative_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtwo_way_set_associative_cache___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(write_enable,0,0);
    VL_OUT8(cache_hit,0,0);
    CData/*0:0*/ two_way_set_associative_cache__DOT__cache_hit_1;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(address,31,0);
    VL_IN(data,31,0);
    VL_OUT(cache_data,31,0);
    VL_OUT(write_back_data,31,0);
    VL_OUT(write_back_address,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
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
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__0;
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__0;
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__1;
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__1;
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__2;
    VlUnpacked<CData/*0:0*/, 8> __Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__2;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<3> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtwo_way_set_associative_cache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwo_way_set_associative_cache___024root(Vtwo_way_set_associative_cache__Syms* symsp, const char* v__name);
    ~Vtwo_way_set_associative_cache___024root();
    VL_UNCOPYABLE(Vtwo_way_set_associative_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
