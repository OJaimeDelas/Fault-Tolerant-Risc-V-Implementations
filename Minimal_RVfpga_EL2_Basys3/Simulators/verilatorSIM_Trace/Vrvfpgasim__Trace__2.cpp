// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvfpgasim__Syms.h"


void Vrvfpgasim::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vrvfpgasim__Syms* __restrict vlSymsp = static_cast<Vrvfpgasim__Syms*>(userp);
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7818);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*191:0*/ __Vtemp382[6];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+0,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                               << 2U))),8);
            tracep->chgBit(oldp+1,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (1U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+2,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (2U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+3,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (3U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+4,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (4U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+5,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (5U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+6,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (6U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+7,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (7U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+8,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (8U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+9,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                          & (9U == 
                                             (0xfU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+10,(1U));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err));
            tracep->chgSData(oldp+12,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                << 2U))),16);
            tracep->chgBit(oldp+13,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                     & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+14,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                     & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+15,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                     & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+16,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                     & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgCData(oldp+17,((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),3);
            tracep->chgSData(oldp+18,((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),10);
            tracep->chgQData(oldp+19,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)))),64);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we),8);
            tracep->chgSData(oldp+22,((0xff8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 << 2U))),12);
            tracep->chgSData(oldp+23,((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 >> 1U))),9);
            tracep->chgCData(oldp+24,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+26,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+27,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+28,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                           >> 1U))));
            tracep->chgBit(oldp+29,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                           >> 1U))));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                           >> 2U))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                           >> 2U))));
            tracep->chgCData(oldp+32,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+34,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+35,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                           >> 1U))));
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                           >> 1U))));
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                           >> 2U))));
            tracep->chgBit(oldp+39,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                           >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+40,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err));
            tracep->chgIData(oldp+42,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat),32);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+44,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                           >> 1U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                           >> 2U))));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgCData(oldp+49,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+50,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                           >> 1U))));
            tracep->chgBit(oldp+52,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                           >> 2U))));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        }
        tracep->chgBit(oldp+55,(vlTOPp->clk));
        tracep->chgBit(oldp+56,(vlTOPp->rst));
        tracep->chgBit(oldp+57,(vlTOPp->i_jtag_tck));
        tracep->chgBit(oldp+58,(vlTOPp->i_jtag_tms));
        tracep->chgBit(oldp+59,(vlTOPp->i_jtag_tdi));
        tracep->chgBit(oldp+60,(vlTOPp->i_jtag_trst_n));
        tracep->chgBit(oldp+61,(vlTOPp->o_jtag_tdo));
        tracep->chgBit(oldp+62,(vlTOPp->o_uart_tx));
        tracep->chgSData(oldp+63,(vlTOPp->o_gpio),16);
        tracep->chgBit(oldp+64,(vlSymsp->TOP__rvfpgasim.o_jtag_tdo));
        tracep->chgBit(oldp+65,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                        >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out)))));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset));
        tracep->chgCData(oldp+68,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
                                           >> (0xcU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q 
                                                  >> 0xeU))))),4);
        tracep->chgIData(oldp+69,(((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                                    : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                                        : ((3U == (7U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)))),32);
        __Vtemp382[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_rdt;
        __Vtemp382[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat;
        __Vtemp382[2U] = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                           ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                           : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                               : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                   : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)));
        __Vtemp382[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt;
        __Vtemp382[4U] = (IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                     ? (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))));
        __Vtemp382[5U] = (IData)(((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                      ? (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                 >> 0x20U))
                                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))) 
                                  >> 0x20U));
        tracep->chgWData(oldp+70,(__Vtemp382),192);
        tracep->chgCData(oldp+76,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack) 
                                    << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_spi_flash_ack) 
                                                  << 3U) 
                                                 | ((0xfffffffcU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_ack) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_uart_ack))))))),6);
        tracep->chgBit(oldp+77,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                    >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack)))));
        tracep->chgCData(oldp+78,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
                                           >> (0xcU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q 
                                                  >> 0xeU))))),4);
        tracep->chgCData(oldp+79,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem
                                  [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp]),8);
        tracep->chgBit(oldp+80,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb))));
        tracep->chgBit(oldp+81,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)))));
        tracep->chgCData(oldp+82,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem
                                  [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
        tracep->chgBit(oldp+83,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__tcnt)))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfwe))));
        tracep->chgBit(oldp+84,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wffull))));
        tracep->chgBit(oldp+85,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                   >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err)))));
        tracep->chgIData(oldp+86,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr),32);
        tracep->chgIData(oldp+87,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc),32);
        tracep->chgIData(oldp+88,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc),32);
        tracep->chgBit(oldp+89,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                              >> 4U))) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                          >> 7U)))));
        tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                    >> 4U))));
        tracep->chgBit(oldp+91,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__eclk_gate) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                       >> 1U)))));
        tracep->chgBit(oldp+92,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_match)) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                    >> 5U))));
        tracep->chgCData(oldp+93,((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                             ? ((2U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__scratch)
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                                  : 
                                                 (0xc0U 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier))
                                                  : 
                                                 ((0x80U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                                   >> 3U))))))),8);
        tracep->chgCData(oldp+94,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                  [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req));
        tracep->chgBit(oldp+96,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                          >> 1U)))));
        tracep->chgIData(oldp+97,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg),32);
        tracep->chgIData(oldp+99,(((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
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
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
        tracep->chgBit(oldp+100,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0));
        tracep->chgIData(oldp+102,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
        tracep->chgBit(oldp+103,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0));
        tracep->chgCData(oldp+105,((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                        >> 0xcU) & 
                                       (~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                       >> 8U)))))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                     & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                           & ((0x16U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                              | (0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))) 
                                          | (0x18U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                         | (4U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U))))) 
                                        | (5U == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U))))))
                                     ? 1U : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                 >> 8U)))))) 
                                              & ((((~ 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                          >> 0x18U))) 
                                                     | (2U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                            >> 0x18U))))) 
                                                   | (((3U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                            >> 0x14U))) 
                                                       | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                          >> 0x16U)) 
                                                      & (2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                             >> 0x18U))))) 
                                                  | ((2U 
                                                      != 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                          >> 0x14U))) 
                                                     & ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                             >> 0x18U))) 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                           >> 0x11U)))) 
                                                 | ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                         >> 0x18U))) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                       >> 0x12U))))
                                              ? 2U : 
                                             (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                                 & (((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                                          >> 
                                                          (3U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                              << 1U))))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns)))) 
                                                | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (0U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                           >> 0x18U)))) 
                                                   & (((1U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                            >> 0xcU))) 
                                                       & (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                              >> 5U)))) 
                                                      | (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                             >> 0xdU)))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                 >> 8U))))))
                                               ? 3U
                                               : ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (2U 
                                                       != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                     >> 8U))))))
                                                   ? 4U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                      >> 8U))))))
                                                    ? 5U
                                                    : 
                                                   (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                       & (2U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                              >> 0x18U)))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                        >> 8U)))))) 
                                                     & (((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                              >> 0x14U))) 
                                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg) 
                                                        | ((2U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                                >> 0x14U))) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))
                                                     ? 7U
                                                     : 
                                                    (7U 
                                                     & ((((0x16U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                       >> 0x22U)))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))
                                                         ? 
                                                        ((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                     >> 0xaU))) 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                            >> 8U))
                                                         : 
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                         >> 8U)))))))))),3);
        tracep->chgBit(oldp+106,(((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                     >> 0xcU) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                >> 8U)))))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                  & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                        & ((0x16U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))) 
                                       | (0x18U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                      | (4U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                     | (5U == (0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U))))))));
        tracep->chgBit(oldp+107,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                    & (((0U != (3U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                                   >> 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 1U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns)))) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                       & (0U == (0xffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U)))) 
                                      & (((1U == (0xfU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                     >> 0xcU))) 
                                          & (0U != 
                                             (0x7fU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                 >> 5U)))) 
                                         | (0U != (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                      >> 0xdU)))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))));
        tracep->chgBit(oldp+108,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                   & (2U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))));
        tracep->chgBit(oldp+109,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))));
        tracep->chgBit(oldp+110,((((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))));
        tracep->chgBit(oldp+111,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & (0x18U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                        >> 0xcU)))));
        tracep->chgBit(oldp+112,((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xcU)) | (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))));
        tracep->chgBit(oldp+113,(((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xcU))));
        tracep->chgBit(oldp+114,((((((0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail));
        tracep->chgBit(oldp+116,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq));
        tracep->chgBit(oldp+118,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                      & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                            >> 0xcU))) 
                                     & (((4U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)) 
                                        | ((5U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg) 
                                              >> 1U)))))));
        tracep->chgBit(oldp+119,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                  | ((((0U == (0xffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                  >> 0x18U))) 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                          >> 0x13U)) 
                                      & (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                       >> 8U)))))))));
        tracep->chgIData(oldp+120,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din),32);
        tracep->chgBit(oldp+121,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 0x18U))) 
                                  | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                       >> 0x15U) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                     & ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                          & (0x39U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                         | (0x3cU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U))))) 
                                        | (0x3dU == 
                                           (0x7fU & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))))));
        tracep->chgBit(oldp+122,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x18U)))))));
        tracep->chgCData(oldp+123,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din),3);
        tracep->chgBit(oldp+124,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+125,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
        tracep->chgBit(oldp+126,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+127,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))),32);
        tracep->chgBit(oldp+128,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))));
        tracep->chgIData(oldp+129,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))),32);
        tracep->chgBit(oldp+130,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & (0x39U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                     >> 0x14U))));
        tracep->chgBit(oldp+131,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                   & (0x3cU == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                     >> 0xfU))));
        tracep->chgBit(oldp+132,((1U & (((((((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 0xdU)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 6U)) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req)) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 8U)))));
        tracep->chgBit(oldp+133,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
                                         | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 8U)))));
        tracep->chgBit(oldp+134,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x18U))) 
                                         | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                              >> 0x15U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                            & ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                 & (0x39U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))) 
                                                | (0x3cU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U))))) 
                                               | (0x3dU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))))
                                         ? (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x18U))))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)))));
        tracep->chgBit(oldp+135,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
        tracep->chgBit(oldp+136,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x16U))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
        tracep->chgCData(oldp+137,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                     ? ((0x10U & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x15U)) 
                                                  << 4U)) 
                                        | ((8U & ((~ (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x14U))) 
                                                  << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x11U)))))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout))),5);
        tracep->chgCData(oldp+138,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
        tracep->chgIData(oldp+139,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)),32);
        tracep->chgIData(oldp+140,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                      >> 0x20U))))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg)),32);
        tracep->chgIData(oldp+141,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                              + (((
                                                   (1U 
                                                    & (- (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                      >> 0x11U)))))) 
                                                   | (2U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                        >> 0x11U))))))) 
                                                  | (4U 
                                                     & (- (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                       >> 0x11U))))))) 
                                                 | (8U 
                                                    & (- (IData)(
                                                                 (3U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                      >> 0x11U))))))))))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg)),32);
        tracep->chgCData(oldp+142,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                     ? ((0xcU & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x20U)) 
                                                 << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x1eU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 3U)))))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))),4);
        tracep->chgBit(oldp+143,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
        tracep->chgBit(oldp+144,(((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0xcU)) | 
                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))
                                   ? ((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))));
        tracep->chgBit(oldp+145,(((((((0x10U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))));
        tracep->chgBit(oldp+146,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
        tracep->chgCData(oldp+147,((3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                            & (0x18U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U))))) 
                                           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                 >> 0xcU)))
                                           ? (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 2U))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)))),2);
        tracep->chgSData(oldp+148,((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                                ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                                                   >> 0x10U)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))),16);
        tracep->chgSData(oldp+149,((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                                | ((((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                          >> 0x18U))) 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                        >> 0x13U)) 
                                                    & (8U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                                     >> 8U)))))))
                                                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)))),16);
        tracep->chgIData(oldp+150,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))
                                     ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))) 
                                         | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                                ? (
                                                   ((0xffU 
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
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)),32);
        tracep->chgIData(oldp+151,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)),32);
        tracep->chgBit(oldp+152,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done))));
        tracep->chgBit(oldp+153,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done))));
        tracep->chgCData(oldp+154,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))),4);
        tracep->chgIData(oldp+155,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
                                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)),32);
        tracep->chgCData(oldp+156,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))),4);
        tracep->chgIData(oldp+157,((((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                       & (0x6033U | 
                                          (0xf8000U 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                              << 0xfU)))) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                         & (0x6033U 
                                            | (0xf80U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                  << 7U))))) 
                                     | ((- (IData)(
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                    & (1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                        & (0x2073U 
                                           | (0xfff00000U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                 << 0x14U))))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                       & (0x1073U | 
                                          (0xfff00000U 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                              << 0x14U)))))),32);
        tracep->chgBit(oldp+158,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+159,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+160,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                        >> 1U)))));
        tracep->chgIData(oldp+161,((0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                    ? 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__nmi_vec 
                                                    >> 1U)
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                                     ? 
                                                    ((0x7ffffffeU 
                                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                      << 1U))
                                                     : 
                                                    (0x7ffffffeU 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec))))),31);
        tracep->chgSData(oldp+162,((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                >> 0x25U)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                     << 0xbU) | ((((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                            >> 0x36U)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d) 
                                                     << 9U) 
                                                    | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                      >> 2U))) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal))) 
                                                        | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                        >> 3U))) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken)) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal)))) 
                                                       << 8U))))),12);
        tracep->chgSData(oldp+163,(((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en))
                                     ? (((((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                    >> 0x25U)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                         << 0xbU) | 
                                        ((((IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                    >> 0x36U)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                          << 0xaU) 
                                         | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d) 
                                             << 9U) 
                                            | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                              >> 2U))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal))) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                                >> 3U))) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal)))) 
                                               << 8U))))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout))),12);
        tracep->chgCData(oldp+164,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                  >> 4U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+165,((3U & ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+166,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                  >> 0x1dU) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+167,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                                  >> 0x19U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+168,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                  >> 0x16U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+169,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                  >> 0x12U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgBit(oldp+170,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                     >> 0x17U))));
        tracep->chgBit(oldp+171,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x12U)))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                     >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                << 0xeU) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  >> 0x12U)))))));
        tracep->chgBit(oldp+172,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                     >> 0x16U))));
        tracep->chgBit(oldp+173,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 8U)))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_readies) 
                                     >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  >> 8U)))))));
        tracep->chgBit(oldp+174,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                     >> 0xfU))));
        tracep->chgBit(oldp+175,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                >> 0xaU))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                     >> (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                               >> 0xaU))))));
        tracep->chgBit(oldp+176,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                     >> 0xeU))));
        tracep->chgBit(oldp+177,(((2U >= (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_readies) 
                                     >> (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))));
    }
}

void Vrvfpgasim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vrvfpgasim__Syms* __restrict vlSymsp = static_cast<Vrvfpgasim__Syms*>(userp);
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
        vlTOPp->__Vm_traceActivity[0xdU] = 0U;
        vlTOPp->__Vm_traceActivity[0xeU] = 0U;
        vlTOPp->__Vm_traceActivity[0xfU] = 0U;
        vlTOPp->__Vm_traceActivity[0x10U] = 0U;
        vlTOPp->__Vm_traceActivity[0x11U] = 0U;
        vlTOPp->__Vm_traceActivity[0x12U] = 0U;
    }
}
