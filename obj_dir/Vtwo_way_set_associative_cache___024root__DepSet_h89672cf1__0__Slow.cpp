// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_way_set_associative_cache.h for the primary calling header

#include "verilated.h"

#include "Vtwo_way_set_associative_cache__Syms.h"
#include "Vtwo_way_set_associative_cache___024root.h"

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_static(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_initial(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__0 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_1;
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__0 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_0;
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__1 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_1;
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__1 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_0;
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__2 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_1;
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__2 
        = vlSelf->two_way_set_associative_cache__DOT__lru_counter_0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_final(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_triggers__stl(Vtwo_way_set_associative_cache___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__stl(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_stl(Vtwo_way_set_associative_cache___024root* vlSelf);

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_settle(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtwo_way_set_associative_cache___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtwo_way_set_associative_cache___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("two_way_set_associative_cache.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtwo_way_set_associative_cache___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__stl(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] two_way_set_associative_cache.lru_counter_1)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] two_way_set_associative_cache.lru_counter_0)\n");
    }
}
#endif  // VL_DEBUG

void Vtwo_way_set_associative_cache___024root___ico_sequent__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf);
void Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(Vtwo_way_set_associative_cache___024root* vlSelf);
void Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(Vtwo_way_set_associative_cache___024root* vlSelf);

VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___eval_stl(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtwo_way_set_associative_cache___024root___ico_comb__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__ico(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] two_way_set_associative_cache.lru_counter_1)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] two_way_set_associative_cache.lru_counter_0)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__act(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] two_way_set_associative_cache.lru_counter_1)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] two_way_set_associative_cache.lru_counter_0)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__nba(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] two_way_set_associative_cache.lru_counter_1)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] two_way_set_associative_cache.lru_counter_0)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

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
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__lru_counter_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__V_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__D_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__tag_0[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__data_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__V_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__D_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__tag_1[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->two_way_set_associative_cache__DOT__data_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->two_way_set_associative_cache__DOT__cache_hit_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
