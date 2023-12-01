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
    vlSelf->test__DOT__in__DOT__pcwire = ((IData)(vlSelf->rst)
                                           ? 0U : vlSelf->test__DOT__in__DOT__pc_t__DOT__next);
    vlSelf->test__DOT__instr_wire = ((((0x20U >= (0x3fU 
                                                  & vlSelf->test__DOT__in__DOT__pcwire))
                                        ? vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array
                                       [(0x3fU & vlSelf->test__DOT__in__DOT__pcwire)]
                                        : 0U) << 0x18U) 
                                     | ((((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->test__DOT__in__DOT__pcwire)))
                                           ? vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array
                                          [(0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->test__DOT__in__DOT__pcwire))]
                                           : 0U) << 0x10U) 
                                        | ((((0x20U 
                                              >= (0x3fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->test__DOT__in__DOT__pcwire)))
                                              ? vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array
                                             [(0x3fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->test__DOT__in__DOT__pcwire))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x20U 
                                               >= (0x3fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->test__DOT__in__DOT__pcwire)))
                                               ? vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array
                                              [(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->test__DOT__in__DOT__pcwire))]
                                               : 0U))));
    vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlSelf->test__DOT__instr_wire);
    vlSelf->RegWrite = (((((((0x33U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                             | (3U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                            | (0x13U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                           | (0x67U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                          | (0x6fU == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                         | (0x17U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                        | (0x37U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->ALUsrc = ((((((3U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                          | (0x13U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                         | (0x67U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                        | (0x6fU == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                       | (0x23U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                      | (0x37U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->MemWrite = (0x23U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->ResultSrc = (3U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->PCSrc = (((0x63U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                      | (0x6fU == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                     | (0x67U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->JumpSrc = ((0x6fU == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                       | (0x67U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->JRetSrc = (0x67U == (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    if ((0x40U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->ImmSrc = 0U;
            } else if ((8U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                            vlSelf->ImmSrc = 4U;
                            vlSelf->ALUctrl = 2U;
                        } else {
                            vlSelf->ImmSrc = 0U;
                        }
                    } else {
                        vlSelf->ImmSrc = 0U;
                    }
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->ImmSrc = 4U;
                        vlSelf->ALUctrl = 3U;
                    } else {
                        vlSelf->ImmSrc = 0U;
                    }
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->ImmSrc = 3U;
                    vlSelf->ALUctrl = 1U;
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else {
                vlSelf->ImmSrc = 0U;
            }
        } else {
            vlSelf->ImmSrc = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x10U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((8U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->ImmSrc = 0U;
            } else if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->ImmSrc = 4U;
                        vlSelf->ALUctrl = 4U;
                    } else {
                        vlSelf->ImmSrc = 0U;
                    }
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0U == (7U & (vlSelf->test__DOT__instr_wire 
                                      >> 0xcU)))) {
                        vlSelf->ALUctrl = 0U;
                        vlSelf->ImmSrc = 0U;
                    } else if ((1U == (7U & (vlSelf->test__DOT__instr_wire 
                                             >> 0xcU)))) {
                        vlSelf->ImmSrc = 0U;
                        vlSelf->ALUctrl = 7U;
                    }
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else {
                vlSelf->ImmSrc = 0U;
            }
        } else if ((8U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->ImmSrc = 0U;
        } else if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->ImmSrc = 0U;
        } else if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->ImmSrc = 2U;
                vlSelf->ALUctrl = 6U;
            } else {
                vlSelf->ImmSrc = 0U;
            }
        } else {
            vlSelf->ImmSrc = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((8U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->ImmSrc = 0U;
        } else if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->ImmSrc = 1U;
                    vlSelf->ALUctrl = 0U;
                } else {
                    vlSelf->ImmSrc = 0U;
                }
            } else {
                vlSelf->ImmSrc = 0U;
            }
        } else if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((0U == (7U & (vlSelf->test__DOT__instr_wire 
                                  >> 0xcU)))) {
                    vlSelf->ALUctrl = 0U;
                    vlSelf->ImmSrc = 0U;
                } else if ((1U == (7U & (vlSelf->test__DOT__instr_wire 
                                         >> 0xcU)))) {
                    vlSelf->ImmSrc = 0U;
                    vlSelf->ALUctrl = 7U;
                }
            } else {
                vlSelf->ImmSrc = 0U;
            }
        } else {
            vlSelf->ImmSrc = 0U;
        }
    } else if ((8U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->ImmSrc = 0U;
    } else if ((4U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->ImmSrc = 0U;
    } else if ((2U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((1U & (IData)(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((4U == (7U & (vlSelf->test__DOT__instr_wire 
                              >> 0xcU)))) {
                vlSelf->ImmSrc = 0U;
                vlSelf->ALUctrl = 5U;
            }
        } else {
            vlSelf->ImmSrc = 0U;
        }
    } else {
        vlSelf->ImmSrc = 0U;
    }
}

VL_INLINE_OPT void Vtest___024root___combo__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__in__DOT__pc_t__DOT__next = ((IData)(vlSelf->PCSrc_i)
                                                    ? 
                                                   (vlSelf->test__DOT__in__DOT__pcwire 
                                                    + vlSelf->ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->test__DOT__in__DOT__pcwire));
}

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtest___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
    if (VL_UNLIKELY((vlSelf->PCSrc_i & 0xfeU))) {
        Verilated::overWidthError("PCSrc_i");}
}
#endif  // VL_DEBUG
