// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu1.h for the primary calling header

#include "verilated.h"

#include "Vcpu1___024root.h"

VL_INLINE_OPT void Vcpu1___024root___sequent__TOP__0(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu1__DOT__D__DOT__rf__DOT__registers__v1;
    IData/*31:0*/ __Vdlyvval__cpu1__DOT__D__DOT__rf__DOT__registers__v1;
    CData/*0:0*/ __Vdlyvset__cpu1__DOT__D__DOT__rf__DOT__registers__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1;
    CData/*0:0*/ __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3;
    IData/*16:0*/ __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4;
    CData/*7:0*/ __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4;
    // Body
    __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0 = 0U;
    __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1 = 0U;
    __Vdlyvset__cpu1__DOT__D__DOT__rf__DOT__registers__v1 = 0U;
    if (((IData)(vlSelf->cpu1__DOT__MemWrite_wire) 
         & (IData)(vlSelf->cpu1__DOT__MemType_wire))) {
        __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0 
            = (0xffU & vlSelf->cpu1__DOT__RD2_wire);
        __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0 = 1U;
        __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0 
            = (0x1ffffU & vlSelf->cpu1__DOT__ALU_o_wire);
    } else if (((IData)(vlSelf->cpu1__DOT__MemWrite_wire) 
                & (~ (IData)(vlSelf->cpu1__DOT__MemType_wire)))) {
        __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1 
            = (0xffU & vlSelf->cpu1__DOT__RD2_wire);
        __Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1 = 1U;
        __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1 
            = (0x1ffffU & vlSelf->cpu1__DOT__ALU_o_wire);
        __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2 
            = (0xffU & (vlSelf->cpu1__DOT__RD2_wire 
                        >> 8U));
        __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->cpu1__DOT__ALU_o_wire));
        __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3 
            = (0xffU & (vlSelf->cpu1__DOT__RD2_wire 
                        >> 0x10U));
        __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3 
            = (0x1ffffU & ((IData)(2U) + vlSelf->cpu1__DOT__ALU_o_wire));
        __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4 
            = (vlSelf->cpu1__DOT__RD2_wire >> 0x18U);
        __Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4 
            = (0x1ffffU & ((IData)(3U) + vlSelf->cpu1__DOT__ALU_o_wire));
    }
    vlSelf->cpu1__DOT__IM__DOT__pc_wire = ((IData)(vlSelf->rst)
                                            ? 0U : vlSelf->cpu1__DOT__IM__DOT__next);
    if (vlSelf->cpu1__DOT__D__DOT__RegWrite_wire) {
        __Vdlyvval__cpu1__DOT__D__DOT__rf__DOT__registers__v1 
            = vlSelf->cpu1__DOT__WD3_wire;
        __Vdlyvset__cpu1__DOT__D__DOT__rf__DOT__registers__v1 = 1U;
        __Vdlyvdim0__cpu1__DOT__D__DOT__rf__DOT__registers__v1 
            = (0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                        >> 7U));
    }
    if (__Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0) {
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0] 
            = __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v0;
    }
    if (__Vdlyvset__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1) {
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1] 
            = __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v1;
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2] 
            = __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v2;
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3] 
            = __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v3;
        vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array[__Vdlyvdim0__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4] 
            = __Vdlyvval__cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array__v4;
    }
    vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[0U] = 0U;
    if (__Vdlyvset__cpu1__DOT__D__DOT__rf__DOT__registers__v1) {
        vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[__Vdlyvdim0__cpu1__DOT__D__DOT__rf__DOT__registers__v1] 
            = __Vdlyvval__cpu1__DOT__D__DOT__rf__DOT__registers__v1;
    }
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
    vlSelf->a0 = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [0xaU];
    vlSelf->cpu1__DOT__RD1_wire = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [(0x1fU & (vlSelf->cpu1__DOT__instr_wire >> 0xfU))];
    vlSelf->cpu1__DOT__RD2_wire = vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers
        [(0x1fU & (vlSelf->cpu1__DOT__instr_wire >> 0x14U))];
}

VL_INLINE_OPT void Vcpu1___024root___combo__TOP__0(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___combo__TOP__0\n"); );
    // Body
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

void Vcpu1___024root___eval(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu1___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu1___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu1___024root___change_request_1(Vcpu1___024root* vlSelf);

VL_INLINE_OPT QData Vcpu1___024root___change_request(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___change_request\n"); );
    // Body
    return (Vcpu1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu1___024root___change_request_1(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu1__DOT__EQ_wire ^ vlSelf->__Vchglast__TOP__cpu1__DOT__EQ_wire));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu1__DOT__EQ_wire ^ vlSelf->__Vchglast__TOP__cpu1__DOT__EQ_wire))) VL_DBG_MSGF("        CHANGE: cpu1.sv:20: cpu1.EQ_wire\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu1__DOT__EQ_wire = vlSelf->cpu1__DOT__EQ_wire;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu1___024root___eval_debug_assertions(Vcpu1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
