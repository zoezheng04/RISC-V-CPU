// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_way_set_associative_cache.h for the primary calling header

#include "verilated.h"

#include "Vtwo_way_set_associative_cache__Syms.h"
#include "Vtwo_way_set_associative_cache___024root.h"

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___ico_sequent__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___ico_sequent__TOP__0\n"); );
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
    if (vlSelf->cache_hit) {
        if (vlSelf->write_enable) {
            if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
                vlSelf->two_way_set_associative_cache__DOT__D_1[(7U 
                                                                 & (vlSelf->address 
                                                                    >> 2U))] = 1U;
                vlSelf->two_way_set_associative_cache__DOT__data_1[(7U 
                                                                    & (vlSelf->address 
                                                                       >> 2U))] 
                    = vlSelf->data;
            } else {
                vlSelf->two_way_set_associative_cache__DOT__data_0[(7U 
                                                                    & (vlSelf->address 
                                                                       >> 2U))] 
                    = vlSelf->data;
            }
            if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
                vlSelf->two_way_set_associative_cache__DOT__D_0[(7U 
                                                                 & (vlSelf->address 
                                                                    >> 2U))] = 1U;
            }
        } else {
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

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0\n"); );
    // Body
    if (vlSelf->cache_hit) {
        if (vlSelf->write_enable) {
            if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
                vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[(7U 
                                                                           & (vlSelf->address 
                                                                              >> 2U))] 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_1
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
            }
        } else if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
            vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[(7U 
                                                                       & (vlSelf->address 
                                                                          >> 2U))] 
                = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_1
                         [(7U & (vlSelf->address >> 2U))]));
        }
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1\n"); );
    // Body
    if (vlSelf->cache_hit) {
        if (vlSelf->write_enable) {
            if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
                vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[(7U 
                                                                           & (vlSelf->address 
                                                                              >> 2U))] 
                    = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_0
                             [(7U & (vlSelf->address 
                                     >> 2U))]));
            }
        } else if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
            vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[(7U 
                                                                       & (vlSelf->address 
                                                                          >> 2U))] 
                = (1U & ((IData)(1U) + vlSelf->two_way_set_associative_cache__DOT__lru_counter_0
                         [(7U & (vlSelf->address >> 2U))]));
        }
    }
}

void Vtwo_way_set_associative_cache___024root___eval_ico(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(vlSelf);
    }
}

void Vtwo_way_set_associative_cache___024root___eval_act(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtwo_way_set_associative_cache___024root___nba_sequent__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0;
    __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0 = 0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0;
    __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0;
    __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0;
    __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0 = 0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0;
    __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0;
    __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1 = 0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1;
    __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1;
    __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1 = 0;
    IData/*26:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1;
    __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1;
    __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1;
    __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1 = 0;
    // Body
    __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 0U;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 0U;
    __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 0U;
    __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 0U;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 0U;
    __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 0U;
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
                            __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0 = 1U;
                            __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0 
                                = (7U & (vlSelf->address 
                                         >> 2U));
                        }
                        __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0 = 1U;
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0 
                            = (vlSelf->address >> 5U);
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0 
                            = vlSelf->data;
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0 
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
                            __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0 = 1U;
                            __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0 
                                = (7U & (vlSelf->address 
                                         >> 2U));
                        }
                        __Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0 = 1U;
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0 
                            = (vlSelf->address >> 5U);
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                        __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0 
                            = vlSelf->data;
                        __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0 
                            = (7U & (vlSelf->address 
                                     >> 2U));
                    }
                }
            } else {
                __Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1 = 1U;
                __Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1 
                    = (vlSelf->address >> 5U);
                __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1 
                    = vlSelf->data;
                __Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0 
                    = (7U & (vlSelf->address >> 2U));
                __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1 
                    = (7U & (vlSelf->address >> 2U));
            }
        } else {
            __Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1 = 1U;
            __Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1 
                = (vlSelf->address >> 5U);
            __Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1 
                = vlSelf->data;
            __Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0 
                = (7U & (vlSelf->address >> 2U));
            __Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1 
                = (7U & (vlSelf->address >> 2U));
        }
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_0__v0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v0] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v0;
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v0;
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v0) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v0] = 0U;
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__D_0__v1) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_0__v1] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__D_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__D_0__v1] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__data_0__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__data_0__v1;
        vlSelf->two_way_set_associative_cache__DOT__V_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__V_0__v0] = 1U;
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_0__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_0__v1;
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__lru_counter_1__v0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v0] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v0;
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v0] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v0;
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v0) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v0] = 0U;
    }
    if (__Vdlyvset__two_way_set_associative_cache__DOT__D_1__v1) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__lru_counter_1__v1] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__D_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__D_1__v1] = 0U;
        vlSelf->two_way_set_associative_cache__DOT__data_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__data_1__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__data_1__v1;
        vlSelf->two_way_set_associative_cache__DOT__V_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__V_1__v0] = 1U;
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vdlyvdim0__two_way_set_associative_cache__DOT__tag_1__v1] 
            = __Vdlyvval__two_way_set_associative_cache__DOT__tag_1__v1;
    }
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
    if (vlSelf->cache_hit) {
        if (vlSelf->write_enable) {
            if (vlSelf->two_way_set_associative_cache__DOT__cache_hit_1) {
                vlSelf->two_way_set_associative_cache__DOT__D_1[(7U 
                                                                 & (vlSelf->address 
                                                                    >> 2U))] = 1U;
                vlSelf->two_way_set_associative_cache__DOT__data_1[(7U 
                                                                    & (vlSelf->address 
                                                                       >> 2U))] 
                    = vlSelf->data;
            } else {
                vlSelf->two_way_set_associative_cache__DOT__data_0[(7U 
                                                                    & (vlSelf->address 
                                                                       >> 2U))] 
                    = vlSelf->data;
            }
            if ((1U & (~ (IData)(vlSelf->two_way_set_associative_cache__DOT__cache_hit_1)))) {
                vlSelf->two_way_set_associative_cache__DOT__D_0[(7U 
                                                                 & (vlSelf->address 
                                                                    >> 2U))] = 1U;
            }
        } else {
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

void Vtwo_way_set_associative_cache___024root___eval_nba(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(vlSelf);
    }
}

void Vtwo_way_set_associative_cache___024root___eval_triggers__ico(Vtwo_way_set_associative_cache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__ico(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG
void Vtwo_way_set_associative_cache___024root___eval_triggers__act(Vtwo_way_set_associative_cache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__act(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__nba(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwo_way_set_associative_cache___024root___eval(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtwo_way_set_associative_cache___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtwo_way_set_associative_cache___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("two_way_set_associative_cache.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtwo_way_set_associative_cache___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtwo_way_set_associative_cache___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtwo_way_set_associative_cache___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("two_way_set_associative_cache.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtwo_way_set_associative_cache___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtwo_way_set_associative_cache___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("two_way_set_associative_cache.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtwo_way_set_associative_cache___024root___eval_nba(vlSelf);
        }
    }
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
