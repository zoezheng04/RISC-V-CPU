// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2553e7c1__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string{"pdf.hex"}
                 ,  &(vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Loading DataMemory.\n");
    __Vtemp_h2553e7c1__0[0U] = 0x2e6d656dU;
    __Vtemp_h2553e7c1__0[1U] = 0x7369616eU;
    __Vtemp_h2553e7c1__0[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h2553e7c1__0)
                 ,  &(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array)
                 , 0x10000U, ~0ULL);
    VL_WRITEF("DataMemory loaded\n");
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ResultW_wire = ((IData)(vlSelf->top__DOT__ResultSrcW_wire)
                                       ? vlSelf->top__DOT__ReadDataW_wire
                                       : vlSelf->top__DOT__ALUResultW_wire);
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
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr 
        = ((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBEN)
            ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBaddr
            : vlSelf->top__DOT__ALUResultM_wire);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__cache_hit_1 
        = ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1
            [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                    >> 2U))] == (vlSelf->top__DOT__ALUResultM_wire 
                                 >> 5U)) & vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1
           [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                   >> 2U))]);
    vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7 
        = ((2U & (vlSelf->top__DOT__InstrD_wire >> 4U)) 
           | (1U & (vlSelf->top__DOT__InstrD_wire >> 0x1eU)));
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
    if (vlSelf->top__DOT__RegWriteW_wire) {
        vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[vlSelf->top__DOT__RdW_wire] 
            = vlSelf->top__DOT__ResultW_wire;
        vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0U] = 0U;
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
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_data 
        = ((IData)(vlSelf->top__DOT__MemTypeM_wire)
            ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
           [(0x1ffffU & vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr)]
            : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                [(0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr))] 
                << 0x18U) | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                              [(0x1ffffU & ((IData)(2U) 
                                            + vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr))] 
                              << 0x10U) | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr))] 
                                            << 8U) 
                                           | vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                           [(0x1ffffU 
                                             & vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr)]))));
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire 
        = (((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0
             [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                     >> 2U))] == (vlSelf->top__DOT__ALUResultM_wire 
                                  >> 5U)) & vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0
            [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                    >> 2U))]) | (IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__cache_hit_1));
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
    vlSelf->a0 = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [0xaU];
    vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire 
        = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__InstrD_wire >> 0x14U))];
    vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire 
        = vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlSelf->top__DOT__InstrD_wire >> 0xfU))];
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
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__missed_data 
        = ((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire)
            ? vlSelf->top__DOT__WriteDataM_wire : vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_data);
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmE_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ResultW_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataW_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4D_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUctrlE_wire = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__RegWriteE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteM_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteW_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StallF_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StallPC_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ForwardAE_wire = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ForwardBE_wire = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWriteE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrcE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemTypeE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemTypeM_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Rs1E_wire = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2E_wire = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdE_wire = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdM_wire = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdW_wire = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ResultSrcE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcM_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcW_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__FlushD_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Fetch_Stage__DOT__PCNext_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Execute_Stage__DOT__Result_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__missed_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBEN = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__cache_hit_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HazardUnit__DOT__BranchStall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__HazardUnit__DOT__lwstall = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v1 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v2 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v1 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v1 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v2 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v1 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v2 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1__v3 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v2 = 0;
    vlSelf->__Vdlyvset__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0__v2 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v2 = 0;
    vlSelf->__Vdlyvval__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0__v3 = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
