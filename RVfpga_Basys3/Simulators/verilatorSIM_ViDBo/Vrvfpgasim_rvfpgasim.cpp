// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en = 0U;
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_rd_en = 0U;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_rd_en = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_next 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                 >> 0x1dU)));
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_next = 1U;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_reg;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_next 
                = (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                       >> 7U)));
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_next 
                = (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                            >> 0x14U));
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_reg;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_next 
                = ((3U > (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                                 << 0x17U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                              >> 9U))))
                    ? (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                              << 0x17U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                           >> 9U)))
                    : 3U);
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg)))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_next 
                = (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                             << 3U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                       >> 0x1dU)));
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_reg;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg)))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_next 
                = ((3U > (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                 << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                             >> 0x12U))))
                    ? (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                              << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                          >> 0x12U)))
                    : 3U);
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg)))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_next 
                = (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                          << 0x10U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                       >> 0x10U)));
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_next = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_next = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                if ((0U >= (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_next 
                = (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                             << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                          >> 0xcU)));
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg) 
                                - (IData)(1U)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_next 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                 >> 3U)));
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                if ((0U >= (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg))) {
                    if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
                if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                            >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_next = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_next = 0U;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                if ((0U >= (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_next = 1U;
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_next = 0U;
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_next = 0U;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_next 
                = (1U & ((~ ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                              >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg)))) 
                         | (0U < (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg))));
        }
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_next 
            = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
               & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                  >> 0x1eU));
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_next 
                    = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_reg;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg) 
                                - (IData)(1U)));
            }
        }
    } else {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_next 
                = (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                             << 0xbU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                         >> 0x15U)));
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_reg;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next = 0U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                if ((0U >= (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg))) {
                    if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next = 1U;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
                if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                            >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_next = 0U;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_next 
            = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                   >> 0xfU)) ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_next 
                = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                       >> 4U)) ? ((0U < (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg))
                                   ? 1U : ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                   >> 3U) 
                                                  | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))
                                            ? 0U : 2U))
                    : 1U);
        } else {
            if ((2U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
                vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_next 
                    = ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                               >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))
                        ? 0U : 2U);
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                if ((0U >= (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg))) {
                    if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_next 
                            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
                if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                            >> 3U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg))))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_next 
                        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg;
    if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                >> 0xfU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_next 
                = (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                               << 0xcU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                           >> 0x14U)));
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg))) {
            if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                    >> 4U))) {
                if ((0U != (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_reg))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_reg))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_next 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
        if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg) {
            if ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                        >> 0x1dU) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg))))) {
                if ((0U != (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_reg))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_next 
                        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_reg))));
                }
            }
        }
    } else {
        if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                >> 0x1eU))) {
            vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_next 
                = (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                               << 3U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                         >> 0x1dU)));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden 
            = ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                      << 1U)) | (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren 
            = ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                      << 1U)) | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 1U))));
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = 0U;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v1;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v2;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v3;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v4;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v4;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v4;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v5;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v5;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v5;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v6;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v6;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v6;
    CData/*5:0*/ __Vdlyvlsb__ram__DOT__mem__v7;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v7;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v7;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v0;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v1;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v2;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v3;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v4;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v5;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v6;
    SData/*12:0*/ __Vdlyvdim0__ram__DOT__mem__v7;
    // Body
    __Vdlyvset__ram__DOT__mem__v0 = 0U;
    __Vdlyvset__ram__DOT__mem__v1 = 0U;
    __Vdlyvset__ram__DOT__mem__v2 = 0U;
    __Vdlyvset__ram__DOT__mem__v3 = 0U;
    __Vdlyvset__ram__DOT__mem__v4 = 0U;
    __Vdlyvset__ram__DOT__mem__v5 = 0U;
    __Vdlyvset__ram__DOT__mem__v6 = 0U;
    __Vdlyvset__ram__DOT__mem__v7 = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__i = 8U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg = 0U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg = 0U;
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 7U))) {
        __Vdlyvval__ram__DOT__mem__v0 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                   << 0x11U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     >> 0xfU)));
        __Vdlyvset__ram__DOT__mem__v0 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v0 = 0U;
        __Vdlyvdim0__ram__DOT__mem__v0 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 8U))) {
        __Vdlyvval__ram__DOT__mem__v1 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                   << 9U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     >> 0x17U)));
        __Vdlyvset__ram__DOT__mem__v1 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v1 = 8U;
        __Vdlyvdim0__ram__DOT__mem__v1 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 9U))) {
        __Vdlyvval__ram__DOT__mem__v2 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     >> 0x1fU)));
        __Vdlyvset__ram__DOT__mem__v2 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v2 = 0x10U;
        __Vdlyvdim0__ram__DOT__mem__v2 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 0xaU))) {
        __Vdlyvval__ram__DOT__mem__v3 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                   << 0x19U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                     >> 7U)));
        __Vdlyvset__ram__DOT__mem__v3 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v3 = 0x18U;
        __Vdlyvdim0__ram__DOT__mem__v3 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 0xbU))) {
        __Vdlyvval__ram__DOT__mem__v4 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                   << 0x11U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                     >> 0xfU)));
        __Vdlyvset__ram__DOT__mem__v4 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v4 = 0x20U;
        __Vdlyvdim0__ram__DOT__mem__v4 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 0xcU))) {
        __Vdlyvval__ram__DOT__mem__v5 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                   << 9U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                     >> 0x17U)));
        __Vdlyvset__ram__DOT__mem__v5 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v5 = 0x28U;
        __Vdlyvdim0__ram__DOT__mem__v5 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 0xdU))) {
        __Vdlyvval__ram__DOT__mem__v6 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                     >> 0x1fU)));
        __Vdlyvset__ram__DOT__mem__v6 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v6 = 0x30U;
        __Vdlyvdim0__ram__DOT__mem__v6 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_wr_en) 
         & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
            >> 0xeU))) {
        __Vdlyvval__ram__DOT__mem__v7 = (0xffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                                   << 0x19U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                     >> 7U)));
        __Vdlyvset__ram__DOT__mem__v7 = 1U;
        __Vdlyvlsb__ram__DOT__mem__v7 = 0x38U;
        __Vdlyvdim0__ram__DOT__mem__v7 = (0x1fffU & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                           >> 3U));
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg = 0U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg = 0U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg = 0U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg = 0U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_pipe_reg)) 
               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                  >> 0x1dU)))) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_pipe_reg 
            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg;
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_pipe_reg 
            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_reg;
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_pipe_reg 
            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_reg;
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_pipe_reg 
            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg;
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_pipe_reg = 0U;
    }
    vlSymsp->TOP__rvfpgasim.o_led = (0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_data);
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_next;
    if (vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem_rd_en) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_reg 
            = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
            [(0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg) 
                         >> 3U))];
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_next;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_next;
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg = 0U;
    }
    if (__Vdlyvset__ram__DOT__mem__v0) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v0))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v0]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v0)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v0)));
    }
    if (__Vdlyvset__ram__DOT__mem__v1) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v1))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v1]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v1)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v1)));
    }
    if (__Vdlyvset__ram__DOT__mem__v2) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v2))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v2]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v2)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v2)));
    }
    if (__Vdlyvset__ram__DOT__mem__v3) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v3))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v3]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v3)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v3)));
    }
    if (__Vdlyvset__ram__DOT__mem__v4) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v4))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v4]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v4)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v4)));
    }
    if (__Vdlyvset__ram__DOT__mem__v5) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v5))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v5]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v5)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v5)));
    }
    if (__Vdlyvset__ram__DOT__mem__v6) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v6))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v6]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v6)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v6)));
    }
    if (__Vdlyvset__ram__DOT__mem__v7) {
        vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__ram__DOT__mem__v7))) 
                & vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                [__Vdlyvdim0__ram__DOT__mem__v7]) | 
               ((QData)((IData)(__Vdlyvval__ram__DOT__mem__v7)) 
                << (IData)(__Vdlyvlsb__ram__DOT__mem__v7)));
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg 
        = vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_next;
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset 
        = ((IData)(vlTOPp->i_jtag_trst_n) & (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                        >> 0x10U))));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset = 
        ((IData)(vlTOPp->i_jtag_trst_n) & (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                      >> 0x11U))));
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = ((IData)(vlTOPp->i_jtag_trst_n) ? (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                 >> 1U))
                                              ? vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                                              : (0x1fffffffffcULL 
                                                 & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))
            : 0ULL);
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.o_jtag_tdo = (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->i_jtag_trst_n) {
        if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else {
            if ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                    = ((0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                        ? 0x1fU : (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | (0x10U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | ((0x11U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
              << 1U));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                               >> 2U))));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en = (1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                           >> 2U)))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    if (vlTOPp->i_jtag_trst_n) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
            = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
            = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = 0ULL;
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__11\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vtableidx1 = (((IData)(vlTOPp->i_jtag_tms) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = vlSymsp->TOP__rvfpgasim.__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate
        [vlSymsp->TOP__rvfpgasim.__Vtableidx1];
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlTOPp->i_jtag_tdi))));
    } else {
        if ((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = (0x1fffffffffeULL & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                        = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)) 
                           << 2U);
                } else {
                    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                    }
                }
            }
        } else {
            if ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                    = (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                        << 4U) | (QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 1U))))));
            } else {
                if ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__12\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn 
        = (1U & (~ (IData)(vlTOPp->rst)));
}
