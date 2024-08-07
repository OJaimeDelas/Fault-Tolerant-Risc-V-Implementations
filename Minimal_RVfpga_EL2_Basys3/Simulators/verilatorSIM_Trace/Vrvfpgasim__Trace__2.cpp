// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvfpgasim__Syms.h"


void Vrvfpgasim::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vrvfpgasim__Syms* __restrict vlSymsp = static_cast<Vrvfpgasim__Syms*>(userp);
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7679);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*191:0*/ __Vtemp379[6];
    WData/*191:0*/ __Vtemp380[6];
    WData/*191:0*/ __Vtemp384[6];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+0,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 6U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 5U)) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 6U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 5U)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 1U)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h));
            tracep->chgBit(oldp+4,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1));
            tracep->chgBit(oldp+6,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 0xaU) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 1U)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal));
            tracep->chgQData(oldp+10,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d),56);
            tracep->chgBit(oldp+12,((1U & (((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                     >> 0xfU)) 
                                            | (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                       >> 0xeU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                      >> 0xdU))))));
            tracep->chgBit(oldp+13,((1U & (((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                     >> 8U)) 
                                            | (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                       >> 7U))) 
                                           & (~ (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                         >> 6U)))))));
            tracep->chgIData(oldp+14,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout),31);
            tracep->chgBit(oldp+15,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal));
            tracep->chgBit(oldp+16,((1U & ((((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                      >> 4U)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                        >> 0x22U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                       >> 0x21U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                      >> 0x1fU))))));
            tracep->chgBit(oldp+17,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal) 
                                              | (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                         >> 0xcU))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                        >> 0xbU))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                       >> 0xaU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                      >> 9U))))));
            tracep->chgIData(oldp+18,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__brimm_in_ext),32);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout));
            tracep->chgBit(oldp+20,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
                                           >> 0xbU))));
            tracep->chgCData(oldp+21,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en),2);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en),2);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in));
            tracep->chgIData(oldp+24,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in),32);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in),3);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_byteen_in),8);
            tracep->chgBit(oldp+27,((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en))));
            tracep->chgBit(oldp+28,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en))));
            tracep->chgBit(oldp+29,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en))));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                           >> 1U))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en) 
                                           >> 1U))));
            tracep->chgWData(oldp+32,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+35,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
            tracep->chgWData(oldp+38,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+41,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
            tracep->chgWData(oldp+44,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+47,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+50,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r));
            tracep->chgIData(oldp+57,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r),31);
            tracep->chgBit(oldp+58,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_div_cancel));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_div_wren));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty));
            tracep->chgCData(oldp+61,((3U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))))),2);
            tracep->chgBit(oldp+62,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r));
            tracep->chgBit(oldp+65,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r));
            tracep->chgIData(oldp+66,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in),24);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r));
            tracep->chgBit(oldp+73,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r));
            tracep->chgCData(oldp+96,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns),6);
            tracep->chgIData(oldp+97,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns),32);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns),32);
            tracep->chgBit(oldp+99,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r));
            tracep->chgIData(oldp+100,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r),31);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r));
            tracep->chgCData(oldp+104,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns),7);
            tracep->chgBit(oldp+105,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r));
            tracep->chgBit(oldp+106,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r));
            tracep->chgBit(oldp+111,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
            tracep->chgBit(oldp+125,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi));
            tracep->chgBit(oldp+126,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r));
            tracep->chgBit(oldp+131,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r));
            tracep->chgCData(oldp+132,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r),5);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
            tracep->chgCData(oldp+148,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r),4);
            tracep->chgBit(oldp+149,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
            tracep->chgBit(oldp+155,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
            tracep->chgBit(oldp+161,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0));
            tracep->chgBit(oldp+162,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0));
            tracep->chgCData(oldp+169,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual),4);
            tracep->chgBit(oldp+170,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod));
            tracep->chgBit(oldp+171,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r));
            tracep->chgIData(oldp+175,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns),32);
            tracep->chgIData(oldp+176,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns),32);
            tracep->chgCData(oldp+177,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns),3);
            tracep->chgCData(oldp+178,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns),4);
            tracep->chgBit(oldp+179,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok));
            tracep->chgBit(oldp+185,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)))));
            tracep->chgBit(oldp+186,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)))));
            tracep->chgIData(oldp+187,((0xffffffU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                                         >> 8U))),24);
            tracep->chgCData(oldp+188,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns)),8);
            tracep->chgIData(oldp+189,((0xffffffU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                                         >> 8U))),24);
            tracep->chgCData(oldp+190,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns)),8);
            tracep->chgCData(oldp+191,(((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
                                        | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))))),3);
            tracep->chgCData(oldp+192,(((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
                                        | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))))),4);
            tracep->chgSData(oldp+193,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din),10);
            tracep->chgSData(oldp+194,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din),12);
            tracep->chgIData(oldp+195,((0xffffffU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                                         >> 8U))),24);
            tracep->chgCData(oldp+196,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns)),8);
            tracep->chgBit(oldp+197,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))));
            tracep->chgIData(oldp+198,((0xffffffU & 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                                         >> 8U))),24);
            tracep->chgCData(oldp+199,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns)),8);
            tracep->chgBit(oldp+200,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r))));
            tracep->chgBit(oldp+201,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r))));
            tracep->chgBit(oldp+202,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns));
            tracep->chgBit(oldp+203,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r))));
            tracep->chgBit(oldp+204,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted))));
            tracep->chgBit(oldp+205,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))));
            tracep->chgSData(oldp+206,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din),14);
            tracep->chgBit(oldp+207,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))));
            tracep->chgCData(oldp+208,((0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns))),4);
            tracep->chgBit(oldp+209,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
            tracep->chgBit(oldp+210,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r));
            tracep->chgBit(oldp+212,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m));
            tracep->chgSData(oldp+213,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in),14);
            tracep->chgBit(oldp+214,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in))));
            tracep->chgSData(oldp+215,((0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in) 
                                                   >> 1U))),13);
            tracep->chgBit(oldp+216,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo));
            tracep->chgCData(oldp+217,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo),4);
            tracep->chgCData(oldp+218,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo),4);
            tracep->chgSData(oldp+219,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo),16);
            tracep->chgBit(oldp+220,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo));
            tracep->chgCData(oldp+221,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo),4);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
            tracep->chgBit(oldp+224,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+225,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+226,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+227,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+229,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+230,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren));
            tracep->chgBit(oldp+231,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0));
            tracep->chgBit(oldp+234,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgIData(oldp+235,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din),32);
            tracep->chgBit(oldp+236,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren));
            tracep->chgSData(oldp+237,((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                                                   >> 0x10U))),16);
            tracep->chgSData(oldp+238,((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din)),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgCData(oldp+239,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits),7);
            tracep->chgBit(oldp+240,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_irq));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                            >> 6U))));
            tracep->chgCData(oldp+242,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spsr),8);
            tracep->chgBit(oldp+243,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wffull));
            tracep->chgBit(oldp+244,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfempty));
            tracep->chgCData(oldp+245,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp),2);
            tracep->chgCData(oldp+246,((3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp)))),2);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl),2);
            tracep->chgIData(oldp+248,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints),32);
            tracep->chgBit(oldp+249,(((0U != vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl))));
            tracep->chgBit(oldp+250,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                               >> 3U)))));
            tracep->chgSData(oldp+251,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl),9);
            tracep->chgIData(oldp+252,(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req),31);
            tracep->chgIData(oldp+253,((vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                        << 1U)),32);
            tracep->chgBit(oldp+254,((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req)));
            tracep->chgBit(oldp+255,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 1U))));
            tracep->chgBit(oldp+256,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 2U))));
            tracep->chgBit(oldp+257,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 3U))));
            tracep->chgBit(oldp+258,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 4U))));
            tracep->chgBit(oldp+259,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 5U))));
            tracep->chgBit(oldp+260,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 6U))));
            tracep->chgBit(oldp+261,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 7U))));
            tracep->chgBit(oldp+262,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 8U))));
            tracep->chgBit(oldp+263,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 9U))));
            tracep->chgBit(oldp+264,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xaU))));
            tracep->chgBit(oldp+265,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xbU))));
            tracep->chgBit(oldp+266,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xcU))));
            tracep->chgBit(oldp+267,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xdU))));
            tracep->chgBit(oldp+268,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xeU))));
            tracep->chgBit(oldp+269,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xfU))));
            tracep->chgBit(oldp+270,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x10U))));
            tracep->chgBit(oldp+271,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x11U))));
            tracep->chgBit(oldp+272,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x12U))));
            tracep->chgBit(oldp+273,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x13U))));
            tracep->chgBit(oldp+274,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x14U))));
            tracep->chgBit(oldp+275,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x15U))));
            tracep->chgBit(oldp+276,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x16U))));
            tracep->chgBit(oldp+277,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x17U))));
            tracep->chgBit(oldp+278,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x18U))));
            tracep->chgBit(oldp+279,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x19U))));
            tracep->chgBit(oldp+280,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+281,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+282,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+283,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+284,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1eU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+285,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid));
            tracep->chgQData(oldp+289,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata),64);
            tracep->chgBit(oldp+291,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid));
            tracep->chgIData(oldp+292,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                        << 2U)),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat),32);
            tracep->chgCData(oldp+294,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel),4);
            tracep->chgBit(oldp+295,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we));
            tracep->chgBit(oldp+296,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc));
            tracep->chgBit(oldp+297,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb));
            tracep->chgBit(oldp+298,(((5U >= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                      & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_ptc_rty) 
                                           << 2U) | 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_rty) 
                                           << 1U)) 
                                         >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))));
            tracep->chgBit(oldp+299,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 5U))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 3U))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 4U))));
            tracep->chgBit(oldp+302,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o))));
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 1U))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                            >> 2U))));
            tracep->chgBit(oldp+305,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb))));
            tracep->chgSData(oldp+306,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr),14);
            __Vtemp379[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp379[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp379[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp379[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp379[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp379[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            tracep->chgWData(oldp+307,(__Vtemp379),192);
            __Vtemp380[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp380[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp380[2U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp380[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp380[4U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp380[5U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            tracep->chgWData(oldp+313,(__Vtemp380),192);
            tracep->chgIData(oldp+319,((0xffffffU & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
                                          << 0x14U) 
                                         | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
                                             << 0x10U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
                                                << 0xcU) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
                                                   << 8U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
                                                      << 4U) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel)))))))),24);
            tracep->chgCData(oldp+320,((0x3fU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we))))),6);
            tracep->chgCData(oldp+321,(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o),6);
            tracep->chgCData(oldp+322,((0x3fU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb))))),6);
            tracep->chgCData(oldp+323,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel),3);
            tracep->chgCData(oldp+324,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match),6);
            tracep->chgBit(oldp+325,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w));
            tracep->chgBit(oldp+326,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__arbiter));
            tracep->chgIData(oldp+327,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__wb_rdt_low),32);
            tracep->chgCData(oldp+328,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs),4);
            tracep->chgCData(oldp+329,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 << 2U))),6);
            tracep->chgCData(oldp+330,(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i),3);
            tracep->chgCData(oldp+331,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)),8);
            tracep->chgCData(oldp+332,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr),8);
            tracep->chgBit(oldp+333,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfre));
            tracep->chgBit(oldp+334,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfre));
            tracep->chgBit(oldp+335,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe));
            tracep->chgBit(oldp+336,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc));
            tracep->chgBit(oldp+337,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 7U))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 6U))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 5U))));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 4U))));
            tracep->chgBit(oldp+342,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 3U))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                            >> 2U))));
            tracep->chgCData(oldp+344,((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr))),2);
            tracep->chgCData(oldp+345,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__espr),4);
            tracep->chgBit(oldp+346,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wr_spsr));
            tracep->chgBit(oldp+347,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                               >> 6U)))));
            tracep->chgCData(oldp+348,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 << 2U))),8);
            tracep->chgBit(oldp+349,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (1U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+350,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (2U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+351,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (3U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+352,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (4U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+353,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (5U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+354,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (6U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+355,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (7U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+356,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (8U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+357,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                            & (9U == 
                                               (0xfU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+358,(1U));
            tracep->chgBit(oldp+359,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err));
            tracep->chgSData(oldp+360,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                 << 2U))),16);
            tracep->chgBit(oldp+361,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                      & (0U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+362,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                      & (1U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+363,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                      & (2U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+364,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                      & (3U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgCData(oldp+365,((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),3);
            tracep->chgSData(oldp+366,((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),10);
            tracep->chgQData(oldp+367,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)))),64);
            tracep->chgCData(oldp+369,(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we),8);
            tracep->chgSData(oldp+370,((0xff8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                  << 2U))),12);
            tracep->chgSData(oldp+371,((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                  >> 1U))),9);
            tracep->chgCData(oldp+372,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+373,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+374,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+375,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+376,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                            >> 1U))));
            tracep->chgBit(oldp+377,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                            >> 1U))));
            tracep->chgBit(oldp+378,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                            >> 2U))));
            tracep->chgBit(oldp+379,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                            >> 2U))));
            tracep->chgCData(oldp+380,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+381,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+382,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+383,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+384,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                            >> 1U))));
            tracep->chgBit(oldp+385,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                            >> 1U))));
            tracep->chgBit(oldp+386,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                            >> 2U))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                            >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+388,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack));
            tracep->chgBit(oldp+389,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err));
            tracep->chgIData(oldp+390,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat),32);
            tracep->chgCData(oldp+391,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+392,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                            >> 1U))));
            tracep->chgBit(oldp+394,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                            >> 2U))));
            tracep->chgBit(oldp+395,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+396,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgCData(oldp+397,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+398,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+399,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                            >> 1U))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                            >> 2U))));
            tracep->chgBit(oldp+401,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+402,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        }
        tracep->chgBit(oldp+403,(vlTOPp->clk));
        tracep->chgBit(oldp+404,(vlTOPp->rst));
        tracep->chgBit(oldp+405,(vlTOPp->i_jtag_tck));
        tracep->chgBit(oldp+406,(vlTOPp->i_jtag_tms));
        tracep->chgBit(oldp+407,(vlTOPp->i_jtag_tdi));
        tracep->chgBit(oldp+408,(vlTOPp->i_jtag_trst_n));
        tracep->chgBit(oldp+409,(vlTOPp->o_jtag_tdo));
        tracep->chgBit(oldp+410,(vlTOPp->o_uart_tx));
        tracep->chgSData(oldp+411,(vlTOPp->o_gpio),16);
        tracep->chgBit(oldp+412,(vlSymsp->TOP__rvfpgasim.o_jtag_tdo));
        tracep->chgBit(oldp+413,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                         >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out)))));
        tracep->chgBit(oldp+414,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset));
        tracep->chgBit(oldp+415,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset));
        tracep->chgCData(oldp+416,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
                                            >> (0xcU 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q 
                                                   >> 0xeU))))),4);
        tracep->chgIData(oldp+417,(((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                                     : ((2U == (7U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                                         : ((3U == 
                                             (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                             ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)))),32);
        __Vtemp384[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_rdt;
        __Vtemp384[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat;
        __Vtemp384[2U] = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                           ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                           : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                               : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                   : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)));
        __Vtemp384[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt;
        __Vtemp384[4U] = (IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                     ? (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))));
        __Vtemp384[5U] = (IData)(((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                      ? (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                 >> 0x20U))
                                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))) 
                                  >> 0x20U));
        tracep->chgWData(oldp+418,(__Vtemp384),192);
        tracep->chgCData(oldp+424,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack) 
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
        tracep->chgBit(oldp+425,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack)))));
        tracep->chgCData(oldp+426,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
                                            >> (0xcU 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q 
                                                   >> 0xeU))))),4);
        tracep->chgCData(oldp+427,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem
                                   [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp]),8);
        tracep->chgBit(oldp+428,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb))));
        tracep->chgBit(oldp+429,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)))));
        tracep->chgCData(oldp+430,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem
                                   [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
        tracep->chgBit(oldp+431,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__tcnt)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfwe))));
        tracep->chgBit(oldp+432,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wffull))));
        tracep->chgBit(oldp+433,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                    >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err)))));
        tracep->chgIData(oldp+434,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr),32);
        tracep->chgIData(oldp+435,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc),32);
        tracep->chgIData(oldp+436,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc),32);
        tracep->chgBit(oldp+437,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                               >> 4U))) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                           >> 7U)))));
        tracep->chgBit(oldp+438,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                     >> 4U))));
        tracep->chgBit(oldp+439,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__eclk_gate) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                        >> 1U)))));
        tracep->chgBit(oldp+440,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_match)) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                     >> 5U))));
        tracep->chgCData(oldp+441,((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
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
        tracep->chgCData(oldp+442,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                   [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        tracep->chgBit(oldp+443,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req));
        tracep->chgBit(oldp+444,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                           >> 1U)))));
        tracep->chgIData(oldp+445,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg),32);
        tracep->chgIData(oldp+446,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg),32);
        tracep->chgIData(oldp+447,(((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
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
        tracep->chgBit(oldp+448,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))));
        tracep->chgBit(oldp+449,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0));
        tracep->chgIData(oldp+450,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
        tracep->chgBit(oldp+451,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))));
        tracep->chgBit(oldp+452,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0));
        tracep->chgCData(oldp+453,((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
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
        tracep->chgBit(oldp+454,(((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
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
        tracep->chgBit(oldp+455,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
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
        tracep->chgBit(oldp+456,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                   & (2U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))));
        tracep->chgBit(oldp+457,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                    >> 8U))))))));
        tracep->chgBit(oldp+458,((((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))));
        tracep->chgBit(oldp+459,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & (0x18U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                        >> 0xcU)))));
        tracep->chgBit(oldp+460,((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xcU)) | (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))));
        tracep->chgBit(oldp+461,(((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xcU))));
        tracep->chgBit(oldp+462,((((((0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)));
        tracep->chgBit(oldp+463,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail));
        tracep->chgBit(oldp+464,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
        tracep->chgBit(oldp+465,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq));
        tracep->chgBit(oldp+466,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
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
        tracep->chgBit(oldp+467,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
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
        tracep->chgIData(oldp+468,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din),32);
        tracep->chgBit(oldp+469,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
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
        tracep->chgBit(oldp+470,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x18U)))))));
        tracep->chgCData(oldp+471,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din),3);
        tracep->chgBit(oldp+472,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+473,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
        tracep->chgBit(oldp+474,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+475,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))),32);
        tracep->chgBit(oldp+476,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))));
        tracep->chgIData(oldp+477,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
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
        tracep->chgBit(oldp+478,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & (0x39U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                     >> 0x14U))));
        tracep->chgBit(oldp+479,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                   & (0x3cU == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                     >> 0xfU))));
        tracep->chgBit(oldp+480,((1U & (((((((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
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
        tracep->chgBit(oldp+481,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
                                         | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 8U)))));
        tracep->chgBit(oldp+482,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
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
        tracep->chgBit(oldp+483,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
        tracep->chgBit(oldp+484,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x16U))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
        tracep->chgCData(oldp+485,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
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
        tracep->chgCData(oldp+486,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
        tracep->chgIData(oldp+487,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)),32);
        tracep->chgIData(oldp+488,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
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
        tracep->chgIData(oldp+489,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
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
        tracep->chgCData(oldp+490,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
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
        tracep->chgBit(oldp+491,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
        tracep->chgBit(oldp+492,(((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0xcU)) | 
                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))
                                   ? ((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xcU)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))));
        tracep->chgBit(oldp+493,(((((((0x10U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))));
        tracep->chgBit(oldp+494,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
        tracep->chgCData(oldp+495,((3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
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
        tracep->chgSData(oldp+496,((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                                ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                                                   >> 0x10U)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))),16);
        tracep->chgSData(oldp+497,((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
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
        tracep->chgIData(oldp+498,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
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
        tracep->chgIData(oldp+499,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
                                     ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 2U))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)),32);
        tracep->chgBit(oldp+500,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done))));
        tracep->chgBit(oldp+501,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done))));
        tracep->chgCData(oldp+502,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))),4);
        tracep->chgIData(oldp+503,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
                                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)),32);
        tracep->chgCData(oldp+504,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))),4);
        tracep->chgIData(oldp+505,((((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
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
        tracep->chgBit(oldp+506,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+507,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+508,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                        >> 1U)))));
        tracep->chgIData(oldp+509,((0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
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
        tracep->chgSData(oldp+510,((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
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
        tracep->chgSData(oldp+511,(((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en))
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
        tracep->chgCData(oldp+512,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                  >> 4U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+513,((3U & ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+514,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                  >> 0x1dU) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+515,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                                  >> 0x19U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+516,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                  >> 0x16U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+517,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                  >> 0x12U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                           ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgBit(oldp+518,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                     >> 0x17U))));
        tracep->chgBit(oldp+519,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x12U)))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                     >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                << 0xeU) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  >> 0x12U)))))));
        tracep->chgBit(oldp+520,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                     >> 0x16U))));
        tracep->chgBit(oldp+521,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 8U)))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_readies) 
                                     >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  >> 8U)))))));
        tracep->chgBit(oldp+522,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                     >> 0xfU))));
        tracep->chgBit(oldp+523,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                >> 0xaU))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                     >> (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                               >> 0xaU))))));
        tracep->chgBit(oldp+524,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                     >> 0xeU))));
        tracep->chgBit(oldp+525,(((2U >= (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
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
