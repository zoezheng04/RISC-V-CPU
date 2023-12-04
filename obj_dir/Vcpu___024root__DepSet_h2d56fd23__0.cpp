// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile_top__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__regfile_top__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile_top__DOT__registers__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__DataMemory_array__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v3;
    // Body
    __Vdlyvset__cpu__DOT__ram__DOT__DataMemory_array__v0 = 0U;
    __Vdlyvset__cpu__DOT__regfile_top__DOT__registers__v0 = 0U;
    if (vlSelf->cpu__DOT__MemWrite_wire) {
        __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v0 
            = (0xffU & vlSelf->cpu__DOT__RD2_wire);
        __Vdlyvset__cpu__DOT__ram__DOT__DataMemory_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v0 
            = (0x1ffffU & vlSelf->cpu__DOT__ALUout_wire);
        __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v1 
            = (0xffU & (vlSelf->cpu__DOT__RD2_wire 
                        >> 8U));
        __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__ALUout_wire));
        __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v2 
            = (0xffU & (vlSelf->cpu__DOT__RD2_wire 
                        >> 0x10U));
        __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__ALUout_wire));
        __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v3 
            = (vlSelf->cpu__DOT__RD2_wire >> 0x18U);
        __Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__ALUout_wire));
    }
    if (vlSelf->cpu__DOT__RegWrite_wire) {
        __Vdlyvval__cpu__DOT__regfile_top__DOT__registers__v0 
            = ((IData)(vlSelf->cpu__DOT__JumpSrc_wire)
                ? ((IData)(4U) + vlSelf->cpu__DOT__pc_wire)
                : vlSelf->cpu__DOT__Result_wire);
        __Vdlyvset__cpu__DOT__regfile_top__DOT__registers__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__regfile_top__DOT__registers__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instr_wire 
                        >> 7U));
    }
    vlSelf->cpu__DOT__PCout = ((IData)(vlSelf->rst)
                                ? 0U : vlSelf->cpu__DOT__pc_wire);
    if (__Vdlyvset__cpu__DOT__ram__DOT__DataMemory_array__v0) {
        vlSelf->cpu__DOT__ram__DOT__DataMemory_array[__Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v0] 
            = __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v0;
        vlSelf->cpu__DOT__ram__DOT__DataMemory_array[__Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v1] 
            = __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v1;
        vlSelf->cpu__DOT__ram__DOT__DataMemory_array[__Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v2] 
            = __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v2;
        vlSelf->cpu__DOT__ram__DOT__DataMemory_array[__Vdlyvdim0__cpu__DOT__ram__DOT__DataMemory_array__v3] 
            = __Vdlyvval__cpu__DOT__ram__DOT__DataMemory_array__v3;
    }
    if (__Vdlyvset__cpu__DOT__regfile_top__DOT__registers__v0) {
        vlSelf->cpu__DOT__regfile_top__DOT__registers[__Vdlyvdim0__cpu__DOT__regfile_top__DOT__registers__v0] 
            = __Vdlyvval__cpu__DOT__regfile_top__DOT__registers__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__regfile_top__DOT__registers
        [0xaU];
    vlSelf->cpu__DOT__instr_wire = ((vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                     [(0xfffU & ((IData)(3U) 
                                                 + vlSelf->cpu__DOT__PCout))] 
                                     << 0x18U) | ((
                                                   vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->cpu__DOT__PCout))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->cpu__DOT__PCout))] 
                                                      << 8U) 
                                                     | vlSelf->cpu__DOT__instr_mem__DOT__rom_array
                                                     [
                                                     (0xfffU 
                                                      & vlSelf->cpu__DOT__PCout)])));
    vlSelf->cpu__DOT__RD1_wire = vlSelf->cpu__DOT__regfile_top__DOT__registers
        [(0x1fU & (vlSelf->cpu__DOT__instr_wire >> 0xfU))];
    vlSelf->cpu__DOT__RD2_wire = vlSelf->cpu__DOT__regfile_top__DOT__registers
        [(0x1fU & (vlSelf->cpu__DOT__instr_wire >> 0x14U))];
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__pc_wire = ((IData)(vlSelf->trigger)
                                  ? vlSelf->cpu__DOT__next_pc
                                  : 0U);
    vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlSelf->cpu__DOT__instr_wire);
    vlSelf->cpu__DOT__RegWrite_wire = (((((((0x33U 
                                             == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                            | (3U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                           | (0x13U 
                                              == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                          | (0x67U 
                                             == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                         | (0x6fU == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                        | (0x17U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                       | (0x37U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu__DOT__ALUSrc_wire = ((((((3U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                         | (0x13U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                        | (0x67U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                       | (0x6fU == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                      | (0x23U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                     | (0x37U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu__DOT__MemWrite_wire = (0x23U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->cpu__DOT__ResultSrc_wire = (3U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->cpu__DOT__PCSrc_wire = ((((0x63U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                      & (~ (IData)(vlSelf->cpu__DOT__EQ_wire))) 
                                     | (0x6fU == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                    | (0x67U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu__DOT__JumpSrc_wire = ((0x6fU == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                      | (0x67U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu__DOT__JRetSrc_wire = (0x67U == (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    if ((0x40U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            } else if ((8U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                            vlSelf->cpu__DOT__ImmSrc_wire = 4U;
                            vlSelf->cpu__DOT__ALUctrl_wire = 2U;
                        } else {
                            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                        }
                    } else {
                        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                    }
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->cpu__DOT__ImmSrc_wire = 4U;
                        vlSelf->cpu__DOT__ALUctrl_wire = 3U;
                    } else {
                        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                    }
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->cpu__DOT__ImmSrc_wire = 3U;
                    vlSelf->cpu__DOT__ALUctrl_wire = 1U;
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x10U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((8U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            } else if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->cpu__DOT__ImmSrc_wire = 4U;
                        vlSelf->cpu__DOT__ALUctrl_wire = 4U;
                    } else {
                        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                    }
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0U == (7U & (vlSelf->cpu__DOT__instr_wire 
                                      >> 0xcU)))) {
                        vlSelf->cpu__DOT__ALUctrl_wire = 0U;
                        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                    } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_wire 
                                             >> 0xcU)))) {
                        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu__DOT__ALUctrl_wire = 7U;
                    }
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            }
        } else if ((8U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        } else if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu__DOT__ImmSrc_wire = 2U;
                vlSelf->cpu__DOT__ALUctrl_wire = 6U;
            } else {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((8U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->cpu__DOT__ImmSrc_wire = 1U;
                    vlSelf->cpu__DOT__ALUctrl_wire = 0U;
                } else {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            }
        } else if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((0U == (7U & (vlSelf->cpu__DOT__instr_wire 
                                  >> 0xcU)))) {
                    vlSelf->cpu__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                } else if ((1U == (7U & (vlSelf->cpu__DOT__instr_wire 
                                         >> 0xcU)))) {
                    vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu__DOT__ALUctrl_wire = 7U;
                }
            } else {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        }
    } else if ((8U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
    } else if ((4U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
    } else if ((2U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((4U == (7U & (vlSelf->cpu__DOT__instr_wire 
                              >> 0xcU)))) {
                vlSelf->cpu__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu__DOT__ALUctrl_wire = 5U;
            }
        } else {
            vlSelf->cpu__DOT__ImmSrc_wire = 0U;
        }
    } else {
        vlSelf->cpu__DOT__ImmSrc_wire = 0U;
    }
    if ((0U == (IData)(vlSelf->cpu__DOT__ImmSrc_wire))) {
        vlSelf->cpu__DOT__Imm_o_wire = (((- (IData)(
                                                    (vlSelf->cpu__DOT__instr_wire 
                                                     >> 0x1fU))) 
                                         << 0xbU) | 
                                        (0x7ffU & (vlSelf->cpu__DOT__instr_wire 
                                                   >> 0x14U)));
    } else if ((1U == (IData)(vlSelf->cpu__DOT__ImmSrc_wire))) {
        vlSelf->cpu__DOT__Imm_o_wire = (0xfffff000U 
                                        & vlSelf->cpu__DOT__instr_wire);
    } else if ((2U == (IData)(vlSelf->cpu__DOT__ImmSrc_wire))) {
        vlSelf->cpu__DOT__Imm_o_wire = (((- (IData)(
                                                    (vlSelf->cpu__DOT__instr_wire 
                                                     >> 0x1fU))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSelf->cpu__DOT__instr_wire 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->cpu__DOT__instr_wire 
                                             >> 7U))));
    } else if ((3U == (IData)(vlSelf->cpu__DOT__ImmSrc_wire))) {
        vlSelf->cpu__DOT__Imm_o_wire = (((- (IData)(
                                                    (vlSelf->cpu__DOT__instr_wire 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSelf->cpu__DOT__instr_wire 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->cpu__DOT__instr_wire 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->cpu__DOT__instr_wire 
                                                  >> 7U)))));
    } else if ((4U == (IData)(vlSelf->cpu__DOT__ImmSrc_wire))) {
        vlSelf->cpu__DOT__Imm_o_wire = (((- (IData)(
                                                    (vlSelf->cpu__DOT__instr_wire 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->cpu__DOT__instr_wire) 
                                           | ((0x800U 
                                               & (vlSelf->cpu__DOT__instr_wire 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->cpu__DOT__instr_wire 
                                                    >> 0x14U)))));
    }
    vlSelf->cpu__DOT__ALUop2_wire = ((IData)(vlSelf->cpu__DOT__ALUSrc_wire)
                                      ? vlSelf->cpu__DOT__Imm_o_wire
                                      : vlSelf->cpu__DOT__RD2_wire);
    vlSelf->cpu__DOT__ALUout_wire = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                              ? (vlSelf->cpu__DOT__RD1_wire 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__ALUop2_wire))
                                              : (vlSelf->cpu__DOT__RD1_wire 
                                                 + vlSelf->cpu__DOT__ALUop2_wire))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                              ? (0xffU 
                                                 & vlSelf->cpu__DOT__ALUop2_wire)
                                              : (0xfffff000U 
                                                 & vlSelf->cpu__DOT__ALUop2_wire)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                              ? (vlSelf->cpu__DOT__RD1_wire 
                                                 + vlSelf->cpu__DOT__ALUop2_wire)
                                              : (vlSelf->cpu__DOT__RD1_wire 
                                                 + vlSelf->cpu__DOT__ALUop2_wire))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl_wire))
                                              ? (- (IData)(
                                                           (vlSelf->cpu__DOT__RD1_wire 
                                                            != vlSelf->cpu__DOT__ALUop2_wire)))
                                              : (vlSelf->cpu__DOT__RD1_wire 
                                                 + vlSelf->cpu__DOT__ALUop2_wire))));
    vlSelf->cpu__DOT__EQ_wire = ((0U == vlSelf->cpu__DOT__ALUout_wire)
                                  ? 1U : 0U);
    vlSelf->cpu__DOT__Result_wire = ((IData)(vlSelf->cpu__DOT__ResultSrc_wire)
                                      ? ((vlSelf->cpu__DOT__ram__DOT__DataMemory_array
                                          [(0x1ffffU 
                                            & ((IData)(3U) 
                                               + vlSelf->cpu__DOT__ALUout_wire))] 
                                          << 0x18U) 
                                         | ((vlSelf->cpu__DOT__ram__DOT__DataMemory_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->cpu__DOT__ALUout_wire))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu__DOT__ram__DOT__DataMemory_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu__DOT__ALUout_wire))] 
                                                << 8U) 
                                               | vlSelf->cpu__DOT__ram__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & vlSelf->cpu__DOT__ALUout_wire)])))
                                      : vlSelf->cpu__DOT__ALUout_wire);
    vlSelf->cpu__DOT__next_pc = ((IData)(vlSelf->cpu__DOT__PCSrc_wire)
                                  ? ((IData)(vlSelf->cpu__DOT__JRetSrc_wire)
                                      ? vlSelf->cpu__DOT__Result_wire
                                      : (vlSelf->cpu__DOT__Imm_o_wire 
                                         + vlSelf->cpu__DOT__PCout))
                                  : ((IData)(4U) + vlSelf->cpu__DOT__pc_wire));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__next_pc ^ vlSelf->__Vchglast__TOP__cpu__DOT__next_pc)
         | (vlSelf->cpu__DOT__EQ_wire ^ vlSelf->__Vchglast__TOP__cpu__DOT__EQ_wire));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__next_pc ^ vlSelf->__Vchglast__TOP__cpu__DOT__next_pc))) VL_DBG_MSGF("        CHANGE: cpu.sv:14: cpu.next_pc\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__EQ_wire ^ vlSelf->__Vchglast__TOP__cpu__DOT__EQ_wire))) VL_DBG_MSGF("        CHANGE: cpu.sv:19: cpu.EQ_wire\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__next_pc = vlSelf->cpu__DOT__next_pc;
    vlSelf->__Vchglast__TOP__cpu__DOT__EQ_wire = vlSelf->cpu__DOT__EQ_wire;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
