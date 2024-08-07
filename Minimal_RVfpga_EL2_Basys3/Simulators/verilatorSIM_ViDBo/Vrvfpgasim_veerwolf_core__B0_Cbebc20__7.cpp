// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_veerwolf_core__B0_Cbebc20.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_multiclk__TOP__rvfpgasim__veerwolf__40(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_multiclk__TOP__rvfpgasim__veerwolf__40\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                       | ((((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                             >> 0x18U))) 
                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                               >> 0x13U)) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din
                       : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__41(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__41\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfre 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__spi__DOT__wfre;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr 
                    = (0xffU & (0x10U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr = 0x10U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__espr 
        = ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__sper) 
                    << 2U)) | (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid = 1U;
                        if ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid = 1U;
                        if ((0x40U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata 
                                = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_dat)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__wb_rdt_low)));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 7U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr 
                            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr));
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0xfU;
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 1U;
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 1U;
                        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 5U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__wb_rdt_low 
                                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_dat;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 4U;
                        }
                    } else {
                        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack))) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we = 0U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 6U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs))) {
                        if ((0x80U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w 
                                = (0U == (0xfU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                   << 0x16U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                     >> 0xaU))));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr 
                                = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 2U;
                            if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x12U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xeU)));
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        >> 0x12U));
                            } else {
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel 
                                    = (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                << 0x16U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                  >> 0xaU)));
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                    = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                        >> 0x12U));
                            }
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__arbiter = 1U;
                        if (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                              >> 0x12U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__arbiter))) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr 
                                = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
                                   | (0x3ffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                                                  << 7U) 
                                                 | (0x7eU 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
                                                       >> 0x19U)))));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready = 1U;
                            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__arbiter = 0U;
                            if ((0x80U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U])) {
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w 
                                    = (0U == (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                  << 0x16U) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                    >> 0xaU))));
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr 
                                    = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w));
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 2U;
                                if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w) {
                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xeU)));
                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                              >> 0x12U));
                                } else {
                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel 
                                        = (0xfU & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                      >> 0xaU)));
                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat 
                                        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                              >> 0x12U));
                                }
                            } else {
                                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 1U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U])) {
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr 
                                    = (0x3fffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
                                                   << 0x1eU) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
                                                     >> 2U)));
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0xfU;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready = 1U;
                                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
            ? 0U : (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                          >> 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3eU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (0x2000U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3dU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1400U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3bU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1200U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x37U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1040U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x2fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0x1000U == (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                          << 2U))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0U == (0xfffff000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                     << 2U))) << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xffe00000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready) 
                              << 0x17U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready) 
                                            << 0x16U) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready) 
                                              << 0x15U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid) 
                             << 0xaU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid) 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U]) 
           | (0xfffffffeU & (2U | (0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata) 
                                                  << 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata) 
                  >> 0x1cU)) | (0xfffffffeU & ((0xeU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xfffffffeU & ((0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rid) 
                                                << 4U)) 
                                | (0xeU & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata 
                                                    >> 0x20U)) 
                                           >> 0x1cU))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 5U;
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 4U;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc) 
              << (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
            >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfre 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_spi_flash_ack)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__42(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__42\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*191:0*/ __Vtemp1452[6];
    // Body
    __Vtemp1452[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_rdt;
    __Vtemp1452[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat;
    __Vtemp1452[2U] = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                        : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                            : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)));
    __Vtemp1452[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt;
    __Vtemp1452[4U] = (IData)((((QData)((IData)(((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                  ? (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                             >> 0x20U))
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))));
    __Vtemp1452[5U] = (IData)(((((QData)((IData)(((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))) 
                               >> 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_dat 
        = ((0xbfU >= (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                               << 5U))) ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                 << 5U)))
                                             ? 0U : 
                                            (__Vtemp1452[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))) 
                                           | (__Vtemp1452[
                                              (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | (0xe0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                             << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
        = ((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                           >> 3U)) | (0xe0000000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
        = (0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                          >> 3U));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__43(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__43\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
            = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_in
                : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_in
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk)));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints;
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
                        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
                        = (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig);
            }
        } else {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat 
                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_in));
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err 
        = (((5U >= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err) 
                << 1U) >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack 
        = ((5U >= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack) 
                << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack) 
                           << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_spi_flash_ack) 
                                      << 3U) | ((0xfffffffcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb) 
                                                       << 2U))) 
                                                | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_ack) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_uart_ack)))))) 
              >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__44(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__44\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (0xfffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                         >> 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfff00000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                              << 0x18U) | (0xf00000U 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                              >> 8U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        << 8U)) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                                                   >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                      << 0x10U)) | 
                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                         >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
}
