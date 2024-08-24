// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_veerwolf_core__B0_Cbebc20.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])) 
                << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U])) 
                                           >> 4U)))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                     >> 7U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                     >> 5U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                     >> 6U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                     >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      << 2U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                >> 0x1eU)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]);
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                   >> 0x1cU) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                >> 4U))) ? (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])) 
                                                  >> 0x18U)))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                     >> 0x1cU));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                      << 0xaU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                  >> 0x16U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                >> 0x18U)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_q));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
        = ((((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                         & ((0x3fU >= (0x38U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                << 3U)))
                             ? ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                  >> 0xcU))) 
                                >> (0x38U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                             << 3U)))
                             : 0ULL))) | (0xffffULL 
                                          & ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                             & ((0x3fU 
                                                 >= 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 ? 
                                                ((((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                        >> 0xcU))) 
                                                 >> 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 : 0ULL)))) 
            | (0xffffffffULL & ((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                & ((0x3fU >= (0x20U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                 << 3U)))
                                    ? ((((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                              >> 0xcU))) 
                                       >> (0x20U & 
                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                            << 3U)))
                                    : 0ULL)))) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                           >> 0xcU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_awvalid) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_wvalid) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error 
        = (((0U != (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                           << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                                        >> 2U)))) & 
            (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
             >> 8U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error 
        = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
             >> 0x10U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                        >> 0xaU))))) 
           | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
               >> 0x18U) & (0U != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                         >> 0x12U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_arvalid) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
              >> 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_awvalid) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
              >> 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_wvalid) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
              >> 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_awvalid) 
             & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                >> 7U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_wvalid) 
                           & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 5U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_arvalid) 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                             >> 6U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_awvalid) 
             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                   >> 7U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_wvalid) 
                               & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                     >> 5U)))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_arvalid) 
                                                  & (~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
            >> 8U) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
            >> 4U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                    << 2U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                              >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
            >> 0x1cU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                       << 0xaU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                                   >> 0x16U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_rd_addr_count 
        = (7U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))
                      ? (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout 
                         >> 2U) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent)
                                    ? ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count))
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count)))
                  : (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                     >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__lsu_arvalid) 
              & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                 >> 6U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
            ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                         ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                  ? 0U : 9U))) : ((4U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 8U
                                                     : 
                                                    (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data))
                                                      ? 8U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data)
                                                       ? 5U
                                                       : 6U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 4U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0)
                                                      ? 2U
                                                      : 1U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x18U));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x10U));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data;
                }
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                        ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr)
                        : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data)));
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read;
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                              | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                  & (0x3cU == (0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U))))) 
                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                    >> 0xfU))) | ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                                   & (0x39U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x22U))))) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                     >> 0x14U))) 
                            & (~ (IData)((0U != (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                    >> 0xcU)))))) 
                           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                 >> 0x16U)));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                           & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0xeU)))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                 >> 0x11U));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                  >> 0x10U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                               >> 0x18U)));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error 
                        = (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                             >> 0x10U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                          >> 0x18U)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error)));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 7U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                        = ((0U != (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                         >> 8U))) ? 8U
                            : 6U);
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((~ ((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                         | (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | (5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                       | (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                      | (7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                     | (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
                                 | (0U != (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                 >> 8U)))));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                        = (((0U != (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                          >> 8U))) 
                            | ((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                >> 0x18U))) 
                               & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                     >> 0x11U)))) ? 8U
                            : 4U);
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid) 
                            | (0U != (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                            >> 8U)))) 
                           | ((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                               >> 0x18U))) 
                              & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                    >> 0x11U))));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                        = ((0x200U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg)
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)
                                ? 9U : (((2U == (0xffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abmem_addr_core_local)))
                                         ? 5U : 3U))
                            : ((0x80000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)
                                ? 1U : 0U));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                    >> 9U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                 | (~ ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                        >> 9U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                           & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)) 
                              | (5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate))));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                  >> 9U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
                } else {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                            ? 2U : 1U);
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                   >> 0x1fU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                                >> 9U)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
              & (0U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                               << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                            >> 4U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (1U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (2U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (3U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (4U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (5U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (6U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                             >> 4U))))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
               ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                   ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                ? 0U : 6U) : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                               ? 0U
                                               : ((1U 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                          >> 
                                                          (3U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                   ? 5U
                                                   : 6U))))
               : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                   ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                       ? ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                           ? 0U : (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw))) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                    & (4U != ((0xbU 
                                               >= (0xfU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                               ? (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))
                                               : 0U)))
                                    ? 4U : ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                                   | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw))) 
                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))) 
                                                       & (4U 
                                                          == 
                                                          ((0xbU 
                                                            >= 
                                                            (0xfU 
                                                             & ((IData)(3U) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)))))
                                                            ? 
                                                           (7U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                               >> 
                                                               (0xfU 
                                                                & ((IData)(3U) 
                                                                   * 
                                                                   (3U 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))
                                                            : 0U))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                             ? 5U : 6U)))
                       : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                           ? 0U : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                        >> 0x1cU)) 
                                    & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                 >> 0x18U))) 
                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                    ? 5U : 3U))) : 
                  ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                        ? 0U : 2U) : 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xfc7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xfc7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 1U) 
                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 2U)))) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 1U) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 1U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 1U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 2U)))))
                                                ? (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 2U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 1U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 1U))) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 1U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 2U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 2U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 2U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                         >> 0x1cU)) 
                                     & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x18U))) 
                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0xe3fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0xe3fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 2U) 
                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 4U)))) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 2U) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 2U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 2U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 4U)))))
                                                ? (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 4U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 2U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 2U))) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 2U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 4U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 4U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 4U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                         >> 0x1cU)) 
                                     & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x18U))) 
                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = (0x1ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
        = ((0x1ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)) 
           | (((0x800U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                ? ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? 0U : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                             ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                 ? 0U : 6U) : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                         >> 3U) 
                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                           >> 
                                                           (3U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                               >> 6U)))) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)))
                                                    ? 5U
                                                    : 6U))))
                : ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                    ? ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                        ? ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error)))))
                            ? 0U : ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                        >> 3U) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                   >> 3U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                            >> 3U))) 
                                     & (4U != ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (3U 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                        >> 6U)))))
                                                ? (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 6U))))))
                                                : 0U)))
                                     ? 4U : ((1U & 
                                              ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                 >> 3U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state)) 
                                               | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                       >> 3U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                                                          >> 3U))) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                         >> 3U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                           >> 6U)))) 
                                                   & (4U 
                                                      == 
                                                      ((0xbU 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(3U) 
                                                            * 
                                                            (3U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 6U)))))
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(3U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                   >> 6U))))))
                                                        : 0U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state))))
                                              ? 5U : 6U)))
                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                            ? 0U : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                         >> 0x1cU)) 
                                     & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x18U))) 
                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))
                                     ? 5U : 3U))) : 
                   ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                         ? 0U : 2U) : 2U))) << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & (((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                    & ((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)))) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                           >> 0x1cU) & (((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                   >> 0x18U))) 
                                         == (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                                        | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                            >> (3U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                                           & ((7U & 
                                               ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                   >> 0x18U))) 
                                              == (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                     >> 
                                                     (6U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                         << 1U)))))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | (((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                            >> 4U) & (0U == (7U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))) 
                          | ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                              >> 0x1cU) & (((0U == 
                                             (7U & 
                                              ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x18U)))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                               & ((7U 
                                                   & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                         >> 0x18U))) 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                                           | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                              & ((7U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                        >> 0x18U))) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                   >> 0x1cU))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                          & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                               & (0U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x18U))))) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                 & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                              >> 0x18U))) 
                                    == (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                & (0U == (7U & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                            ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                          >> 0x18U))
                            : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                          >> 0x18U)))
                        : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | ((((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                             >> 0x1cU)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)) : 
                       ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                         ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                       >> 0x18U)) : 
                        ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                          << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                    >> 0x18U))));
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                           & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 1U)));
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 1U) | (0xfffffffeU 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 1U)))) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x1eU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                    >> 0x1bU) & (((
                                                   (7U 
                                                    & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                          >> 0x18U))) 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 2U))) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      >> 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                          >> 2U))) 
                                                     & ((7U 
                                                         & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                               >> 0x18U))) 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                            >> 
                                                            (6U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 1U))))))) 
                                                 << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((0x1ffffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                           >> 3U) & 
                                          ((1U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                           << 1U))) 
                          | (0x1eU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                       >> 0x1bU) & 
                                      ((((1U == (7U 
                                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                       >> 0x18U)))) 
                                         << 1U) | (0xfffffffeU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      & (((7U 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                                 >> 0x18U))) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                              >> 2U))) 
                                                         << 1U)))) 
                                       | (0xfffffffeU 
                                          & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                    >> 1U)) 
                                                  << 1U)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                             & (((7U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                        >> 0x18U))) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 2U))) 
                                                << 1U))))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                   >> 0x1bU))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (1U 
                                                  == 
                                                  (7U 
                                                   & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                         >> 0x18U))))) 
                                              << 1U) 
                                             | (0xfffffffeU 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 1U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((7U 
                                                        & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                              >> 0x18U))) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 2U))) 
                                                      << 1U)))) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))) 
                                               << 1U)))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 1U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                            ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                          >> 0x18U))
                            : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                          >> 0x18U)))
                        : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 1U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 1U)) 
                                              << 1U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 1U)) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x1eU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 1U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x1bU))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 1U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 1U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)) : 
                       ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                         ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                       >> 0x18U)) : 
                        ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                          << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                    >> 0x18U))));
            }
        } else {
            if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 1U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 2U)));
    if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 2U) | (0xfffffffcU 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 4U)) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 2U)))) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x3cU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                    >> 0x1aU) & (((
                                                   (7U 
                                                    & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                          >> 0x18U))) 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 4U))) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      >> 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                          >> 4U))) 
                                                     & ((7U 
                                                         & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                               >> 0x18U))) 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                            >> 
                                                            (6U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 3U))))))) 
                                                 << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((0x3ffffffcU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                           >> 2U) & 
                                          ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                           << 2U))) 
                          | (0x3cU & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                       >> 0x1aU) & 
                                      ((((2U == (7U 
                                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                       >> 0x18U)))) 
                                         << 2U) | (0xfffffffcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      & (((7U 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                                 >> 0x18U))) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                              >> 4U))) 
                                                         << 2U)))) 
                                       | (0xfffffffcU 
                                          & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                             & (((7U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                        >> 0x18U))) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 4U))) 
                                                << 2U))))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                   >> 0x1aU))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (2U 
                                                  == 
                                                  (7U 
                                                   & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                         >> 0x18U))))) 
                                              << 2U) 
                                             | (0xfffffffcU 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 2U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((7U 
                                                        & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                              >> 0x18U))) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 4U))) 
                                                      << 2U)))) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))) 
                                               << 2U)))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 2U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                            ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                          >> 0x18U))
                            : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                          >> 0x18U)))
                        : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 2U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 2U)) 
                                              << 2U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 2U)) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x3cU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 2U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x1aU))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 2U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 2U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)) : 
                       ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                         ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                       >> 0x18U)) : 
                        ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                          << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                    >> 0x18U))));
            }
        } else {
            if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 2U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 3U)));
    if ((0x800U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 3U) | (0xfffffff8U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 6U)) 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 3U)))) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x78U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                    >> 0x19U) & (((
                                                   (7U 
                                                    & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                          >> 0x18U))) 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 6U))) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      >> 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                          >> 6U))) 
                                                     & ((7U 
                                                         & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                               >> 0x18U))) 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                            >> 
                                                            (6U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                                >> 5U))))))) 
                                                 << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x400U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((0x7ffffff8U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                           >> 1U) & 
                                          ((3U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                           << 3U))) 
                          | (0x78U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                       >> 0x19U) & 
                                      ((((3U == (7U 
                                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                       >> 0x18U)))) 
                                         << 3U) | (0xfffffff8U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                      & (((7U 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                                 >> 0x18U))) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                              >> 6U))) 
                                                         << 3U)))) 
                                       | (0xfffffff8U 
                                          & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                    >> 3U)) 
                                                  << 3U)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                             & (((7U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                        >> 0x18U))) 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                     >> 6U))) 
                                                << 3U))))))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                   >> 0x19U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (3U 
                                                  == 
                                                  (7U 
                                                   & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                       << 8U) 
                                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                         >> 0x18U))))) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 3U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((7U 
                                                        & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                              >> 0x18U))) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 6U))) 
                                                      << 3U)))) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (3U 
                                                   == 
                                                   (7U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]))) 
                                               << 3U)))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 3U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                            ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                          >> 0x18U))
                            : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                          >> 0x18U)))
                        : ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 3U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 3U)) 
                                              << 3U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 3U)) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x78U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                       << 3U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                  >> 0x19U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 3U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 3U))));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                            << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                      >> 0x18U)) : 
                       ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                         ? ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                                       >> 0x18U)) : 
                        ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
                          << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                    >> 0x18U))));
            }
        } else {
            if ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 3U));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tagff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken)
            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 
        = (((7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                            ? (((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | (0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U)))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))
                                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r))) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 6U) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 2U) | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final) 
                               | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 8U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 9U)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_resume_req))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__dout;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__dout;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__dout;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
                             >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
                             >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_errorff__dout))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 2U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 6U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U];
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualtagff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_samedwff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_nomergeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualhiff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_sideeffectff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_unsignff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_writeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_szff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_addrff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_byteenff__dout));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U];
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualtagff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_samedwff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_nomergeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualhiff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_sideeffectff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_unsignff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_writeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_szff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_addrff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_byteenff__dout));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 4U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U];
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 8U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualtagff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_samedwff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_nomergeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualhiff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_sideeffectff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_unsignff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_writeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_szff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_addrff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_byteenff__dout));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 6U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 6U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U];
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 0xcU));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualtagff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_samedwff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_nomergeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualhiff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_sideeffectff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_unsignff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_writeff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_szff__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_addrff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_byteenff__dout));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 9U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
              & (((~ ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                      | (6U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                      & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                    & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 3U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))))) 
                   | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 6U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))))) 
                   | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 9U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))))) 
                   | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffff0U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 3U)) & 
                             ((((~ ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                    | (6U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffffe0U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 4U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 3U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffffc0U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 5U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 6U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffff80U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 6U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 9U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffff00U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 6U)) & 
                             ((((~ ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                    | (6U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffe00U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 7U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 3U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))))) 
                                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffc00U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 8U)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffff800U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 9U)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffff000U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 9U)) 
                             & ((((~ ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                      | (6U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffe000U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xdU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xaU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 3U))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xdU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffc000U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xeU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xbU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffff8000U & ((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xfU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xcU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))))) 
                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
            & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 1U) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 1U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 2U) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 3U) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 3U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           | ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 2U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 3U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & (~ ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 3U))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 1U))) << 1U)) & (
                                                   (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 6U))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 2U))) << 2U)) & (
                                                   (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 3U))) << 3U)) & (
                                                   (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                           << 4U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 1U))) << 5U)) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 2U))) << 6U)) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x80U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 3U))) << 7U)) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                            << 8U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                       << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 1U))) << 9U)) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x400U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 2U))) << 0xaU)) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x800U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 3U))) << 0xbU)) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x1000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                             << 0xcU)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x2000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 1U))) << 0xdU)) 
                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xdU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x4000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 2U))) << 0xeU)) 
                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x8000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 3U))) << 0xfU)) 
                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = (0x8000U | ((0x4000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                  >> 1U)) | ((0x2000U 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                 << 7U)) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                                 << 0xcU) 
                                                | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type) 
                                                       << 0xaU) 
                                                      | ((0x200U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 8U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                << 8U)) 
                                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                                                << 7U) 
                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                                   << 6U) 
                                                                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1) 
                                                                         << 5U) 
                                                                        | (0xfffffe0U 
                                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                              >> 4U))) 
                                                                       | (0xffffffe0U 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                                          & (~ 
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                              >> 2U))) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & ((0x1ffffff0U 
                                                                             & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U)) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U)) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                                                << 4U))) 
                                                                            | (0xfffffff0U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U))))) 
                                                                        | ((8U 
                                                                            & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                >> 1U))) 
                                                                                << 3U) 
                                                                               | (0xfffffff8U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U))))) 
                                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                >> 2U)) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                >> 7U))))))))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r) 
            << 0x11U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken) 
                          << 0x10U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_idle_any) 
                                        << 0xfU) | 
                                       (((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                          << 0xdU) 
                                         | ((0x7ffff000U 
                                             & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                  << 0xcU) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 1U)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                   << 0xcU))) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                << 0xbU) 
                                               | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                    & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns))))) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                                                      << 9U) 
                                                     | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                                                            & (~ 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                >> 0xdU))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                                     << 1U)) 
                                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                           << 2U) 
                                                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r) 
                                                                             << 1U)))))))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x100U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x200U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x400U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x800U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x1000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x2000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x4000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x8000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken 
        = (1U & (((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any))) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                  >> 6U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (1U & ((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                     & ((((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                          | ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                        | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (2U & (((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 3U))) | 
                           ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 3U))) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 1U)))) | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (1U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (4U & (((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) | 
                           ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 6U))) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 2U)))) | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (2U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 2U) | (0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (8U & (((((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 9U))) | 
                           ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 3U)))) | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (3U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 3U) | (0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x10U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 4U) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 3U)) & (((((1U == (7U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                          | ((2U == 
                                              (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x20U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 5U) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 4U)) & (((((1U == (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 3U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 5U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x40U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 6U) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 5U)) & (((((1U == (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 6U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 6U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x80U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 7U) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 6U)) & (((((1U == (7U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 9U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 7U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x100U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 8U) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 6U)) & (((((1U == (7U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                           | ((2U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 8U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x200U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 9U) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 7U)) & (((((1U == (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 3U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 1U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x400U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 0xaU) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 8U)) & (((((1U == (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 6U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 2U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 0xaU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x800U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 0xbU) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 9U)) & (((((1U == (7U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 9U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 3U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (3U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 0xbU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x1000U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 9U)) & (
                                                   ((((1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                      | ((2U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                                     | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                                                         & (3U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                                        & (0U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                                    | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                                       & (0U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                                   << 0xcU)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x2000U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xdU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xaU)) & 
                          (((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 3U))) 
                              | ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 1U)))) | 
                             (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xdU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x4000U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xeU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xbU)) & 
                          (((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 6U))) 
                              | ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 2U)))) | 
                             (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xeU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x8000U & (((((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xfU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xcU)) & 
                          (((((1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 9U))) 
                              | ((2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 3U)))) | 
                             (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xfU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((~ (IData)((0U != (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))))) 
               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 4U))))) 
                & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 3U)))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 1U))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 8U))))) 
                & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 6U)))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 2U))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 0xcU))))) 
                & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 9U)))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 3U))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 1U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 2U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 3U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 4U)) & (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 6U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 7U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 8U)) & (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 9U)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xbU)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xcU)) & (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xdU)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xeU)) & (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpvhalt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                   ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                       >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                 >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                                     >> 6U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value) 
                                                     >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Vfuncout 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 
        = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Vfuncout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 4U) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 1U))) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 3U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 1U))) << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 8U) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 2U))) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 6U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 2U))) << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 0xcU) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 3U))) & (2U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 9U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 3U))) << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & (~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & (~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                        << 1U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                        << 1U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                        << 2U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                        << 2U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 0xcU)))))) 
                        << 3U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 0xcU)))))) 
                        << 3U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                           << 4U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x10U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                           << 4U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                 >> 4U))))) 
                           << 5U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x20U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                 >> 4U))))) 
                           << 5U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 8U)))))) 
                           << 6U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 8U)))))) 
                           << 6U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x80U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 0xcU)))))) 
                           << 7U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x80U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 0xcU)))))) 
                           << 7U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 2U)) 
                                       << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 2U)) 
                                       << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 4U)))))) 
                            << 9U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 2U)) 
                                       << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x200U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 4U)))))) 
                            << 9U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 2U)) 
                                       << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x400U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                  >> 8U))))) 
                            << 0xaU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 2U)) 
                                         << 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x400U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                  >> 8U))))) 
                            << 0xaU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 2U)) 
                                         << 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x800U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 0xcU)))))) 
                            << 0xbU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 2U)) 
                                         << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x800U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 0xcU)))))) 
                            << 0xbU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 2U)) 
                                         << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x1000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                             << 0xcU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x1000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                             << 0xcU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x2000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                             << 0xdU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xdU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x2000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                             << 0xdU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xdU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x4000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                             << 0xeU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x4000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                             << 0xeU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x8000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                   >> 0xcU))))) 
                             << 0xfU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x8000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                   >> 0xcU))))) 
                             << 0xfU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xfU))));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 6U));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                            >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                             >> 0xaU))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)
                ? ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r)) 
                   << 0x20U) : (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r) 
                   << 4U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                 << 5U))) ? 0U : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U))))) 
               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                  (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                  >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                               << 5U))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                     >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                     >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                               << 1U))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? ((QData)((IData)((((0U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                << 5U)))
                                      ? 0U : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U))))) 
                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                       (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U)))))) 
                   << 0x20U) : (QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U))))) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U)))))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? (0xf0U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                         << 2U))) << 4U))
                : (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                           >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                       << 2U)))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid))) 
            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
           & ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                              >> 2U)) != (0x3fffffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U))))
                                               ? 0U
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (((IData)(2U) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                         << 5U)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                        << 5U)))))) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                (3U 
                                                 & (((IData)(2U) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                     << 5U))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                       >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                 >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                                     >> 6U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value) 
                                                     >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Vfuncout 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 
        = (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Vfuncout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (1U & ((0U != (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (2U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 1U)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (4U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 8U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                    << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (8U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 0xcU))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                    << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))))))) 
           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 4U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 8U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 1U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 5U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 9U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 2U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 6U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 3U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 7U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (1U & ((0U != (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (2U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 1U)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (4U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 8U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                    << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (8U & (((0U != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 0xcU))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                    << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))))))) 
           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 4U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 8U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 1U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 5U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 9U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 2U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 6U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 3U)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 7U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in 
        = ((((((((0x1fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
                                 >> 3U)) == (0x1fffffffU 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                >> 3U))) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                    ? (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 9U) & (0U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r))) 
                        | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                            >> 0xaU) & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r))) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 0xbU)) : (((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in)) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in) 
                                           & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in))) 
                                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in) 
                                           >> 1U) & 
                                          (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in)))))))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in))) 
            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xbU))) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend) 
                                   & (~ ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                          >> 0x1cU) 
                                         & ((7U & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                      >> 0x18U))) 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend)))) 
              | (((((2U == ((0xbU >= (0xfU & ((IData)(3U) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                             ? (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                      >> (0xfU & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                             : 0U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend)))) 
                 & ((((~ ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                           >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
                      | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                        >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en)))) 
             & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                   ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 5U) : (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                        >> 7U)) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      >> 5U)))
                   : (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid))) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
            & (~ (((((((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                       & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
                      & (7U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                                          >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r)
                ? ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r)) 
                   << 0x20U) : (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r)
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r) 
                   << 4U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U)))))
                ? ((QData)((IData)((((0U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U)))
                                      ? 0U : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                      << 5U))))) 
                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                       (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                            << 5U)))))) 
                   << 0x20U) : (QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                       << 5U))))) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                       << 5U)))))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U)))))
                ? (0xf0U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                         << 2U))) << 4U))
                : (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                           >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                       << 2U)))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en 
        = ((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                   != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
                  & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                & (2U == ((0xbU >= (0xfU & ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                           ? (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> (0xfU & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                           : 0U))) & (2U == ((0xbU 
                                              >= (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                              ? (7U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                              : 0U))) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                    >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                   >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
            & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                     >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                    >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                      >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                  >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo
                                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 8U) : 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                         >> 8U))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                            >> 0x10U))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 0x18U)
                                         : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                            >> 0x18U))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi
                                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 8U) : 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                         >> 8U))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                            >> 0x10U))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 0x18U)
                                         : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                            >> 0x18U))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
    }
    if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken)
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
                      ? 0U : (((0U < (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                               & (7U > (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                               ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))
                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)));
    if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend_in 
        = (((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in)))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend)) 
             & (~ ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                    >> 0x1cU) & ((7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
                                                   >> 0x18U))) 
                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag))))) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | (IData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 1U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 8U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 8U)))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 2U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x10U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x10U)))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 3U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x18U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x18U)))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 4U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 5U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 6U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x30U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x30U)))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 7U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x38U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x38U)))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 5U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 6U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 7U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m 
        = ((0x3fU >= (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               << 3U))) ? ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo))) 
                                           >> (0x18U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                  << 3U)))
            : 0ULL);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__din_new 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst)) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m)
            : (IData)(((0x3fU >= (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                           << 3U)))
                        ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
                           >> (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                        << 3U))) : 0ULL)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m 
        = (((((0xffU & ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 5U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 0xbU))))) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)) 
              | (0xffffU & ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 5U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 0xaU))))) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m))) 
             | ((- (IData)((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                      >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 0xbU))))) 
                & ((0xffffff00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)))) 
            | ((- (IData)((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                     >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 0xaU))))) 
               & ((0xffff0000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                               >> 0xfU)))) 
                                  << 0x10U)) | (0xffffU 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)))) 
           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 9U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 0U;
    if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                       >> 9U)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x13U)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = (0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m) 
                      << 1U));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x1dU)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = (0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m) 
                      << 2U));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x27U)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m) 
                      << 3U));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                           >> 0xaU))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                             >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
            | (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)))))) 
           & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m))
               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m
               : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d 
        = (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d)))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
             | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                                  >> 1U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m)) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                                 >> 2U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__alu_result_x)) 
           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                                >> 3U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_data_d 
        = (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d)))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
             | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                                  >> 1U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m)) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                                 >> 2U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__alu_result_x)) 
           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                                >> 3U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffffffc00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | (IData)((IData)((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw)))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffffffdffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffffffc00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x200ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffffeffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffffff9fULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 5U));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffffffe0ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                          & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                       >> 4U)) == (0x1fU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam)))) 
                         & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                    >> 8U))))) ? (0xfffffffdffULL 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffffffc00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | (IData)((IData)((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam))))));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 5U))))) & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                     >> 9U)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x100ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffffdffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffff003ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0xaU))))) 
              << 0xaU));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffff7ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffff003ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x80000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffbffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfffffe7fffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0xfU));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffff83ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0xaU));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0xaU))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x12U)))))
                ? (0xfffff7ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffff003ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0xaU))))) 
                      << 0xaU)));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0xfU))))) & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                       >> 0x13U)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x40000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffff7ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0xffc00fffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x14U))))) 
              << 0x14U));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0xffdfffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xffc00fffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x20000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xffefffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfff9ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0x19U));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfffe0fffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x14U))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x1cU)))))
                ? (0xffdfffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xffc00fffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x14U))))) 
                      << 0x14U)));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x19U))))) & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x1dU)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x10000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xffdfffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
        = ((0x3fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x1eU))))) 
              << 0x1eU));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
        = (0x3fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x8000000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xbfffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xe7ffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0x23U));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xf83fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0x1eU));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x1eU))))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x26U)))))
                ? (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0x3fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x1eU))))) 
                      << 0x1eU)));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x23U))))) & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x27U)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x4000000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d 
        = (1U & ((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0x13U) & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                           | vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                                          | vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout) 
                                         >> 0x15U)) 
                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                             >> 5U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                        >> 4U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                   >> 6U)) 
                       | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xbU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall)) 
                    | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                         >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_idle)))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                  | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                          >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb) 
                                     == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU)))) 
                     | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                            >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb) 
                                       == (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U)))))) 
                 | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                     >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                               >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
        = (IData)(((0x3fU >= (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                       << 3U))) ? ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
                                                   << 
                                                   (0x18U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                                       << 3U)))
                    : 0ULL));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
        = (IData)((((0x3fU >= (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                        << 3U))) ? 
                    ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
                     << (0x18U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                  << 3U))) : 0ULL) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m 
        = (((0xffff0000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 9U)))) 
                             << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
            | ((0xff00U & (((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 0xaU) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 9U))))) 
                            << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m)) 
               | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m))) 
           & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
        = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d) 
             | (0xfffffffeU & ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0xaU))))) 
                               & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                           >> 1U)) 
                                  << 1U)))) | ((- (IData)(
                                                          ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d)))) 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)) 
           | ((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d)))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d 
        = ((((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d)))) 
             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d) 
            | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d))))) 
               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d)) 
           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__0__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in) 
                                       ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout))))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in)
                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__1__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0xaU)) 
                                       ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0xaU)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__2__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x14U)) 
                                       ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x14U)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__3__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x1eU)) 
                                       ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x1eU)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
                    & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
                        >> 9U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
                                  >> 8U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                    >> 5U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U))))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 3U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU))))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 9U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U))))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                              >> 0xfU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U))))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                              >> 0x15U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_a_reverse_ff 
        = ((0x80000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                           << 0x1fU)) | ((0x40000000U 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x11U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x13U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x14U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x15U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x17U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x19U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1aU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1cU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1dU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1eU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1fU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend 
        = ((0x7fffffff00000000ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend) 
           | (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend 
        = ((0xffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend) 
           | ((QData)((IData)((0x7fffffffU & (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                      >> 0xdU))))) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                                >> 0x1fU))))) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                        >> 0xfU))))) 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__eq 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
           == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
        = ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                          >> 7U))) ? (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__div_p 
        = ((0x1ffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
                            << 2U) & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                      >> 3U))) | ((2U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                        >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
              >> 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d 
        = (0xfffU & ((((- (IData)((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                              >> 5U)) 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                             >> 7U)) 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                            >> 9U))))) 
                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                          >> 0x14U)) | ((- (IData)(
                                                   (1U 
                                                    & (((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                          >> 5U)) 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                           >> 7U)) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                          >> 8U))))) 
                                        & ((0xfe0U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                 >> 7U))))) 
                     & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((0x3c01U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                       >> 0x12U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                           >> 0xfU))))) 
           & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d) 
                  | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                             >> 4U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m))) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                        >> 6U))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_full_any 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_d) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d))
            ? (3U <= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any))
            : (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U]) 
                 == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 1U)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                        >> 6U)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7fffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                              >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                         >> 1U))) << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                            >> 0x1aU)))) << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                        >> 0xcU)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x1ffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                             >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                         << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                   << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                            >> 0x14U)))) << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
            + vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm) 
           + (IData)((QData)((IData)((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                    >> 7U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = (0x10U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3fbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3f7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (0x80U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
                       << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x37ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3bffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3dffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3effU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz)) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any 
        = (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_d)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d))
              ? (4U <= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))
              : (3U <= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_full_any)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | (0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_path_d 
        = (0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal)
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                              >> 1U) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__target_mispredict 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                    >> 0x1fU)) & ((0x7fffffffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d)) 
                                  != (0x7fffffffU & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt 
        = (1U & (((~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                              >> 5U))) & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                           >> 0x1fU) 
                                          ^ ((((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                   >> 0x1fU)) 
                                               & (~ 
                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm 
                                                   >> 0x1fU))) 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                                 >> 0x1fU)) 
                                             | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm) 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout 
                                                    >> 0x1fU)))))) 
                 | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                             >> 5U)) & (~ (IData)((1ULL 
                                                   & ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d)) 
                                                        + (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm))) 
                                                       + (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                                >> 7U)))))) 
                                                      >> 0x20U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
             & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d) 
                    | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                        >> 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)))) 
                   | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                       >> 9U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_full_any) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)))))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m)) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                       >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
               & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                    >> 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                              >> 6U)) | (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 2U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 7U)) 
                                         & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 5U))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m)) 
           | (0xfffffffeU & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 1U) & ((0xfffffeU 
                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              >> 8U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 5U))) 
                                         | (0x1fffffeU 
                                            & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 7U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 6U)) 
                                               & ((~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                    >> 0xbU)) 
                                                  << 1U))))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m)) 
           | (0xfffffffcU & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 2U) & ((0x7fffcU 
                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                              >> 0xdU) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 4U))) 
                                         | (0xffffcU 
                                            & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 5U)) 
                                               & ((~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                    >> 0x11U)) 
                                                  << 2U))))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m)) 
           | (0xfffffff8U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 3U) & ((0x3ff8U & 
                                          ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                            >> 0x12U) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                              >> 3U))) 
                                         | (0x7ff8U 
                                            & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 4U)) 
                                               & ((~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                    >> 0x17U)) 
                                                  << 3U))))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__result 
        = ((((((((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d))) 
                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d) 
                  | (((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                >> 0x12U))))) 
                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d) 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)) 
                 | ((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                              >> 0x11U))))) 
                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                       | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))) 
                | ((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                             >> 0x10U))))) 
                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d 
                      ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d))) 
               | ((- (IData)((1U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                              >> 0xfU)) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                >> 0xeU))) 
                                    | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                               >> 0xdU)))))) 
                  & ((IData)((0x7fffffffffffffffULL 
                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend 
                                 >> (0x1fU & ((((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                       >> 0xfU))))) 
                                                & (- vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                         >> 0xeU))))) 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                        >> 0xdU))))) 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)))))) 
                     & ((IData)(0xffffffffU) << (0x1fU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                           >> 0xfU))))) 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d)))))) 
              | ((- (IData)((1U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                             >> 8U)) 
                                    | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                               >> 7U))) 
                                   & (~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                 >> 6U))))))) 
                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout)) 
             | ((- (IData)((1U & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                             >> 4U)) 
                                    | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                               >> 0x22U))) 
                                   | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                              >> 0x21U))) 
                                  | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                             >> 0x1fU)))))) 
                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout 
                   << 1U))) | ((- (IData)((1U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                         >> 1U))))) 
                               & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap))
                                   ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d
                                   : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d))) 
           | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                       >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken 
        = (1U & ((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                              >> 0xcU)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__eq)) 
                    | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                >> 0xbU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__eq)))) 
                   | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                               >> 0xaU)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt))) 
                  | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                              >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt)))) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1f0ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d) 
               & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                 >> 6U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__newhist 
        = ((2U & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                             >> 0x33U)) & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                   >> 0x32U))) 
                   | ((~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                  >> 0x32U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                  << 1U)) | (1U & (((~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                                   | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                               >> 0x33U)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__cond_mispredict 
        = (1U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                           >> 3U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                 | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                             >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                  >> 1U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_illegal_inst);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din 
        = ((0x80U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                        << 7U) & ((0x7ffff80U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 5U)) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                     << 7U))) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r)) 
                                                 << 7U)) 
                     | (0xffffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                          << 7U))))) 
           | ((0x40U & ((0x7fffffc0U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
                                         << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                   >> 1U))) 
                        | (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                             << 6U))))) 
              | ((0x10U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                             << 4U) | (0xfffffff0U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) 
                           & ((~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r))) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                      >> 4U) & (0U 
                                                == 
                                                (0x7fffffffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                                    >> 1U)))))) 
                              << 4U))) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                  >> 1U)) 
                                           | ((2U & 
                                               ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                                     >> 1U)) 
                                                   << 1U))) 
                                              | (1U 
                                                 & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d) 
                                                     & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                            >> 0xdU) 
                                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d))) 
                                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                                            & (0x7c2U 
                                                               == 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0x14U))))) 
                                                        | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal)))) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout)))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 7U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 1U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift) 
           & (3U != (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift) 
           & (3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_d_c 
        = ((0x1fffffcU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                           >> 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                     << 2U))) | ((0xfffffeU 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                                        << 1U))) 
                                                 | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                     >> 0x11U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1ffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
               << 0x10U) | ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 0x22U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0xfU) | ((0x6000U & 
                                          (((((((3U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                    >> 1U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndbecc)))
                                             ? (3U 
                                                & (((((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren)))) 
                                                      >> 2U) 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                        >> 0xaU)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                                       >> 1U)))) 
                                                        >> 2U) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                          >> 0x10U))) 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                                      >> 2U)))) 
                                                       >> 2U) 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                         >> 4U))))
                                             : (0xfU 
                                                & ((((- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren)))) 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                        >> 4U)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                                      >> 1U)))) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                          >> 0xaU))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                                     >> 2U)))) 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                                                         >> 0x10U))))) 
                                           << 0xdU)) 
                                         | (((0xfffff000U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                 << 0xaU)) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i) 
                                                << 0xcU)) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                               << 0xcU))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d 
        = ((0xfffff3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d) 
           | (0xcU & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                        << 0x1aU) | (0x3fffffcU & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 6U))) 
                      & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d))) 
                         << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d 
        = ((0xfffffcU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d) 
           | ((0xffffeU & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                             >> 0xcU) & ((0U != (0x1fU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))) 
                                         << 1U)) & 
                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                            << 1U))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
              >> 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_ren_qual_d 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x13U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p = 0U;
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = (0x80U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = (0x200U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = (0x2000U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                     >> 7U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3f7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x80U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                           >> 2U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3fbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x40U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                           >> 2U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x37ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x800U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3bffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3dffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x200U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x2fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | ((2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                   >> 0xaU))) << 0xcU));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3ffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (4U & ((((0x1fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         >> 7U)) | 
                          (0x3fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         >> 6U))) & 
                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                          << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                     << 1U))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3ff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (8U & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                          >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                                    << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                               << 2U))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = (0x3ffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p 
            = ((0x3fdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)) 
               | (0x20U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                           >> 0x18U)));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
        = ((0x7fffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                    >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__cond_mispredict) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__target_mispredict))))) 
              << 0x37U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
        = ((0xbfffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken)) 
              << 0x36U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
        = ((0xf7ffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__newhist) 
                                     >> 1U)))) << 0x33U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
        = ((0xfbffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__newhist)))) 
              << 0x32U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d 
        = ((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                        >> 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__cond_mispredict)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__target_mispredict)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                  >> 9U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final 
        = ((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                        >> 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__cond_mispredict)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__target_mispredict)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                  >> 9U))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout));
    if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_data_en) 
         & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 0xcU)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_t_in
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__trap_r_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en) 
            << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0cinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en) 
            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xcU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_x
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en) 
            & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                 >> 1U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                           >> 0x16U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout)))
            ? ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                       >> 1U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                 >> 3U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__alu_result_x)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0xinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xcU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_x);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_rddata_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d))
            ? (((QData)((IData)((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d)))
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en)
            ? ((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                              >> 2U))) ? ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata))))
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0_shift_2B 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val 
        = (3U & ((1U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                           >> 1U))) | ((- (IData)((1U 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B)))))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_d_c;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d 
        = ((0x1ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d) 
           | ((0xff800000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                               << 0x12U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                            << 0x17U))) 
              | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                  << 0x16U) | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                << 0x15U) | (((0x400000U 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d)
                                               ? (0xfffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 0x14U))
                                               : 0U) 
                                             << 9U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0rdff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d)
                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r)
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((0x200U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((0x200U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((0x100U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((2U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if ((1U & ((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                          >> 0x11U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                       >> 0xcU)) | 
                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                         >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                    >> 5U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                               >> 0x1fU)) 
                     | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                        >> 0x18U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      >> 0x16U)) | 
                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                    >> 0x12U)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xfU;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_ren_qual_d) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_ren_qual_d)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_ren_qual_d) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((0x1000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((0x800U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((8U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((0x400U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((0x10000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((0x800000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_m_clken 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d 
        = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p) 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p) 
                                 >> 0xdU))))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in 
        = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                >> 4U)))))));
}
