// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_way_set_associative_cache.h for the primary calling header

#include "verilated.h"

#include "Vtwo_way_set_associative_cache___024root.h"

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___sequent__TOP__1(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->cache_hit) {
        if ((1U & (~ (IData)(vlSelf->write_enable)))) {
            vlSelf->cache_data = ((IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)
                                   ? vlSelf->two_way_set_associative_cache__DOT__data_1
                                  [(7U & (vlSelf->address 
                                          >> 2U))] : 
                                  vlSelf->two_way_set_associative_cache__DOT__data_0
                                  [(7U & (vlSelf->address 
                                          >> 2U))]);
        }
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___sequent__TOP__2(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_1__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_0__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v1 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v1 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 0U;
    vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2 = 0U;
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___sequent__TOP__3(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->cache_hit) {
        if (vlSelf->write_enable) {
            if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0 
                    = vlSelf->data;
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_1__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v0 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_1
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0 
                    = (7U & (vlSelf->address >> 2U));
            }
            if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0 
                    = vlSelf->data;
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_0__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v0 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_0
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0 
                    = (7U & (vlSelf->address >> 2U));
            }
        } else {
            if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v1 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_0
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v1 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1 
                    = (7U & (vlSelf->address >> 2U));
            }
            if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v1 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_1
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v1 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1 
                    = (7U & (vlSelf->address >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___sequent__TOP__4(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___sequent__TOP__4\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0;
    // Body
    if ((1U & (~ (IData)(vlSelf->cache_hit)))) {
        if (vlSelf->two_way_set_associative_cache__DOT__V_0
            [(7U & (vlSelf->address >> 2U))]) {
            if (vlSelf->two_way_set_associative_cache__DOT__V_1
                [(7U & (vlSelf->address >> 2U))]) {
                if ((vlSelf->two_way_set_associative_cache__DOT__V_1
                     [(7U & (vlSelf->address >> 2U))] 
                     & vlSelf->two_way_set_associative_cache__DOT__V_0
                     [(7U & (vlSelf->address >> 2U))])) {
                    if ((vlSelf->two_way_set_associative_cache__DOT__lru_counter_0
                         [(7U & (vlSelf->address >> 2U))] 
                         < vlSelf->two_way_set_associative_cache__DOT__lru_counter_1
                         [(7U & (vlSelf->address >> 2U))])) {
                        if (vlSelf->two_way_set_associative_cache__DOT__D_0
                            [(7U & (vlSelf->address 
                                    >> 2U))]) {
                            vlSelf->write_back_data 
                                = vlSelf->two_way_set_associative_cache__DOT__data_0
                                [(7U & (vlSelf->address 
                                        >> 2U))];
                            vlSelf->write_back_address 
                                = ((vlSelf->two_way_set_associative_cache__DOT__tag_0
                                    [(7U & (vlSelf->address 
                                            >> 2U))] 
                                    << 5U) | (0x1cU 
                                              & vlSelf->address));
                            vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 1U;
                            vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1 
                                = (7U & (vlSelf->address 
                                         >> 2U));
                        }
                        vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2 = 1U;
                        vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v2 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0 
                            = (vlSelf->address >> 5U);
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1 
                            = vlSelf->data;
                        vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                    } else {
                        if (vlSelf->two_way_set_associative_cache__DOT__D_1
                            [(7U & (vlSelf->address 
                                    >> 2U))]) {
                            vlSelf->write_back_data 
                                = vlSelf->two_way_set_associative_cache__DOT__data_1
                                [(7U & (vlSelf->address 
                                        >> 2U))];
                            vlSelf->write_back_address 
                                = ((vlSelf->two_way_set_associative_cache__DOT__tag_1
                                    [(7U & (vlSelf->address 
                                            >> 2U))] 
                                    << 5U) | (0x1cU 
                                              & vlSelf->address));
                            vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 1U;
                            vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1 
                                = (7U & (vlSelf->address 
                                         >> 2U));
                        }
                        vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2 = 1U;
                        vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v2 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0 
                            = (vlSelf->address >> 5U);
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1 
                            = vlSelf->data;
                        vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                    }
                }
            } else {
                vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2 = 1U;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v2 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1 
                    = (vlSelf->address >> 5U);
                __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v2 
                    = vlSelf->data;
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v2 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0 
                    = (7U & (vlSelf->address >> 2U));
                vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v3 
                    = (7U & (vlSelf->address >> 2U));
            }
        } else {
            vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2 = 1U;
            vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v2 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1 
                = (vlSelf->address >> 5U);
            __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1 
                = (7U & (vlSelf->address >> 2U));
            vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v2 
                = vlSelf->data;
            vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v2 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0 
                = (7U & (vlSelf->address >> 2U));
            vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v3 
                = (7U & (vlSelf->address >> 2U));
        }
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2) {
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2) {
        vlSelf->two_way_set_associative_cache__DOT__V_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0] = 1U;
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2) {
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2) {
        vlSelf->two_way_set_associative_cache__DOT__V_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0] = 1U;
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1;
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___sequent__TOP__5(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_0__v0) {
        vlSelf->two_way_set_associative_cache__DOT__data_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2) {
        vlSelf->two_way_set_associative_cache__DOT__data_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v1) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_0__v1;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v2) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v2] = 0U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v2) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v2] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v2] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_0__v2;
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v3] = 0U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__data_1__v0) {
        vlSelf->two_way_set_associative_cache__DOT__data_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2) {
        vlSelf->two_way_set_associative_cache__DOT__data_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v0;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v1) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__lru_counter_1__v1;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v2) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v2] = 0U;
    }
    if (vlSelf->__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v2) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v2] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v2] 
            = vlSelf->__Vdlyvval__two_way_set_associative_cache__DOT__data_1__v2;
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[vlSelf->__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v3] = 0U;
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___combo__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->two_way_set_associative_cache__DOT__cache_hit_1 
        = ((vlSelf->two_way_set_associative_cache__DOT__tag_1
            [(7U & (vlSelf->address >> 2U))] == (vlSelf->address 
                                                 >> 5U)) 
           & vlSelf->two_way_set_associative_cache__DOT__V_1
           [(7U & (vlSelf->address >> 2U))]);
    vlSelf->cache_hit = (((vlSelf->two_way_set_associative_cache__DOT__tag_0
                           [(7U & (vlSelf->address 
                                   >> 2U))] == (vlSelf->address 
                                                >> 5U)) 
                          & vlSelf->two_way_set_associative_cache__DOT__V_0
                          [(7U & (vlSelf->address >> 2U))]) 
                         | (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1));
}

void Vtwo_way_set_associative_cache___024root___eval(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtwo_way_set_associative_cache___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtwo_way_set_associative_cache___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtwo_way_set_associative_cache___024root___sequent__TOP__3(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtwo_way_set_associative_cache___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtwo_way_set_associative_cache___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtwo_way_set_associative_cache___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtwo_way_set_associative_cache___024root___eval_debug_assertions(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
}
#endif  // VL_DEBUG
