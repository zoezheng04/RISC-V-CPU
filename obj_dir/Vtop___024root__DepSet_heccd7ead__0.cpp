// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__WriteDataM_wire = vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire;
    vlSelf->top__DOT__MemWriteM_wire = vlSelf->top__DOT__MemWriteE_wire;
    vlSelf->top__DOT__ALUsrcE_wire = ((~ (IData)(vlSelf->top__DOT__FlushD_wire)) 
                                      & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
    vlSelf->top__DOT__RegWriteW_wire = vlSelf->top__DOT__RegWriteM_wire;
    vlSelf->top__DOT__ALUResultW_wire = vlSelf->top__DOT__ALUResultM_wire;
    vlSelf->top__DOT__ResultSrcW_wire = vlSelf->top__DOT__ResultSrcM_wire;
    vlSelf->top__DOT__ReadDataW_wire = ((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit)
                                         ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire
                                         : ((IData)(vlSelf->top__DOT__MemTypeM_wire)
                                             ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                            [(0x1ffffU 
                                              & vlSelf->top__DOT__ALUResultM_wire)]
                                             : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                 [(0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__ALUResultM_wire))] 
                                                 << 0x18U) 
                                                | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->top__DOT__ALUResultM_wire))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->top__DOT__ALUResultM_wire))] 
                                                       << 8U) 
                                                      | vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->top__DOT__ALUResultM_wire)])))));
    vlSelf->top__DOT__RdW_wire = vlSelf->top__DOT__RdM_wire;
    vlSelf->top__DOT__MemWriteE_wire = ((~ (IData)(vlSelf->top__DOT__FlushD_wire)) 
                                        & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire));
    if (vlSelf->top__DOT__FlushD_wire) {
        vlSelf->top__DOT__RD2E_wire = 0U;
        vlSelf->top__DOT__RD1E_wire = 0U;
        vlSelf->top__DOT__ALUctrlE_wire = 0U;
        vlSelf->top__DOT__ExtImmE_wire = 0U;
    } else {
        vlSelf->top__DOT__RD2E_wire = vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire;
        vlSelf->top__DOT__RD1E_wire = vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire;
        vlSelf->top__DOT__ALUctrlE_wire = vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire;
        vlSelf->top__DOT__ExtImmE_wire = ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                           ? vlSelf->top__DOT__PCPlus4D_wire
                                           : vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire);
    }
    vlSelf->top__DOT__RegWriteM_wire = vlSelf->top__DOT__RegWriteE_wire;
    vlSelf->top__DOT__ResultSrcM_wire = vlSelf->top__DOT__ResultSrcE_wire;
    vlSelf->top__DOT__MemTypeM_wire = vlSelf->top__DOT__MemTypeE_wire;
    vlSelf->top__DOT__ResultW_wire = ((IData)(vlSelf->top__DOT__ResultSrcW_wire)
                                       ? vlSelf->top__DOT__ReadDataW_wire
                                       : vlSelf->top__DOT__ALUResultW_wire);
    vlSelf->top__DOT__ALUResultM_wire = vlSelf->top__DOT__Execute_Stage__DOT__Result_wire;
    vlSelf->top__DOT__RdM_wire = vlSelf->top__DOT__RdE_wire;
    if (vlSelf->top__DOT__FlushD_wire) {
        vlSelf->top__DOT__Rs1E_wire = 0U;
        vlSelf->top__DOT__Rs2E_wire = 0U;
        vlSelf->top__DOT__RdE_wire = 0U;
    } else {
        vlSelf->top__DOT__Rs1E_wire = (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                                >> 0xfU));
        vlSelf->top__DOT__Rs2E_wire = (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                                >> 0x14U));
        vlSelf->top__DOT__RdE_wire = (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                               >> 7U));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__StallF_wire)))) {
        vlSelf->top__DOT__PCPlus4D_wire = ((IData)(4U) 
                                           + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire);
        vlSelf->top__DOT__InstrD_wire = vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire;
    }
    if (vlSelf->top__DOT__RegWriteW_wire) {
        vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[vlSelf->top__DOT__RdW_wire] 
            = vlSelf->top__DOT__ResultW_wire;
        vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0U] = 0U;
    }
    vlSelf->top__DOT__RegWriteE_wire = ((~ (IData)(vlSelf->top__DOT__FlushD_wire)) 
                                        & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire));
    vlSelf->top__DOT__ResultSrcE_wire = ((~ (IData)(vlSelf->top__DOT__FlushD_wire)) 
                                         & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
    vlSelf->top__DOT__MemTypeE_wire = ((~ (IData)(vlSelf->top__DOT__FlushD_wire)) 
                                       & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire));
    vlSelf->a0 = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [0xaU];
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit 
        = (vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V
           [(7U & vlSelf->top__DOT__ALUResultM_wire)] 
           & (vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag
              [(7U & vlSelf->top__DOT__ALUResultM_wire)] 
              == (0x7ffffffU & (vlSelf->top__DOT__ALUResultM_wire 
                                >> 3U))));
    vlSelf->top__DOT__ForwardAE_wire = 0U;
    if ((((0U != (IData)(vlSelf->top__DOT__Rs1E_wire)) 
          & (IData)(vlSelf->top__DOT__RegWriteW_wire)) 
         & ((IData)(vlSelf->top__DOT__RdW_wire) == (IData)(vlSelf->top__DOT__Rs1E_wire)))) {
        vlSelf->top__DOT__ForwardAE_wire = 1U;
    }
    if ((((0U != (IData)(vlSelf->top__DOT__Rs1E_wire)) 
          & (IData)(vlSelf->top__DOT__RegWriteM_wire)) 
         & ((IData)(vlSelf->top__DOT__RdM_wire) == (IData)(vlSelf->top__DOT__Rs1E_wire)))) {
        vlSelf->top__DOT__ForwardAE_wire = 2U;
    }
    vlSelf->top__DOT__ForwardBE_wire = 0U;
    if ((((0U != (IData)(vlSelf->top__DOT__Rs2E_wire)) 
          & (IData)(vlSelf->top__DOT__RegWriteW_wire)) 
         & ((IData)(vlSelf->top__DOT__RdW_wire) == (IData)(vlSelf->top__DOT__Rs2E_wire)))) {
        vlSelf->top__DOT__ForwardBE_wire = 1U;
    }
    if ((((0U != (IData)(vlSelf->top__DOT__Rs2E_wire)) 
          & (IData)(vlSelf->top__DOT__RegWriteM_wire)) 
         & ((IData)(vlSelf->top__DOT__RdM_wire) == (IData)(vlSelf->top__DOT__Rs2E_wire)))) {
        vlSelf->top__DOT__ForwardBE_wire = 2U;
    }
    vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
        = ((0U == (IData)(vlSelf->top__DOT__ForwardAE_wire))
            ? vlSelf->top__DOT__RD1E_wire : ((1U == (IData)(vlSelf->top__DOT__ForwardAE_wire))
                                              ? vlSelf->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__ForwardAE_wire))
                                                  ? vlSelf->top__DOT__ALUResultM_wire
                                                  : vlSelf->top__DOT__RD1E_wire)));
    vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire 
        = ((0U == (IData)(vlSelf->top__DOT__ForwardBE_wire))
            ? vlSelf->top__DOT__RD2E_wire : ((1U == (IData)(vlSelf->top__DOT__ForwardBE_wire))
                                              ? vlSelf->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__ForwardBE_wire))
                                                  ? vlSelf->top__DOT__ALUResultM_wire
                                                  : vlSelf->top__DOT__RD2E_wire)));
    vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire 
        = ((IData)(vlSelf->top__DOT__ALUsrcE_wire) ? vlSelf->top__DOT__ExtImmE_wire
            : vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire);
    vlSelf->top__DOT__Execute_Stage__DOT__Result_wire 
        = ((8U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
            ? ((4U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                             ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                ^ vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                             : (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                & vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           | vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           ^ vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           >> (0x1fU & vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           - vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire))))
            : ((4U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           << (0x1fU & vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (0xfffff000U & vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                    : ((1U & (IData)(vlSelf->top__DOT__ALUctrlE_wire))
                        ? (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           != vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire)))));
    vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire 
        = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__InstrD_wire >> 0x14U))];
    vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire 
        = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__InstrD_wire >> 0xfU))];
    vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7 
        = ((2U & (vlSelf->top__DOT__InstrD_wire >> 4U)) 
           | (1U & (vlSelf->top__DOT__InstrD_wire >> 0x1eU)));
    vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX 
        = ((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                              >> 0x14U))) & ((0x1fU 
                                              & (vlSelf->top__DOT__InstrD_wire 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__RdM_wire))) 
            & (IData)(vlSelf->top__DOT__RegWriteM_wire))
            ? vlSelf->top__DOT__ALUResultM_wire : vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire);
    vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
        = ((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                              >> 0xfU))) & ((0x1fU 
                                             & (vlSelf->top__DOT__InstrD_wire 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__RdM_wire))) 
            & (IData)(vlSelf->top__DOT__RegWriteM_wire))
            ? vlSelf->top__DOT__ALUResultM_wire : vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire);
    vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlSelf->top__DOT__InstrD_wire);
    vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire 
        = (((((((0x33U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
                | (3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
               | (0x13U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x17U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire 
        = ((((((3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
               | (0x13U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x23U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire 
        = (0x23U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire 
        = (3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire 
        = (0x6fU == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire 
        = (0x67U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire = (IData)(
                                                            ((0x63U 
                                                              == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
                                                             & (0U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->top__DOT__InstrD_wire))));
    vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire = (IData)(
                                                            ((0x63U 
                                                              == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
                                                             & (0x1000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->top__DOT__InstrD_wire))));
    vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire 
        = ((3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
           | (0x23U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    if ((0x40U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 2U;
                        } else {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 3U;
                    } else {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0U == (7U & (vlSelf->top__DOT__InstrD_wire 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xdU;
                    } else if ((1U == (7U & (vlSelf->top__DOT__InstrD_wire 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 1U;
                    }
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x10U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((8U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            } else if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 4U;
                    } else {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((0x4000U & vlSelf->top__DOT__InstrD_wire)) {
                        if ((0x2000U & vlSelf->top__DOT__InstrD_wire)) {
                            if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                            } else {
                                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                        } else {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                        }
                    } else if ((0x2000U & vlSelf->top__DOT__InstrD_wire)) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire = 0U;
                    } else if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                    } else if ((3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7))) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                    } else {
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    }
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else if ((8U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 2U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 6U;
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((8U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 1U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                }
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((0x4000U & vlSelf->top__DOT__InstrD_wire)) {
                    if ((0x2000U & vlSelf->top__DOT__InstrD_wire)) {
                        if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                        } else {
                            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                    } else {
                        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__InstrD_wire)) {
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire = 0U;
                } else if ((0x1000U & vlSelf->top__DOT__InstrD_wire)) {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                } else if ((3U == (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7))) {
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                } else {
                    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                }
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
    } else if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
    } else if ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((4U == (7U & (vlSelf->top__DOT__InstrD_wire 
                              >> 0xcU)))) {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 5U;
            } else {
                vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            }
        } else {
            vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else {
        vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
        vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
    }
    if ((4U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire)))) {
                vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                    = (((- (IData)((vlSelf->top__DOT__InstrD_wire 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff000U & vlSelf->top__DOT__InstrD_wire) 
                          | ((0x800U & (vlSelf->top__DOT__InstrD_wire 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->top__DOT__InstrD_wire 
                                                      >> 0x14U)))));
            }
        }
    } else {
        vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
            = ((2U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                ? ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? (((- (IData)((vlSelf->top__DOT__InstrD_wire 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__InstrD_wire 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__InstrD_wire 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__InstrD_wire 
                                                      >> 7U)))))
                    : (((- (IData)((vlSelf->top__DOT__InstrD_wire 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->top__DOT__InstrD_wire 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__InstrD_wire 
                                                      >> 7U)))))
                : ((1U & (IData)(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? (0xfffff000U & vlSelf->top__DOT__InstrD_wire)
                    : (((- (IData)((vlSelf->top__DOT__InstrD_wire 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->top__DOT__InstrD_wire 
                                    >> 0x14U)))));
    }
    vlSelf->top__DOT__BranchD_wire = ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire) 
                                      | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire));
    vlSelf->top__DOT__HazardUnit__DOT__BranchStall 
        = ((((IData)(vlSelf->top__DOT__BranchD_wire) 
             & (IData)(vlSelf->top__DOT__RegWriteE_wire)) 
            & (((IData)(vlSelf->top__DOT__RdE_wire) 
                == (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                             >> 0xfU))) | ((IData)(vlSelf->top__DOT__RdE_wire) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__InstrD_wire 
                                                  >> 0x14U))))) 
           | (((IData)(vlSelf->top__DOT__BranchD_wire) 
               & (IData)(vlSelf->top__DOT__ResultSrcM_wire)) 
              & (((IData)(vlSelf->top__DOT__RdM_wire) 
                  == (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                               >> 0xfU))) | ((IData)(vlSelf->top__DOT__RdM_wire) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__InstrD_wire 
                                                    >> 0x14U))))));
    vlSelf->top__DOT__HazardUnit__DOT__lwstall = ((IData)(vlSelf->top__DOT__RegWriteE_wire) 
                                                  & (IData)(vlSelf->top__DOT__ResultSrcE_wire));
    vlSelf->top__DOT__StallPC_wire = ((IData)(vlSelf->top__DOT__HazardUnit__DOT__lwstall) 
                                      | (IData)(vlSelf->top__DOT__HazardUnit__DOT__BranchStall));
    vlSelf->top__DOT__StallF_wire = ((IData)(vlSelf->top__DOT__HazardUnit__DOT__lwstall) 
                                     | (IData)(vlSelf->top__DOT__HazardUnit__DOT__BranchStall));
    vlSelf->top__DOT__FlushD_wire = vlSelf->top__DOT__HazardUnit__DOT__lwstall;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4;
    // Body
    __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0 = 0U;
    __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__StallPC_wire)))) {
        vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire 
            = ((IData)(vlSelf->reset) ? 0U : vlSelf->top__DOT__Fetch_Stage__DOT__PCNext_wire);
    }
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire 
        = ((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit)
            ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data
           [(7U & vlSelf->top__DOT__ALUResultM_wire)]
            : 0U);
    if (((IData)(vlSelf->top__DOT__MemWriteM_wire) 
         & (IData)(vlSelf->top__DOT__MemTypeM_wire))) {
        __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0 
            = (0xffU & vlSelf->top__DOT__WriteDataM_wire);
        __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResultM_wire);
    } else if (((IData)(vlSelf->top__DOT__MemWriteM_wire) 
                & (~ (IData)(vlSelf->top__DOT__MemTypeM_wire)))) {
        __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1 
            = (0xffU & vlSelf->top__DOT__WriteDataM_wire);
        __Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1 = 1U;
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1 
            = (0x1ffffU & vlSelf->top__DOT__ALUResultM_wire);
        __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2 
            = (0xffU & (vlSelf->top__DOT__WriteDataM_wire 
                        >> 8U));
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM_wire));
        __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3 
            = (0xffU & (vlSelf->top__DOT__WriteDataM_wire 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResultM_wire));
        __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4 
            = (vlSelf->top__DOT__WriteDataM_wire >> 0x18U);
        __Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResultM_wire));
    }
    if (__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v0;
    }
    if (__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v1;
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v2;
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v3;
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4] 
            = __Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array__v4;
    }
    vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire 
        = ((vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
            [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
            << 0x18U) | ((vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                          [(0xfffU & ((IData)(2U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                          << 0x10U) | ((vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                        [(0xfffU & 
                                          ((IData)(1U) 
                                           + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                        << 8U) | vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                       [(0xfffU & vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire)])));
    if ((0U == vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire)) {
        vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire = 0x13U;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Fetch_Stage__DOT__PCNext_wire 
        = ((IData)(vlSelf->trigger) ? (((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire)
                                         ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                            != vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                         : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                             ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                                == vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                             : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                                | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire))))
                                        ? ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                            ? vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire
                                            : (vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                               + (vlSelf->top__DOT__PCPlus4D_wire 
                                                  - (IData)(4U))))
                                        : ((IData)(4U) 
                                           + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))
            : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
