// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataMemory.h for the primary calling header

#include "verilated.h"

#include "VDataMemory___024root.h"

VL_INLINE_OPT void VDataMemory___024root___sequent__TOP__0(VDataMemory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v0;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__DataMemory_array__v0;
    CData/*0:0*/ __Vdlyvset__DataMemory__DOT__DataMemory_array__v0;
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v1;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__DataMemory_array__v1;
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v2;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__DataMemory_array__v2;
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v3;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__DataMemory_array__v3;
    // Body
    __Vdlyvset__DataMemory__DOT__DataMemory_array__v0 = 0U;
    if (vlSelf->WE) {
        __Vdlyvval__DataMemory__DOT__DataMemory_array__v0 
            = (0xffU & vlSelf->WD);
        __Vdlyvset__DataMemory__DOT__DataMemory_array__v0 = 1U;
        __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v0 
            = (0x1ffffU & vlSelf->A);
        __Vdlyvval__DataMemory__DOT__DataMemory_array__v1 
            = (0xffU & (vlSelf->WD >> 8U));
        __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->A));
        __Vdlyvval__DataMemory__DOT__DataMemory_array__v2 
            = (0xffU & (vlSelf->WD >> 0x10U));
        __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->A));
        __Vdlyvval__DataMemory__DOT__DataMemory_array__v3 
            = (vlSelf->WD >> 0x18U);
        __Vdlyvdim0__DataMemory__DOT__DataMemory_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->A));
    }
    if (__Vdlyvset__DataMemory__DOT__DataMemory_array__v0) {
        vlSelf->DataMemory__DOT__DataMemory_array[__Vdlyvdim0__DataMemory__DOT__DataMemory_array__v0] 
            = __Vdlyvval__DataMemory__DOT__DataMemory_array__v0;
        vlSelf->DataMemory__DOT__DataMemory_array[__Vdlyvdim0__DataMemory__DOT__DataMemory_array__v1] 
            = __Vdlyvval__DataMemory__DOT__DataMemory_array__v1;
        vlSelf->DataMemory__DOT__DataMemory_array[__Vdlyvdim0__DataMemory__DOT__DataMemory_array__v2] 
            = __Vdlyvval__DataMemory__DOT__DataMemory_array__v2;
        vlSelf->DataMemory__DOT__DataMemory_array[__Vdlyvdim0__DataMemory__DOT__DataMemory_array__v3] 
            = __Vdlyvval__DataMemory__DOT__DataMemory_array__v3;
    }
}

VL_INLINE_OPT void VDataMemory___024root___combo__TOP__0(VDataMemory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->RD = ((vlSelf->DataMemory__DOT__DataMemory_array
                   [(0x1ffffU & ((IData)(3U) + vlSelf->A))] 
                   << 0x18U) | ((vlSelf->DataMemory__DOT__DataMemory_array
                                 [(0x1ffffU & ((IData)(2U) 
                                               + vlSelf->A))] 
                                 << 0x10U) | ((vlSelf->DataMemory__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->A))] 
                                               << 8U) 
                                              | vlSelf->DataMemory__DOT__DataMemory_array
                                              [(0x1ffffU 
                                                & vlSelf->A)])));
}

void VDataMemory___024root___eval(VDataMemory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VDataMemory___024root___sequent__TOP__0(vlSelf);
    }
    VDataMemory___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VDataMemory___024root___eval_debug_assertions(VDataMemory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataMemory___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG
