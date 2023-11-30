// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "verilated.h"

#include "Vtest___024root.h"

VL_INLINE_OPT void Vtest___024root___sequent__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__instr_wire = ((((0x20U >= (0x3fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->addr)))
                                        ? vlSelf->test__DOT__input_s__DOT__rom_array
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->addr))]
                                        : 0U) << 0x18U) 
                                     | ((((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(2U) 
                                             + vlSelf->addr)))
                                           ? vlSelf->test__DOT__input_s__DOT__rom_array
                                          [(0x3fU & 
                                            ((IData)(2U) 
                                             + vlSelf->addr))]
                                           : 0U) << 0x10U) 
                                        | ((((0x20U 
                                              >= (0x3fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->addr)))
                                              ? vlSelf->test__DOT__input_s__DOT__rom_array
                                             [(0x3fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->addr))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x20U 
                                               >= (0x3fU 
                                                   & vlSelf->addr))
                                               ? vlSelf->test__DOT__input_s__DOT__rom_array
                                              [(0x3fU 
                                                & vlSelf->addr)]
                                               : 0U))));
}

VL_INLINE_OPT void Vtest___024root___combo__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___combo__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->ImmSrc))) {
        vlSelf->Imm_o = (((- (IData)((vlSelf->test__DOT__instr_wire 
                                      >> 0x1fU))) << 0xbU) 
                         | (0x7ffU & (vlSelf->test__DOT__instr_wire 
                                      >> 0x14U)));
    } else if ((1U == (IData)(vlSelf->ImmSrc))) {
        vlSelf->Imm_o = (0xfffff000U & vlSelf->test__DOT__instr_wire);
    } else if ((2U == (IData)(vlSelf->ImmSrc))) {
        vlSelf->Imm_o = (((- (IData)((vlSelf->test__DOT__instr_wire 
                                      >> 0x1fU))) << 0xbU) 
                         | ((0x7e0U & (vlSelf->test__DOT__instr_wire 
                                       >> 0x14U)) | 
                            (0x1fU & (vlSelf->test__DOT__instr_wire 
                                      >> 7U))));
    } else if ((3U == (IData)(vlSelf->ImmSrc))) {
        vlSelf->Imm_o = (((- (IData)((vlSelf->test__DOT__instr_wire 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0x800U & (vlSelf->test__DOT__instr_wire 
                                       << 4U)) | ((0x7e0U 
                                                   & (vlSelf->test__DOT__instr_wire 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->test__DOT__instr_wire 
                                                        >> 7U)))));
    } else if ((4U == (IData)(vlSelf->ImmSrc))) {
        vlSelf->Imm_o = (((- (IData)((vlSelf->test__DOT__instr_wire 
                                      >> 0x1fU))) << 0x14U) 
                         | ((0xff000U & vlSelf->test__DOT__instr_wire) 
                            | ((0x800U & (vlSelf->test__DOT__instr_wire 
                                          >> 9U)) | 
                               (0x7feU & (vlSelf->test__DOT__instr_wire 
                                          >> 0x14U)))));
    }
}

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtest___024root___sequent__TOP__0(vlSelf);
    }
    Vtest___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ImmSrc & 0xf8U))) {
        Verilated::overWidthError("ImmSrc");}
}
#endif  // VL_DEBUG
