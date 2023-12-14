// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_way_set_associative_cache.h for the primary calling header

#include "verilated.h"

#include "Vtwo_way_set_associative_cache__Syms.h"
#include "Vtwo_way_set_associative_cache__Syms.h"
#include "Vtwo_way_set_associative_cache___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__ico(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwo_way_set_associative_cache___024root___eval_triggers__ico(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
    vlSelf->__VicoTriggered.set(1U, vlSelf->two_way_set_associative_cache__DOT__lru_counter_1.neq(vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__1));
    vlSelf->__VicoTriggered.set(2U, vlSelf->two_way_set_associative_cache__DOT__lru_counter_0.neq(vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__1));
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__1.assign(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1);
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__1.assign(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtwo_way_set_associative_cache___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_way_set_associative_cache___024root___dump_triggers__act(Vtwo_way_set_associative_cache___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwo_way_set_associative_cache___024root___eval_triggers__act(Vtwo_way_set_associative_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_way_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_way_set_associative_cache___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->two_way_set_associative_cache__DOT__lru_counter_1.neq(vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__2));
    vlSelf->__VactTriggered.set(1U, vlSelf->two_way_set_associative_cache__DOT__lru_counter_0.neq(vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__2));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_1__2.assign(vlSelf->two_way_set_associative_cache__DOT__lru_counter_1);
    vlSelf->__Vtrigprevexpr___TOP__two_way_set_associative_cache__DOT__lru_counter_0__2.assign(vlSelf->two_way_set_associative_cache__DOT__lru_counter_0);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtwo_way_set_associative_cache___024root___dump_triggers__act(vlSelf);
    }
#endif
}
