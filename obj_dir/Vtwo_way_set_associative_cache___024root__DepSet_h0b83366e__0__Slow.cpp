// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_way_set_associative_cache.h for the primary calling header

#include "verilated.h"

#include "Vtwo_way_set_associative_cache___024root.h"

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_initial(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtwo_way_set_associative_cache___024root___combo__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf);

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_settle(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_settle\n"); );
    // Body
    Vtwo_way_set_associative_cache___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___final(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___final\n"); );
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___ctor_var_reset(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->write_enable = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(32);
    vlSelf->data = VL_RAND_RESET_I(32);
    vlSelf->cache_hit = VL_RAND_RESET_I(1);
    vlSelf->cache_data = VL_RAND_RESET_I(32);
    vlSelf->write_back_data = VL_RAND_RESET_I(32);
    vlSelf->write_back_address = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__V_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__data_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__V_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__data_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->two_way_set_associative_cache__DOT__cache_hit_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v1 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v1 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v2 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v2 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v2 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v2 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v3 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v2 = 0;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2 = 0;
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v2 = 0;
    vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v3 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
