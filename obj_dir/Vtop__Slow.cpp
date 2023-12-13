// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string("pdf.hex")
                 , vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                 , 3217031168, ~0ULL);
    VL_WRITEF("Loading DataMemory.\n");
    __Vtemp1[0U] = 0x2e6d656dU;
    __Vtemp1[1U] = 0x7369616eU;
    __Vtemp1[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 , vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                 , 0x10000U, ~0ULL);
    VL_WRITEF("DataMemory loaded\n");
}

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__ResultW_wire = ((IData)(vlTOPp->top__DOT__ResultSrcW_wire)
                                       ? vlTOPp->top__DOT__ReadDataW_wire
                                       : vlTOPp->top__DOT__ALUResultW_wire);
    vlTOPp->top__DOT__ForwardAE_wire = 0U;
    if ((((0U != (IData)(vlTOPp->top__DOT__Rs1E_wire)) 
          & (IData)(vlTOPp->top__DOT__RegWriteW_wire)) 
         & ((IData)(vlTOPp->top__DOT__RdW_wire) == (IData)(vlTOPp->top__DOT__Rs1E_wire)))) {
        vlTOPp->top__DOT__ForwardAE_wire = 1U;
    }
    if ((((0U != (IData)(vlTOPp->top__DOT__Rs1E_wire)) 
          & (IData)(vlTOPp->top__DOT__RegWriteM_wire)) 
         & ((IData)(vlTOPp->top__DOT__RdM_wire) == (IData)(vlTOPp->top__DOT__Rs1E_wire)))) {
        vlTOPp->top__DOT__ForwardAE_wire = 2U;
    }
    vlTOPp->top__DOT__ForwardBE_wire = 0U;
    if ((((0U != (IData)(vlTOPp->top__DOT__Rs2E_wire)) 
          & (IData)(vlTOPp->top__DOT__RegWriteW_wire)) 
         & ((IData)(vlTOPp->top__DOT__RdW_wire) == (IData)(vlTOPp->top__DOT__Rs2E_wire)))) {
        vlTOPp->top__DOT__ForwardBE_wire = 1U;
    }
    if ((((0U != (IData)(vlTOPp->top__DOT__Rs2E_wire)) 
          & (IData)(vlTOPp->top__DOT__RegWriteM_wire)) 
         & ((IData)(vlTOPp->top__DOT__RdM_wire) == (IData)(vlTOPp->top__DOT__Rs2E_wire)))) {
        vlTOPp->top__DOT__ForwardBE_wire = 2U;
    }
    vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O 
        = (0x7fU & vlTOPp->top__DOT__InstrD_wire);
    vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire 
        = (((((((0x33U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
                | (3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
               | (0x13U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x17U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire 
        = ((((((3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
               | (0x13U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
              | (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
             | (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
            | (0x23U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) 
           | (0x37U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire 
        = (0x23U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire 
        = (3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire 
        = (0x6fU == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire 
        = (0x67U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O));
    vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire = 
        ((0x63U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
         & (0U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                         >> 0xcU))));
    vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire = 
        ((0x63U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
         & (1U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                         >> 0xcU))));
    vlTOPp->top__DOT__Decode_Stage__DOT__MemType_wire 
        = ((3U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)) 
           | (0x23U == (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O)));
    if ((0x40U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 2U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 3U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0xcU)))) {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xdU;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->top__DOT__InstrD_wire 
                                                   >> 0xcU)))) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 3U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 4U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 4U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0x4000U & vlTOPp->top__DOT__InstrD_wire)) {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                                        } else {
                                            if ((0x40000000U 
                                                 & vlTOPp->top__DOT__InstrD_wire)) {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                                            } else {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 2U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 6U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 1U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((0x4000U & vlTOPp->top__DOT__InstrD_wire)) {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xcU;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xbU;
                                        }
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 9U;
                                        } else {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0xaU;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlTOPp->top__DOT__InstrD_wire)) {
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->top__DOT__InstrD_wire)) {
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 7U;
                                        } else {
                                            if ((0x40000000U 
                                                 & vlTOPp->top__DOT__InstrD_wire)) {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 8U;
                                            } else {
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                } else {
                    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                        vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                        vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                    } else {
                        if ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O))) {
                                if ((4U == (7U & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0xcU)))) {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 5U;
                                } else {
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                    vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                                vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                            }
                        } else {
                            vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire = 0U;
                            vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__Fetch_Stage__DOT__InstrF_wire 
        = ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
            [(0xfffU & ((IData)(3U) + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
            << 0x18U) | ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                          [(0xfffU & ((IData)(2U) + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                          << 0x10U) | ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                        [(0xfffU & 
                                          ((IData)(1U) 
                                           + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                        << 8U) | vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                       [(0xfffU & vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)])));
    if ((0U == vlTOPp->top__DOT__Fetch_Stage__DOT__InstrF_wire)) {
        vlTOPp->top__DOT__Fetch_Stage__DOT__InstrF_wire = 0x13U;
    }
    if (vlTOPp->top__DOT__RegWriteW_wire) {
        vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[vlTOPp->top__DOT__RdW_wire] 
            = vlTOPp->top__DOT__ResultW_wire;
        vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0U] = 0U;
    }
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
        = ((0U == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
            ? vlTOPp->top__DOT__RD1E_wire : ((1U == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
                                              ? vlTOPp->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlTOPp->top__DOT__ForwardAE_wire))
                                                  ? vlTOPp->top__DOT__ALUResultM_wire
                                                  : vlTOPp->top__DOT__RD1E_wire)));
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire 
        = ((0U == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
            ? vlTOPp->top__DOT__RD2E_wire : ((1U == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
                                              ? vlTOPp->top__DOT__ResultW_wire
                                              : ((2U 
                                                  == (IData)(vlTOPp->top__DOT__ForwardBE_wire))
                                                  ? vlTOPp->top__DOT__ALUResultM_wire
                                                  : vlTOPp->top__DOT__RD2E_wire)));
    vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire 
        = ((IData)(vlTOPp->top__DOT__ALUsrcE_wire) ? vlTOPp->top__DOT__ExtImmE_wire
            : vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire);
    if ((4U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire)))) {
                vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                    = ((0xfff00000U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                       ((0xff000U & vlTOPp->top__DOT__InstrD_wire) 
                        | ((0x800U & (vlTOPp->top__DOT__InstrD_wire 
                                      >> 9U)) | (0x7feU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 0x14U)))));
            }
        }
    } else {
        vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
            = ((2U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                ? ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->top__DOT__InstrD_wire 
                                   << 4U)) | ((0x7e0U 
                                               & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 7U)))))
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       ((0x7e0U & (vlTOPp->top__DOT__InstrD_wire 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 7U)))))
                : ((1U & (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire))
                    ? (0xfffff000U & vlTOPp->top__DOT__InstrD_wire)
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->top__DOT__InstrD_wire 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       (0x7ffU & (vlTOPp->top__DOT__InstrD_wire 
                                  >> 0x14U)))));
    }
    vlTOPp->top__DOT__BranchD_wire = ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire) 
                                      | (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire));
    vlTOPp->a0 = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [0xaU];
    vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire 
        = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlTOPp->top__DOT__InstrD_wire >> 0x14U))];
    vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire 
        = vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers
        [(0x1fU & (vlTOPp->top__DOT__InstrD_wire >> 0xfU))];
    vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire 
        = ((8U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
            ? ((4U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? 0U : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                             ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                ^ vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                             : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                                & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           | vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           ^ vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           >> (0x1fU & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))))
            : ((4U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                ? ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           << (0x1fU & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire))
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (0xfffff000U & vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))
                : ((2U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                    ? ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                    : ((1U & (IData)(vlTOPp->top__DOT__ALUctrlE_wire))
                        ? (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           != vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)
                        : (vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire 
                           + vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire)))));
    vlTOPp->top__DOT__HazardUnit__DOT__BranchStall 
        = ((((IData)(vlTOPp->top__DOT__BranchD_wire) 
             & (IData)(vlTOPp->top__DOT__RegWriteE_wire)) 
            & (((IData)(vlTOPp->top__DOT__RdE_wire) 
                == (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                             >> 0xfU))) | ((IData)(vlTOPp->top__DOT__RdE_wire) 
                                           == (0x1fU 
                                               & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 0x14U))))) 
           | (((IData)(vlTOPp->top__DOT__BranchD_wire) 
               & (IData)(vlTOPp->top__DOT__ResultSrcM_wire)) 
              & (((IData)(vlTOPp->top__DOT__RdM_wire) 
                  == (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                               >> 0xfU))) | ((IData)(vlTOPp->top__DOT__RdM_wire) 
                                             == (0x1fU 
                                                 & (vlTOPp->top__DOT__InstrD_wire 
                                                    >> 0x14U))))));
    vlTOPp->top__DOT__HazardUnit__DOT__lwstall = ((IData)(vlTOPp->top__DOT__RegWriteE_wire) 
                                                  & (IData)(vlTOPp->top__DOT__ResultSrcE_wire));
    vlTOPp->top__DOT__StallD_wire = ((IData)(vlTOPp->top__DOT__HazardUnit__DOT__lwstall) 
                                     | (IData)(vlTOPp->top__DOT__HazardUnit__DOT__BranchStall));
    vlTOPp->top__DOT__StallF_wire = ((IData)(vlTOPp->top__DOT__HazardUnit__DOT__lwstall) 
                                     | (IData)(vlTOPp->top__DOT__HazardUnit__DOT__BranchStall));
    vlTOPp->top__DOT__FlushE_wire = vlTOPp->top__DOT__HazardUnit__DOT__lwstall;
    vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX 
        = ((((0U != (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                              >> 0x14U))) & ((0x1fU 
                                              & (vlTOPp->top__DOT__InstrD_wire 
                                                 >> 0x14U)) 
                                             == (IData)(vlTOPp->top__DOT__RdM_wire))) 
            & (IData)(vlTOPp->top__DOT__RegWriteM_wire))
            ? vlTOPp->top__DOT__ALUResultM_wire : vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire);
    vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
        = ((((0U != (0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                              >> 0xfU))) & ((0x1fU 
                                             & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU)) 
                                            == (IData)(vlTOPp->top__DOT__RdM_wire))) 
            & (IData)(vlTOPp->top__DOT__RegWriteM_wire))
            ? vlTOPp->top__DOT__ALUResultM_wire : vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire);
    vlTOPp->top__DOT__PCSrcD_wire = ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire)
                                      ? (vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                         != vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                      : ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                          ? (vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                             == vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                          : ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                             | (IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire))));
    vlTOPp->top__DOT__Fetch_Stage__DOT__FlushD = ((~ (IData)(vlTOPp->top__DOT__BranchD_wire)) 
                                                  & (IData)(vlTOPp->top__DOT__PCSrcD_wire));
    vlTOPp->top__DOT__Fetch_Stage__DOT__PCNext_wire 
        = ((IData)(vlTOPp->trigger) ? ((IData)(vlTOPp->top__DOT__PCSrcD_wire)
                                        ? ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                            ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                            : ((IData)(vlTOPp->top__DOT__BranchD_wire)
                                                ? (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                                   + 
                                                   (vlTOPp->top__DOT__PCPlus4D_wire 
                                                    - (IData)(4U)))
                                                : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                                   + 
                                                   (vlTOPp->top__DOT__PCPlus4D_wire 
                                                    - (IData)(8U)))))
                                        : ((IData)(4U) 
                                           + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))
            : 0U);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__FlushE_wire 
        = vlTOPp->__VinpClk__TOP__top__DOT__FlushE_wire;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    trigger = VL_RAND_RESET_I(1);
    a0 = VL_RAND_RESET_I(32);
    top__DOT__InstrD_wire = VL_RAND_RESET_I(32);
    top__DOT__ExtImmE_wire = VL_RAND_RESET_I(32);
    top__DOT__ALUResultM_wire = VL_RAND_RESET_I(32);
    top__DOT__ALUResultW_wire = VL_RAND_RESET_I(32);
    top__DOT__ResultW_wire = VL_RAND_RESET_I(32);
    top__DOT__ReadDataW_wire = VL_RAND_RESET_I(32);
    top__DOT__PCPlus4D_wire = VL_RAND_RESET_I(32);
    top__DOT__WriteDataM_wire = VL_RAND_RESET_I(32);
    top__DOT__RD1E_wire = VL_RAND_RESET_I(32);
    top__DOT__RD2E_wire = VL_RAND_RESET_I(32);
    top__DOT__ALUctrlE_wire = VL_RAND_RESET_I(4);
    top__DOT__RegWriteE_wire = VL_RAND_RESET_I(1);
    top__DOT__RegWriteM_wire = VL_RAND_RESET_I(1);
    top__DOT__RegWriteW_wire = VL_RAND_RESET_I(1);
    top__DOT__StallF_wire = VL_RAND_RESET_I(1);
    top__DOT__StallD_wire = VL_RAND_RESET_I(1);
    top__DOT__ForwardAE_wire = VL_RAND_RESET_I(2);
    top__DOT__ForwardBE_wire = VL_RAND_RESET_I(2);
    top__DOT__MemWriteE_wire = VL_RAND_RESET_I(1);
    top__DOT__MemWriteM_wire = VL_RAND_RESET_I(1);
    top__DOT__PCSrcD_wire = VL_RAND_RESET_I(1);
    top__DOT__ALUsrcE_wire = VL_RAND_RESET_I(1);
    top__DOT__MemTypeE_wire = VL_RAND_RESET_I(1);
    top__DOT__MemTypeM_wire = VL_RAND_RESET_I(1);
    top__DOT__Rs1E_wire = VL_RAND_RESET_I(5);
    top__DOT__Rs2E_wire = VL_RAND_RESET_I(5);
    top__DOT__RdE_wire = VL_RAND_RESET_I(5);
    top__DOT__RdM_wire = VL_RAND_RESET_I(5);
    top__DOT__RdW_wire = VL_RAND_RESET_I(5);
    top__DOT__ResultSrcE_wire = VL_RAND_RESET_I(1);
    top__DOT__ResultSrcM_wire = VL_RAND_RESET_I(1);
    top__DOT__ResultSrcW_wire = VL_RAND_RESET_I(1);
    top__DOT__BranchD_wire = VL_RAND_RESET_I(1);
    top__DOT__FlushE_wire = VL_RAND_RESET_I(1);
    top__DOT__Fetch_Stage__DOT__PCF_wire = VL_RAND_RESET_I(32);
    top__DOT__Fetch_Stage__DOT__PCNext_wire = VL_RAND_RESET_I(32);
    top__DOT__Fetch_Stage__DOT__InstrF_wire = VL_RAND_RESET_I(32);
    top__DOT__Fetch_Stage__DOT__FlushD = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__Decode_Stage__DOT__RegWrite_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__ALUctrl_wire = VL_RAND_RESET_I(4);
    top__DOT__Decode_Stage__DOT__ALUSrc_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__ImmSrc_wire = VL_RAND_RESET_I(3);
    top__DOT__Decode_Stage__DOT__MemWrite_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__ResultSrc_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__JumpSrc_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__JRetSrc_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__BEQ_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__BNE_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__MemType_wire = VL_RAND_RESET_I(1);
    top__DOT__Decode_Stage__DOT__RD1D_wire = VL_RAND_RESET_I(32);
    top__DOT__Decode_Stage__DOT__RD2D_wire = VL_RAND_RESET_I(32);
    top__DOT__Decode_Stage__DOT__ExtImmD_wire = VL_RAND_RESET_I(32);
    top__DOT__Decode_Stage__DOT__ForwardAD_MUX = VL_RAND_RESET_I(32);
    top__DOT__Decode_Stage__DOT__ForwardBD_MUX = VL_RAND_RESET_I(32);
    top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__Execute_Stage__DOT__SrcAE_wire = VL_RAND_RESET_I(32);
    top__DOT__Execute_Stage__DOT__SrcBE_wire = VL_RAND_RESET_I(32);
    top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire = VL_RAND_RESET_I(32);
    top__DOT__Execute_Stage__DOT__Result_wire = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<131072; ++__Vi0) {
            top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__HazardUnit__DOT__BranchStall = VL_RAND_RESET_I(1);
    top__DOT__HazardUnit__DOT__lwstall = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top__DOT__FlushE_wire = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top__DOT__FlushE_wire = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
