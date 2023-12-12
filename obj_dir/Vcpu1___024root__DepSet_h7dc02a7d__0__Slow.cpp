// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu1.h for the primary calling header

#include "verilated.h"

#include "Vcpu1___024root.h"

VL_ATTR_COLD void Vcpu1___024root___initial__TOP__0(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0b1accc7__0;
    // Body
    VL_WRITEF("Loading DataMemory.\n");
    __Vtemp_h0b1accc7__0[0U] = 0x2e6d656dU;
    __Vtemp_h0b1accc7__0[1U] = 0x6e676c65U;
    __Vtemp_h0b1accc7__0[2U] = 0x74726961U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h0b1accc7__0)
                 ,  &(vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array)
                 , 0x10000U, ~0ULL);
    VL_WRITEF("DataMemory loaded\nLoading rom.\n");
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string{"pdf.hex"}
                 ,  &(vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array)
                 , 3217031168, ~0ULL);
    VL_WRITEF("rom Loaded\n");
}

VL_ATTR_COLD void Vcpu1___024root___settle__TOP__0(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [0xaU];
    vlSelf->cpu1__DOT__instr_wire = ((vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array
                                      [(0xfffU & ((IData)(3U) 
                                                  + vlSelf->cpu1__DOT__IM__DOT__pc_wire))] 
                                      << 0x18U) | (
                                                   (vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->cpu1__DOT__IM__DOT__pc_wire))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array
                                                       [
                                                       (0xfffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->cpu1__DOT__IM__DOT__pc_wire))] 
                                                       << 8U) 
                                                      | vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array
                                                      [
                                                      (0xfffU 
                                                       & vlSelf->cpu1__DOT__IM__DOT__pc_wire)])));
    vlSelf->cpu1__DOT__RD1_wire = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [(0x1fU & (vlSelf->cpu1__DOT__instr_wire >> 0xfU))];
    vlSelf->cpu1__DOT__RD2_wire = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [(0x1fU & (vlSelf->cpu1__DOT__instr_wire >> 0x14U))];
    vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlSelf->cpu1__DOT__instr_wire);
    vlSelf->cpu1__DOT__D__DOT__RegWrite_wire = ((((
                                                   (((0x33U 
                                                      == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                                    | (0x13U 
                                                       == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                                   | (0x67U 
                                                      == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                                  | (0x6fU 
                                                     == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                                 | (0x17U 
                                                    == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                                | (0x37U 
                                                   == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu1__DOT__ALUSrc_wire = ((((((3U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                          | (0x13U 
                                             == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                         | (0x67U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                        | (0x6fU == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                       | (0x23U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                      | (0x37U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu1__DOT__MemWrite_wire = (0x23U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->cpu1__DOT__ResultSrc_wire = (3U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->cpu1__DOT__PCSrc_wire = (((((IData)(((0x63U 
                                                  == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->cpu1__DOT__instr_wire)))) 
                                        & (IData)(vlSelf->cpu1__DOT__EQ_wire)) 
                                       | ((IData)((
                                                   (0x63U 
                                                    == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                                   & (0x1000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->cpu1__DOT__instr_wire)))) 
                                          & (~ (IData)(vlSelf->cpu1__DOT__EQ_wire)))) 
                                      | (0x6fU == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) 
                                     | (0x67U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu1__DOT__JumpSrc_wire = ((0x6fU == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)) 
                                       | (0x67U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->cpu1__DOT__JRetSrc_wire = (0x67U == (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O));
    if ((0x40U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            } else if ((8U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 4U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 2U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        } else {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        }
                    } else {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 3U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0U == (7U & (vlSelf->cpu1__DOT__instr_wire 
                                      >> 0xcU)))) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 3U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0xdU;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else if ((1U == (7U & (vlSelf->cpu1__DOT__instr_wire 
                                             >> 0xcU)))) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 3U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 1U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            }
        } else {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x10U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((8U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            } else if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 4U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 4U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0x4000U & vlSelf->cpu1__DOT__instr_wire)) {
                        if ((0x2000U & vlSelf->cpu1__DOT__instr_wire)) {
                            if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                                vlSelf->cpu1__DOT__ALUctrl_wire = 0xcU;
                                vlSelf->cpu1__DOT__MemType_wire = 0U;
                            } else {
                                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                                vlSelf->cpu1__DOT__ALUctrl_wire = 0xbU;
                                vlSelf->cpu1__DOT__MemType_wire = 0U;
                            }
                        } else if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 9U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        } else {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 0xaU;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        }
                    } else if ((1U & (~ (vlSelf->cpu1__DOT__instr_wire 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 7U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        } else if ((0x40000000U & vlSelf->cpu1__DOT__instr_wire)) {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 8U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        } else {
                            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        }
                    }
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            }
        } else if ((8U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        } else if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        } else if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 2U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 6U;
                vlSelf->cpu1__DOT__MemType_wire = 1U;
            } else {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            }
        } else {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((8U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        } else if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 1U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                } else {
                    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                    vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                    vlSelf->cpu1__DOT__MemType_wire = 0U;
                }
            } else {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            }
        } else if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
                if ((0x4000U & vlSelf->cpu1__DOT__instr_wire)) {
                    if ((0x2000U & vlSelf->cpu1__DOT__instr_wire)) {
                        if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 0xcU;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        } else {
                            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                            vlSelf->cpu1__DOT__ALUctrl_wire = 0xbU;
                            vlSelf->cpu1__DOT__MemType_wire = 0U;
                        }
                    } else if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 9U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0xaU;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                } else if ((1U & (~ (vlSelf->cpu1__DOT__instr_wire 
                                     >> 0xdU)))) {
                    if ((0x1000U & vlSelf->cpu1__DOT__instr_wire)) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 7U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else if ((0x40000000U & vlSelf->cpu1__DOT__instr_wire)) {
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__ALUctrl_wire = 8U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    } else {
                        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                        vlSelf->cpu1__DOT__MemType_wire = 0U;
                    }
                }
            } else {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
                vlSelf->cpu1__DOT__MemType_wire = 0U;
            }
        } else {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        }
    } else if ((8U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
        vlSelf->cpu1__DOT__MemType_wire = 0U;
    } else if ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
        vlSelf->cpu1__DOT__MemType_wire = 0U;
    } else if ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
        if ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O))) {
            if ((4U == (7U & (vlSelf->cpu1__DOT__instr_wire 
                              >> 0xcU)))) {
                vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
                vlSelf->cpu1__DOT__ALUctrl_wire = 5U;
                vlSelf->cpu1__DOT__MemType_wire = 1U;
            }
        } else {
            vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
            vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
            vlSelf->cpu1__DOT__MemType_wire = 0U;
        }
    } else {
        vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = 0U;
        vlSelf->cpu1__DOT__ALUctrl_wire = 0U;
        vlSelf->cpu1__DOT__MemType_wire = 0U;
    }
    vlSelf->cpu1__DOT__Imm_o_wire = ((4U & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                      ? ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                                   ? 0U
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->cpu1__DOT__instr_wire 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->cpu1__DOT__instr_wire) 
                                                      | ((0x800U 
                                                          & (vlSelf->cpu1__DOT__instr_wire 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->cpu1__DOT__instr_wire 
                                                               >> 0x14U)))))))
                                      : ((2U & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                          ? ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                              ? (((- (IData)(
                                                             (vlSelf->cpu1__DOT__instr_wire 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->cpu1__DOT__instr_wire 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->cpu1__DOT__instr_wire 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->cpu1__DOT__instr_wire 
                                                             >> 7U)))))
                                              : (((- (IData)(
                                                             (vlSelf->cpu1__DOT__instr_wire 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->cpu1__DOT__instr_wire 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->cpu1__DOT__instr_wire 
                                                          >> 7U)))))
                                          : ((1U & (IData)(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire))
                                              ? (0xfffff000U 
                                                 & vlSelf->cpu1__DOT__instr_wire)
                                              : (((- (IData)(
                                                             (vlSelf->cpu1__DOT__instr_wire 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | (0x7ffU 
                                                    & (vlSelf->cpu1__DOT__instr_wire 
                                                       >> 0x14U))))));
    vlSelf->cpu1__DOT__E__DOT__ALUop2 = ((IData)(vlSelf->cpu1__DOT__ALUSrc_wire)
                                          ? vlSelf->cpu1__DOT__Imm_o_wire
                                          : vlSelf->cpu1__DOT__RD2_wire);
    vlSelf->cpu1__DOT__ALU_o_wire = ((8U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                      ? ((4U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                          ? ((2U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                               ? (vlSelf->cpu1__DOT__RD1_wire 
                                                  ^ vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                               : (vlSelf->cpu1__DOT__RD1_wire 
                                                  & vlSelf->cpu1__DOT__E__DOT__ALUop2)))
                                          : ((2U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                              ? ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  | vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                                  : 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  ^ vlSelf->cpu1__DOT__E__DOT__ALUop2))
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->cpu1__DOT__E__DOT__ALUop2))
                                                  : 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  - vlSelf->cpu1__DOT__E__DOT__ALUop2))))
                                      : ((4U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                          ? ((2U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                              ? ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->cpu1__DOT__E__DOT__ALUop2))
                                                  : 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  + vlSelf->cpu1__DOT__E__DOT__ALUop2))
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  + vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                                  : 
                                                 (0xfffff000U 
                                                  & vlSelf->cpu1__DOT__E__DOT__ALUop2)))
                                          : ((2U & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                              ? ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  + vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                                  : vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                              : ((1U 
                                                  & (IData)(vlSelf->cpu1__DOT__ALUctrl_wire))
                                                  ? 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  ^ vlSelf->cpu1__DOT__E__DOT__ALUop2)
                                                  : 
                                                 (vlSelf->cpu1__DOT__RD1_wire 
                                                  + vlSelf->cpu1__DOT__E__DOT__ALUop2)))));
    vlSelf->cpu1__DOT__EQ_wire = (0U == vlSelf->cpu1__DOT__ALU_o_wire);
    vlSelf->cpu1__DOT__Result_wire = ((IData)(vlSelf->cpu1__DOT__ResultSrc_wire)
                                       ? ((IData)(vlSelf->cpu1__DOT__MemType_wire)
                                           ? vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                          [(0x1ffffU 
                                            & vlSelf->cpu1__DOT__ALU_o_wire)]
                                           : ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                               << 0x18U) 
                                              | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                                  << 0x10U) 
                                                 | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                                     << 8U) 
                                                    | vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                    [
                                                    (0x1ffffU 
                                                     & vlSelf->cpu1__DOT__ALU_o_wire)]))))
                                       : vlSelf->cpu1__DOT__ALU_o_wire);
    vlSelf->cpu1__DOT__PC_target = (vlSelf->cpu1__DOT__Imm_o_wire 
                                    + vlSelf->cpu1__DOT__IM__DOT__pc_wire);
    vlSelf->cpu1__DOT__JRet_o_wire = ((IData)(vlSelf->cpu1__DOT__JRetSrc_wire)
                                       ? vlSelf->cpu1__DOT__Result_wire
                                       : vlSelf->cpu1__DOT__PC_target);
    vlSelf->cpu1__DOT__IM__DOT__inc_pc = ((IData)(4U) 
                                          + vlSelf->cpu1__DOT__IM__DOT__pc_wire);
    vlSelf->cpu1__DOT__IM__DOT__PC_next = ((IData)(vlSelf->cpu1__DOT__PCSrc_wire)
                                            ? vlSelf->cpu1__DOT__JRet_o_wire
                                            : vlSelf->cpu1__DOT__IM__DOT__inc_pc);
    vlSelf->cpu1__DOT__IM__DOT__next = ((IData)(vlSelf->trigger)
                                         ? vlSelf->cpu1__DOT__IM__DOT__PC_next
                                         : 0xbfc00000U);
    vlSelf->cpu1__DOT__WD3_wire = ((IData)(vlSelf->cpu1__DOT__JumpSrc_wire)
                                    ? vlSelf->cpu1__DOT__IM__DOT__inc_pc
                                    : vlSelf->cpu1__DOT__Result_wire);
}

VL_ATTR_COLD void Vcpu1___024root___eval_initial(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___eval_initial\n"); );
    // Body
    Vcpu1___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu1___024root___eval_settle(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___eval_settle\n"); );
    // Body
    Vcpu1___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu1___024root___final(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu1___024root___ctor_var_reset(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__PCSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__ResultSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__MemWrite_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__ALUctrl_wire = VL_RAND_RESET_I(4);
    vlSelf->cpu1__DOT__ALUSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__JumpSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__JRetSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__Result_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__instr_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__WD3_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__EQ_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__RD1_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__RD2_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__Imm_o_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__ALU_o_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__PC_target = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__JRet_o_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__MemType_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__IM__DOT__next = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__IM__DOT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__IM__DOT__inc_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu1__DOT__IM__DOT__PC_next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu1__DOT__IM__DOT__InstructionMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire = VL_RAND_RESET_I(3);
    vlSelf->cpu1__DOT__D__DOT__RegWrite_wire = VL_RAND_RESET_I(1);
    vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu1__DOT__E__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vchglast__TOP__cpu1__DOT__EQ_wire = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
