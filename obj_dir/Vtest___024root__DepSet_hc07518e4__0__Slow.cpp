// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "verilated.h"

#include "Vtest___024root.h"

VL_ATTR_COLD void Vtest___024root___initial__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2c2e739__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_hb2c2e739__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2c2e739__0[1U] = 0x74696f6eU;
    __Vtemp_hb2c2e739__0[2U] = 0x74727563U;
    __Vtemp_hb2c2e739__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 8, 33, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2c2e739__0)
                 ,  &(vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("rom Loaded\n");
}

VL_ATTR_COLD void Vtest___024root___settle__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__in__DOT__pc_t__DOT__next = ((IData)(vlSelf->PCSrc_i)
                                                    ? 
                                                   (vlSelf->test__DOT__in__DOT__pcwire 
                                                    + vlSelf->ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->test__DOT__in__DOT__pcwire));
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

VL_ATTR_COLD void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    // Body
    Vtest___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtest___024root___eval_settle(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_settle\n"); );
    // Body
    Vtest___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtest___024root___final(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___final\n"); );
}

VL_ATTR_COLD void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->PCSrc_i = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->PCSrc = VL_RAND_RESET_I(1);
    vlSelf->MemWrite = VL_RAND_RESET_I(1);
    vlSelf->ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->JumpSrc = VL_RAND_RESET_I(1);
    vlSelf->JRetSrc = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__instr_wire = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__in__DOT__pcwire = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__in__DOT__pc_t__DOT__next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->test__DOT__in__DOT__rom_t__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
