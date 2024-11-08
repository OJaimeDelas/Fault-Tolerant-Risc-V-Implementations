// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_veerwolf_core__B0_Cbebc20.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
        = ((0xfc000000U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                    >> 0x20U)) << 0x1aU)) 
           | ((0x3fff800U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                      >> 0x10U)) << 0xbU)) 
              | ((0x7f0U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                     >> 8U)) << 4U)) 
                 | ((0xeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                      >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                     >> 2U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | (((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en)) 
              | (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 1U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 2U)))) << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
        = ((0xfc000000U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                    >> 0x20U)) << 0x1aU)) 
           | ((0x3fff800U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                      >> 0x10U)) << 0xbU)) 
              | ((0x7f0U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                     >> 8U)) << 4U)) 
                 | ((0xeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                      >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                     >> 2U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xbU) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                 | ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xdU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                   & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                          >> 4U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                                     >> 2U))) & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                   >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                                                    >> 1U))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                    & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                           >> 4U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                                      >> 2U))) & ((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                    >> 2U)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                                                     >> 1U))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers))) 
                 & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                        >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r 
        = ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
           & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r) 
                     & ((8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                >> 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                          >> 6U))) 
                        | ((4U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    >> 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                              >> 7U)) 
                                  & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                         >> 5U)) << 2U))) 
                           | ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                      >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                >> 8U))) 
                              | (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                         >> 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                   >> 9U)) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                             >> 5U))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & ((~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                          >> 0x27U))) & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                                                 >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wr_spsr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
        = (((QData)((IData)((((3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__icaf_eff))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                >> 1U)))) << 0x22U) 
           | (((QData)((IData)((((3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndbecc))) 
                                | ((3U != (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndbecc))))) 
               << 0x21U) | (((QData)((IData)((((((3U 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                                | ((3U 
                                                    != 
                                                    (3U 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                               << 0x1fU) 
                                              | (0x7fffffffU 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0sel)))) 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pceff) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0sel) 
                                                                      >> 1U)))) 
                                                       & ((IData)(1U) 
                                                          + vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pceff))))))) 
                             << 1U) | (QData)((IData)(
                                                      (3U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfffff07fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xf80U & (((((0xffffff80U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrd))) 
                                               << 7U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                           | (((- (IData)((1U & (((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xfU) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xeU))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xdU))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))) 
                               << 7U) & (0x400U | (0x380U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))) 
                          | (((- (IData)((1U & (((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xfU)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))))) 
                              << 7U) & (0x400U | (0x380U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     << 5U))))) 
                         | (0x80U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdeq1))) 
                                     << 7U))) | (0x100U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((((((~ 
                                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                           >> 0xfU)) 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                            >> 0xeU)) 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                           >> 0xdU)) 
                                                                       & (~ 
                                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                           >> 0xbU))) 
                                                                      & (~ 
                                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                          >> 0xaU))) 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                         >> 9U))) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 8U)) 
                                                                   & (~ 
                                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 7U)))))) 
                                                    << 7U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xffff8fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x7000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfff07fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xf8000U & (((0xffff8000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrs1))) 
                                               << 0xfU) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 << 8U)))) 
                           | (((- (IData)((1U & (((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xdU))) 
                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xfU) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 0xeU))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                                 | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xeU) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 1U))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))))) 
                               << 0xfU) & (0x40000U 
                                           | (0x38000U 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 << 8U))))) 
                          | (0x10000U & ((- (IData)(
                                                    (1U 
                                                     & ((((((((((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                  >> 0xfU)) 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                   >> 0xeU)) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                  >> 0xdU)) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                  >> 0xbU))) 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                 >> 0xaU))) 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                >> 9U))) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                              >> 8U)) 
                                                          & (~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                              >> 7U))) 
                                                         | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                             >> 0xeU) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                               >> 1U))) 
                                                        | (((~ 
                                                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                              >> 0xeU)) 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                >> 1U))) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))))) 
                                         << 0xfU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0x1f00000U & ((0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o 
                                            | (((- (IData)(
                                                           (1U 
                                                            & (((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                      >> 0xfU) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                        >> 6U)) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 1U)) 
                                                                   | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                        >> 0xfU) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                          >> 5U)) 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                         >> 1U))) 
                                                                  | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 0xfU) 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                         >> 4U)) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                        >> 1U))) 
                                                                 | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                      >> 0xfU) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                        >> 3U)) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 1U))) 
                                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                     >> 0xfU) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                       >> 2U)) 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                      >> 1U))) 
                                                               | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                    >> 0xfU) 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                      >> 0xeU)) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                                     >> 1U)))))) 
                                                << 0x14U) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  << 0x12U)))) 
                            | (((- (IData)((1U & ((
                                                   ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xfU) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xeU))) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xbU)) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xaU)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                                  | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xfU) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                          >> 1U))) 
                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))))) 
                                << 0x14U) & (0x800000U 
                                             | (0x700000U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   << 0x12U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
           | (0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any)) 
            << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xdU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U) & (3U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                         >> 4U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xbU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r 
        = ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr) 
           & (0x7c4U == (0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
        = ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 1U))))) 
           & ((0xfffffffeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 1U)) << 1U)) 
              | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
        = ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU)) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              >> 7U))))) 
           & ((0xfffffffeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 1U)) << 1U)) 
              | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
        = ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0xdU))))) 
           & ((0xfffffffeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 1U)) << 1U)) 
              | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
        = ((- (IData)((1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               >> 0x13U))))) 
           & ((0xfffffffeU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 1U)) << 1U)) 
              | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                          >> 0x20U)) | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                                >> 0x21U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2 
        = ((0xfff00000U & (((((((((0xfff00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1) 
                                  | (((- (IData)((1U 
                                                  & ((((((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xeU)) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                             >> 0xdU))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xbU)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xaU))) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xfU)) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                             >> 0xdU)))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))))) 
                                      << 0x14U) & (
                                                   (0xfe000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d) 
                                                                      >> 5U)))) 
                                                       << 0x19U)) 
                                                   | (0x1f00000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d) 
                                                         << 0x14U))))) 
                                 | (((- (IData)((1U 
                                                 & (((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xeU)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 1U))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))))) 
                                     << 0x14U) & ((0x3c000000U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      << 0x13U)) 
                                                  | ((0x3000000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         << 0xdU)) 
                                                     | ((0x800000U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                            << 0x12U)) 
                                                        | (0x400000U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                              << 0x10U))))))) 
                                | (((- (IData)((1U 
                                                & ((((((((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xfU)) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                            >> 0xeU)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xdU)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xbU))) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                          >> 0xaU))) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 9U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 8U)) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 7U)))))) 
                                    << 0x14U) & ((0xe0000000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d) 
                                                                    >> 5U)))) 
                                                     << 0x1dU)) 
                                                 | (0x1f000000U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d) 
                                                       << 0x18U))))) 
                               | (((- (IData)((1U & 
                                               ((((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xfU)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 0xeU)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))))) 
                                   << 0x14U) & ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    << 0x15U)) 
                                                | ((0x3800000U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       << 0xdU)) 
                                                   | (0x400000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         << 0x10U)))))) 
                              | (((- (IData)((1U & 
                                              (((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 1U))))) 
                                  << 0x14U) & ((0xc000000U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   << 0x18U)) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      << 0xdU)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        << 0x12U)))))) 
                             | (((- (IData)((1U & (
                                                   ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xfU) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xeU))) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                          >> 0xdU))) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 0xbU))) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                                   | (((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 0xfU)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                           >> 0xeU))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 1U)))))) 
                                 << 0x14U) & ((0x2000000U 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  << 0xdU)) 
                                              | (0x1f00000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    << 0x12U))))) 
                            | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1))) 
                                << 0x14U) & ((0x80000000U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                 << 0xcU)) 
                                             | ((0x7fe00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                    << 0x15U)) 
                                                | (0x100000U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                      << 0xaU)))))) 
                           | (0xfff00000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12))) 
                                              << 0x14U) 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd 
                                                << 0xcU))))) 
           | ((0xff000U & ((0xfffff000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 
                                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1))) 
                                               << 0xcU) 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
                                                 << 1U)))) 
                           | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12))) 
                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd) 
                              << 0xcU))) | (0xfffU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r 
        = ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r)) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))))) 
           & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
              | ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r)) 
                 | ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
                    | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r 
        = (((((8U == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
               >> 0xdU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r 
        = ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
              >> 0xcU) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r 
        = ((((0xcU == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r 
        = (((((8U == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                  >> 0xdU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r 
        = ((((9U == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r 
        = ((((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                 >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)))) & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r_raw) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
              | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U]) 
                 == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 1U)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((7U == (7U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                           >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                             >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                        >> 6U)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((0x7fffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                              >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                         >> 1U))) << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                             >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                            >> 0x1aU)))) << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
                                           >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                        >> 0xcU)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((0x1ffffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                             >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                         << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                             >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                             >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                   << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                            >> 0x14U)))) << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                             >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
                                             >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                             >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r)) 
                 | ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 4U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 3U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                          >> 8U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xdU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                                  >> 8U))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 2U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
           & (~ (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                    >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
           & (~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                         >> 0x26U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
           & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                      >> 0x26U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
           & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                      >> 0x27U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0xdU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r))) 
             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xdU))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 4U))) & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
               & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xdU))) | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match)) 
           | (0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid)
            ? (((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                  & (0x6033U | (0xf8000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                            << 0xfU)))) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                    & (0x6033U | (0xf80U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                            << 7U))))) 
                | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                   & (0x2073U | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                << 0x14U))))) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                  & (0x1073U | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                               << 0x14U)))))
            : (((- (IData)(((3U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignval) 
                               >> 1U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata) 
               | ((- (IData)(((3U != (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignval)))) 
                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
                     & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__legal)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual 
        = (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                   & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r 
        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                  >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                 >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_r)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r))) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                  >> 4U)) | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                               >> 0xbU) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                   & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                       >> 6U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                 >> 7U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod 
        = (1U & (((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                     >> 0x16U) & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r))) 
                  & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d)) 
           | (1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                      >> 1U) & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d)) 
           | (2U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                      >> 6U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d)) 
           | (4U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                      >> 0xbU) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                  >> 0xaU)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d)) 
           | (8U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                      >> 0x10U) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   >> 0xfU)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0
            : (0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
        = ((0x80000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0xcU)) | ((0x7f800U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x15U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r 
        = ((0x7c00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                       >> 5U)) | ((0x3e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
        = (((QData)((IData)(((0x80000000U & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                               << 0x1dU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                 << 0x1bU)) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                << 0x19U))) 
                             | ((0x40000000U & ((((
                                                   ((((((((((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 0xeU)) 
                                                              & (~ 
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0xdU))) 
                                                             & (~ 
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 2U))) 
                                                            << 0x1eU) 
                                                           | (0xc0000000U 
                                                              & ((((~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 0xdU)) 
                                                                   << 0x1eU) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 0x13U)) 
                                                                 & ((~ 
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      >> 2U)) 
                                                                    << 0x1eU)))) 
                                                          | (0xc0000000U 
                                                             & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 0xbU) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 0x11U)) 
                                                                & ((~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 2U)) 
                                                                   << 0x1eU)))) 
                                                         | (0xc0000000U 
                                                            & ((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0xdU)) 
                                                                 << 0x1eU) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   << 0x14U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    >> 2U)) 
                                                                  << 0x1eU)))) 
                                                        | (0xc0000000U 
                                                           & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 0xcU) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 0x11U)) 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 2U)) 
                                                                 << 0x1eU)))) 
                                                       | (0xc0000000U 
                                                          & ((((~ 
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 0xdU)) 
                                                               << 0x1eU) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 << 0x15U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 2U)) 
                                                                << 0x1eU)))) 
                                                      | (0xc0000000U 
                                                         & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 0xdU) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 0x11U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 2U)) 
                                                               << 0x1eU)))) 
                                                     | (0xc0000000U 
                                                        & ((((~ 
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 0xdU)) 
                                                             << 0x1eU) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 0x16U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 2U)) 
                                                              << 0x1eU)))) 
                                                    | (0xc0000000U 
                                                       & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            << 0xeU) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 0x11U)) 
                                                          & ((~ 
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 2U)) 
                                                             << 0x1eU)))) 
                                                   | (0xc0000000U 
                                                      & ((((~ 
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 0xdU)) 
                                                           << 0x1eU) 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             << 0x17U)) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 2U)) 
                                                            << 0x1eU)))) 
                                                  | (0xc0000000U 
                                                     & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          << 0xfU) 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            << 0x11U)) 
                                                        & ((~ 
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 2U)) 
                                                           << 0x1eU)))) 
                                                 | (((~ 
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 4U)) 
                                                     & (~ 
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 3U))) 
                                                    << 0x1eU)) 
                                                | (((~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 6U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                        >> 2U))) 
                                                   << 0x1eU))) 
                                | ((0x20000000U & (
                                                   (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 0x18U) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          >> 4U)) 
                                                        << 0x1dU)) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 2U)) 
                                                       << 0x1dU)) 
                                                   | ((((~ 
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          >> 6U)) 
                                                        << 0x1dU) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          << 0x18U)) 
                                                      & ((~ 
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 2U)) 
                                                         << 0x1dU)))) 
                                   | ((0x10000000U 
                                       & ((((0xf0000000U 
                                             & ((((~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    >> 4U)) 
                                                  & (~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 3U))) 
                                                 << 0x1cU) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   << 0x1aU))) 
                                            | (0xf0000000U 
                                               & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 0xfU) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 5U)) 
                                                       << 0x1cU)) 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 0x18U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 2U)) 
                                                     << 0x1cU)))) 
                                           | (0xf0000000U 
                                              & (((((~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 0xdU)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                        >> 0xcU))) 
                                                   << 0x1cU) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 0x16U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 0x18U)))) 
                                          | (0xf0000000U 
                                             & (((((~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 0xcU)) 
                                                   & (~ 
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 5U))) 
                                                  << 0x1cU) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 0x18U)) 
                                                & ((~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 2U)) 
                                                   << 0x1cU))))) 
                                      | ((0x8000000U 
                                          & (((((~ 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 5U)) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    >> 2U))) 
                                               << 0x1bU) 
                                              | (0xf8000000U 
                                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 0x16U) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       << 0x19U)))) 
                                             | (0xf8000000U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   << 0x17U)))) 
                                         | ((0x4000000U 
                                             & ((((((~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 0xdU)) 
                                                    << 0x1aU) 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 0xeU)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 5U)) 
                                                     << 0x1aU)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 0x16U)) 
                                                & ((~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 2U)) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 0x14U) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       << 0x16U)) 
                                                   | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       << 0x15U) 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         << 0x17U)))) 
                                               | ((0x1000000U 
                                                   & (((((~ 
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 5U)) 
                                                         & (~ 
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 3U))) 
                                                        << 0x18U) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          << 0x16U)) 
                                                      | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          << 0x13U) 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            << 0x15U)))) 
                                                  | ((0x800000U 
                                                      & ((((~ 
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 5U)) 
                                                           & (~ 
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 4U))) 
                                                          & (~ 
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 2U))) 
                                                         << 0x17U)) 
                                                     | ((0x400000U 
                                                         & ((((~ 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 6U)) 
                                                              << 0x16U) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 0x11U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 4U)) 
                                                               << 0x16U))) 
                                                        | ((0x200000U 
                                                            & ((((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 6U)) 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 4U))) 
                                                                & (~ 
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    >> 2U))) 
                                                               << 0x15U)) 
                                                           | ((0x100000U 
                                                               & ((((((((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 0xeU)) 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            >> 0xdU))) 
                                                                       & (~ 
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                           >> 0xcU))) 
                                                                      & (~ 
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 5U))) 
                                                                     << 0x14U) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 0x10U)) 
                                                                   | ((((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 5U)) 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            >> 3U))) 
                                                                       << 0x14U) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 0x12U))) 
                                                                  | ((((((((~ 
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             >> 0x1eU)) 
                                                                           & (~ 
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                               >> 0xeU))) 
                                                                          & (~ 
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                              >> 0xdU))) 
                                                                         & (~ 
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             >> 0xcU))) 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            >> 6U))) 
                                                                       << 0x14U) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 0x10U)) 
                                                                     & ((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 2U)) 
                                                                        << 0x14U)))) 
                                                              | ((0x80000U 
                                                                  & (((0x180000U 
                                                                       & ((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                               >> 0xbU) 
                                                                              & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                             & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0x13U)) 
                                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                               << 0xeU)) 
                                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                              << 0xfU)) 
                                                                          & ((~ 
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                               >> 2U)) 
                                                                             << 0x13U))) 
                                                                      | (0xfff80000U 
                                                                         & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                << 0x13U) 
                                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 6U)) 
                                                                              & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0x13U)) 
                                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xfU)) 
                                                                            & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                               << 0x13U)))) 
                                                                     | (0xfff80000U 
                                                                        & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             << 0xdU) 
                                                                            & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                               << 0x13U)) 
                                                                           & ((~ 
                                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                              << 0x13U))))) 
                                                                 | ((0x40000U 
                                                                     & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            << 4U) 
                                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                              << 5U)) 
                                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             << 6U)) 
                                                                         & ((~ 
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                              >> 6U)) 
                                                                            << 0x12U)) 
                                                                        & ((~ 
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             >> 2U)) 
                                                                           << 0x12U))) 
                                                                    | ((0x20000U 
                                                                        & (((0xfffe0000U 
                                                                             & ((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xeU)) 
                                                                                | (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 4U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                << 0x11U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0x11U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0x11U)))) 
                                                                            | (0xfffe0000U 
                                                                               & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xfU)))) 
                                                                           | (0xfffe0000U 
                                                                              & (((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xbU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xdU))))) 
                                                                       | ((0x10000U 
                                                                           & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 2U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                << 0x10U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                << 0x10U)) 
                                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xcU)) 
                                                                              & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0x10U))) 
                                                                          | ((0x8000U 
                                                                              & (((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                << 0xfU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0xfU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xbU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xfU))) 
                                                                             | ((0x4000U 
                                                                                & ((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                << 0xeU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 2U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 0xaU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU)) 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 1U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 9U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 8U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (((0x1ffff800U 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                << 0xbU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 0xbU))) 
                                                                                | (0x3ffff800U 
                                                                                & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 5U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 0xbU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xbU)))) 
                                                                                | (0x3ffff800U 
                                                                                & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 0xbU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 4U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 0xaU)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 9U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                << 8U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 2U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 2U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 7U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                << 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 1U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 6U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                << 3U))) 
                                                                                | ((0x10U 
                                                                                & ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 3U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 2U)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((((((0xffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                | (0x3fffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)))) 
                                                                                | (0x1fffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)))) 
                                                                                | (0xfffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)))) 
                                                                                | (0x7ffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)))) 
                                                                                | (0x3ffffeU 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))))) 
                                                                                | (1U 
                                                                                & (((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                | (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                | (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                | (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                | (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))))))))))))))))))))))))))))))))))))) 
            << 0xfU) | (QData)((IData)(((0x4000U & 
                                         (((((0x7fffc000U 
                                              & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    >> 1U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                        >> 0xcU)) 
                                                      << 0xeU)) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 8U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 0xaU))) 
                                             | (0x3fffc000U 
                                                & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 2U) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          >> 0xcU)) 
                                                        << 0xeU)) 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       << 8U)) 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 0xaU)))) 
                                            | (0x1fffc000U 
                                               & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 3U) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0xcU)) 
                                                       << 0xeU)) 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 8U)) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 0xaU)))) 
                                           | (0xfffc000U 
                                              & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    >> 4U) 
                                                   & ((~ 
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                        >> 0xcU)) 
                                                      << 0xeU)) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     << 8U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 0xaU)))) 
                                          | (0x7ffc000U 
                                             & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 5U) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 0xcU)) 
                                                     << 0xeU)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 8U)) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   << 0xaU))))) 
                                        | ((0x2000U 
                                            & (((((~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    >> 0xdU)) 
                                                  << 0xdU) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                    << 1U)) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   << 7U)) 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  << 9U))) 
                                           | ((0x1000U 
                                               & ((((((0x3ffff000U 
                                                       & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 2U) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 0xdU)) 
                                                               << 0xcU)) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 6U)) 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             << 8U))) 
                                                      | (0x1ffff000U 
                                                         & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 3U) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 2U)) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 6U)) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 8U)))) 
                                                     | (0xffff000U 
                                                        & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 4U) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 2U)) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 6U)) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 8U)))) 
                                                    | (0x7fff000U 
                                                       & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 2U)) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 6U)) 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             << 8U)))) 
                                                   | (0x3fff000U 
                                                      & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 2U)) 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             << 6U)) 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            << 8U)))) 
                                                  | (0x1fff000U 
                                                     & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                             >> 2U)) 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            << 6U)) 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           << 8U))))) 
                                              | ((0x800U 
                                                  & (((((((((((0xfffff800U 
                                                               & (((~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 5U)) 
                                                                   << 0xbU) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 8U))) 
                                                              | (0xfffff800U 
                                                                 & (((((~ 
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         >> 0xdU)) 
                                                                       << 0xbU) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 4U)) 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        << 5U)) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 7U)))) 
                                                             | (0xfffff800U 
                                                                & (((((~ 
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        >> 0xdU)) 
                                                                      << 0xbU) 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        << 3U)) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 5U)) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      << 7U)))) 
                                                            | (0xfffff800U 
                                                               & (((((~ 
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       >> 0xdU)) 
                                                                     << 0xbU) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 2U)) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      << 5U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 7U)))) 
                                                           | (0xfffff800U 
                                                              & (((((~ 
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      >> 0xdU)) 
                                                                    << 0xbU) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      << 1U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 5U)) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 7U)))) 
                                                          | (0xfffff800U 
                                                             & (((((~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 0xdU)) 
                                                                   << 0xbU) 
                                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 5U)) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   << 7U)))) 
                                                         | (0xffff800U 
                                                            & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 4U) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    >> 2U)) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   << 5U)) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 7U)))) 
                                                        | (0x7fff800U 
                                                           & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 5U) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 2U)) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 5U)) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 << 7U)))) 
                                                       | (0x3fff800U 
                                                          & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 6U) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 2U)) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 << 5U)) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 7U)))) 
                                                      | (0x1fff800U 
                                                         & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               >> 7U) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 2U)) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                << 5U)) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 7U)))) 
                                                     | (0xfff800U 
                                                        & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 8U) 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                >> 2U)) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 5U)) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 7U))))) 
                                                 | ((0x400U 
                                                     & ((((((((((((0x3ffffc00U 
                                                                   & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        >> 2U) 
                                                                       & ((~ 
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            >> 5U)) 
                                                                          << 0xaU)) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 7U))) 
                                                                  | (0xfffffc00U 
                                                                     & ((((((~ 
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                              >> 0x16U)) 
                                                                            & (~ 
                                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                           & (~ 
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                               >> 0xcU))) 
                                                                          << 0xaU) 
                                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            << 4U)) 
                                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                           << 6U)))) 
                                                                 | (0xfffffc00U 
                                                                    & (((((~ 
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            >> 0xdU)) 
                                                                          << 0xaU) 
                                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                            << 3U)) 
                                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                           << 4U)) 
                                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          << 6U)))) 
                                                                | (0xfffffc00U 
                                                                   & (((((~ 
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                           >> 0xdU)) 
                                                                         << 0xaU) 
                                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                           << 2U)) 
                                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          << 4U)) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 6U)))) 
                                                               | (0xfffffc00U 
                                                                  & (((((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 0xdU)) 
                                                                        << 0xaU) 
                                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          << 1U)) 
                                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         << 4U)) 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        << 6U)))) 
                                                              | (0xfffffc00U 
                                                                 & (((((~ 
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         >> 0xdU)) 
                                                                       << 0xaU) 
                                                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0) 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        << 4U)) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 6U)))) 
                                                             | (0x7ffffc00U 
                                                                & (((((~ 
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        >> 0xdU)) 
                                                                      << 0xaU) 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        >> 1U)) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       << 4U)) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      << 6U)))) 
                                                            | (0x7fffc00U 
                                                               & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 5U) 
                                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       >> 3U)) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      << 4U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 6U)))) 
                                                           | (0x3fffc00U 
                                                              & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    >> 6U) 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      >> 3U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 4U)) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 6U)))) 
                                                          | (0x1fffc00U 
                                                             & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 7U) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 3U)) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 4U)) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   << 6U)))) 
                                                         | (0xfffc00U 
                                                            & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 8U) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    >> 3U)) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   << 4U)) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 6U)))) 
                                                        | (0x7ffc00U 
                                                           & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 >> 9U) 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 3U)) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 4U)) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 << 6U))))) 
                                                    | ((0x200U 
                                                        & (((((((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0x16U)) 
                                                                << 9U) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0xbU)) 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0xdU)) 
                                                                 << 9U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  >> 0xcU)) 
                                                                << 9U)) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                               << 3U)) 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 5U))) 
                                                       | ((0x100U 
                                                           & (((((((~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 0x15U)) 
                                                                   & (~ 
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       >> 0x14U))) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                      >> 0xdU))) 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 0xcU))) 
                                                                << 8U) 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                  << 2U)) 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                 << 4U))) 
                                                          | ((0x80U 
                                                              & (((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     >> 0x16U) 
                                                                    & ((~ 
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         >> 0xdU)) 
                                                                       << 7U)) 
                                                                   & ((~ 
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                        >> 0xcU)) 
                                                                      << 7U)) 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                     << 1U)) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                    << 3U))) 
                                                             | ((8U 
                                                                 & (((~ 
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                       >> 5U)) 
                                                                     << 3U) 
                                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0)) 
                                                                | ((4U 
                                                                    & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                         >> 0xaU) 
                                                                        & ((~ 
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                             >> 5U)) 
                                                                           << 2U)) 
                                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                          >> 1U))) 
                                                                   | ((2U 
                                                                       & ((0x7feU 
                                                                           & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x15U) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                << 1U)) 
                                                                               & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                          | (0x1ffffffeU 
                                                                             & (((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))))) 
                                                                      | (1U 
                                                                         & ((((((((((((((((((((((((((((((((((((((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x18U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x17U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x16U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x15U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x14U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U)) 
                                                                                | (((((((((((((((((((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x18U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x17U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x16U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x15U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x14U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((((((((((((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x18U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x17U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x16U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x15U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | ((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | ((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | ((((((((((((((((((((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x18U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x17U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x16U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x15U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x14U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((((((((((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x13U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x12U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x10U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xfU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xbU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xaU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 9U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 8U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 7U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1fU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1eU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1dU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1cU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1bU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x1aU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0x19U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | (((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                                | ((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xdU) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                               | (((((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xeU)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 0xcU))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                              | ((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 5U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                             | (((((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 6U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 4U)) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 3U))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 2U)) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                                >> 1U))) 
                                                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0))))))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
                 & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                    >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data_valid) 
            & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write))) 
           & (~ (((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                            >> 4U)) == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
               >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_r) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                   >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
             & ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                >> 2U)) == (0x3fffffffU 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                               >> 2U)))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r))) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl_ns 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbccU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt_ns 
        = (0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbc9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel_ns 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                  & (0x7a0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x305U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x7ffffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 1U)) | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x340U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7f9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0xe000U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 0x10U)) << 0xdU)) 
               | ((0x1000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                  | ((0xf80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                     | ((0x40U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                      >> 6U)) << 6U)) 
                        | (0x3fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7c0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_in
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                         & (0xbc8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 0xaU) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x323U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x324U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x325U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x326U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x320U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x3eU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 1U)) | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
            & (0x7c8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x10000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 8U)) | ((0xc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                           >> 3U))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ceU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7cfU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb03U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb83U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb04U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb84U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb05U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb85U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb06U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb86U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7c9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7ccU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
             & (0x7a1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                  >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0xdU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
             & (0x7a1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                  >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0xdU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_kill_write)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_kill_write)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7b1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x342U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x341U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ffU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7b0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x343U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7caU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb00U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x300U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xbcaU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb80U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb82U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb02U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
               >> 8U)) & (~ ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r)) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                & (0x7c2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7c6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x304U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x38U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 0x19U)) | ((4U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                              >> 9U)) 
                                       | ((2U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                 >> 6U)) 
                                          | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                   >> 3U)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset 
        = ((0x800U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm)
            ? (0xffU == (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
                                  >> 0xcU))) : (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
                                                    >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d 
        = ((0x7ffe0fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d) 
           | (0x1f0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                        << 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = ((- (IData)((1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                       >> 0xaU))))) 
           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = ((- (IData)((1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                       >> 5U))))) & 
           vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                      >> 0x14U)) & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                                            >> 0x2bU))) 
            & (0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r)))) 
           & ((1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                               >> 0xaU))) | (5U == 
                                             (0x1fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                 >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw;
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp = 0ULL;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x400000000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x200000000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x100000000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x100000000ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (1ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x400ULL | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (1U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v))) 
            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (2U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 1U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 1U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (3U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 2U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 2U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (4U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 3U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 3U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (5U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 4U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 4U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (6U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 5U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 5U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (7U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 6U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 6U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (8U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 7U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 7U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (9U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 8U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 8U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xaU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 9U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 9U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xbU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xcU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xdU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xeU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xfU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x10U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x11U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x11U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x12U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x12U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x13U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x13U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x14U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x14U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x15U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x15U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x16U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x16U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x17U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x17U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x18U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x18U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x19U == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x19U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1aU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1aU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1bU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1bU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1cU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1cU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1dU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1eU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1fU == (0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
                              >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v 
                                >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                              >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                              >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                  == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                    >> 5U))))) & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0xfU))))) & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                                             >> 0x13U))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0x19U))))) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0x23U))))) 
               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff00U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                           ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                            >> 8U))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                             ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                 ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                 ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                               ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (2U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 1U) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (4U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 2U) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 2U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 3U) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 3U)) << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff00U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                           ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                              >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                             ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                 ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                >> 0x10U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff000000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))
                               ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                  >> 0x18U)) << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                ? ((0x200U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                  >> 9U)) << 9U)) | 
                   (0x1ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                     ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht))
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r)
                ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                    << 0x1bU) | (0x7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                : ((0xf8000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect) 
                   | (0x7ffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                    + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r)))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r) 
                  | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                     >> 0x19U))) ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r)
                                     ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                         << 0x1bU) 
                                        | (0x7ffffffU 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                     : ((0xf8000000U 
                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                        | (0x7ffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                              + (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                    >> 0x19U))))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r)
                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                          & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0xdU))) ? ((2U & 
                                               ((~ 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                  >> 0xfU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                     >> 0xeU))))
                          : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[0U])
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[1U])
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                   | ((0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 8U) | (0xffffff00U 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))) 
                      | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                   | ((0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 6U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                      | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                   | ((0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 7U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                      | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                   | ((0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 5U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
                      | (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))
                           ? ((((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r)))) 
                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 1U)) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r))) 
                                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r)) 
                              | ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r))
                           : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r)
                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r)
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns 
        = ((0x70U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns)) 
           | (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r)
                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                       : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[2U])));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_inc);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_claimid)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)
                ? 0U : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)
                ? 0U : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r) 
                  | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                     >> 0x10U))) ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)
                                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                     : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                    >> 0xfU) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                >> 0xeU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_inc);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r)
                  ? (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                        >> 1U)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r) 
            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
               >> 0x16U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                             >> 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
               >> 0x13U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                             >> 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
               >> 0x12U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                             >> 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
               >> 0x11U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset) 
            & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                       >> 0x28U))) & ((1U == (0x1fU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))) 
                                      | (5U == (0x1fU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset) 
            & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                       >> 0x28U))) & (~ ((1U == (0x1fU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))) 
                                         | (5U == (0x1fU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x19U)) | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x14U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x10U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3fffffffe7fULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)((3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x22U))))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3fffff81fffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)(((0x3cU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x1eU)) 
                                         << 2U)) | 
                               ((2U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x1cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x1dU))))))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3ffffffff9fULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)((3U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x1aU))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3ffffffe1ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)(((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x17U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                >> 0x15U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x16U))))))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x14U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0xdU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x2dU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x2cU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v 
           | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r)
            ? ((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
               | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r)
            ? ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
               | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk7__DOT__dicad1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__dicad1_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                         | (1U & ((((IData)(1U) + (0xffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                   >> 8U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))))
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                            >> 8U) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                          | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                                   & (((IData)(1U) 
                                       + (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)) 
                                      >> 8U)))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                            >> 8U) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                          | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                                   & (((IData)(1U) 
                                       + (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                      >> 8U)))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                            >> 8U) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable)
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns
                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r) 
                         | (1U & ((((IData)(1U) + (0xffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                   >> 8U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable))))
                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                            >> 8U) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
            >> 0x14U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
            >> 0x15U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r 
        = (1U & (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                          >> 4U)) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 5U)) & (~ (
                                                   ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
                                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready)) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                        >> 1U)) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected)))) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                          >> 0xbU))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xbU))) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 3U))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__mhwakeup) 
                                 & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                        >> 0x13U)) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns) 
                                       >> 2U)))) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                              >> 7U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                            >> 9U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x14U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset 
        = (0xfffU & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                                >> 0x14U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case)) 
                      | ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw 
                                  >> 0x14U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case)))
                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm
                      : ((0x800U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 8U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3ffffffffefULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)((1U & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x14U)) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case)))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja 
        = ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x14U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_misc_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_misc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 0xfU)) | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0xeU))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write) 
           & (~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x10U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
               >> 1U)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
               >> 1U)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
               >> 1U)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
               >> 1U)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__1__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__2__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__3__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__4__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__5__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__6__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__7__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__8__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__9__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__10__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__11__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__12__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__13__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__14__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__15__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__16__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__17__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__18__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__19__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__20__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__21__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__22__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__23__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__24__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__25__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__26__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__27__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__31__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)))) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                             >> 1U)))) 
                           << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                               >> 1U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                               >> 2U)))) 
                             << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                                 >> 2U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                                 >> 3U)))) 
                               << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                                   >> 3U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)))) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                             >> 1U)))) 
                           << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                         | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                               >> 1U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                               >> 2U)))) 
                             << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                           | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                                 >> 2U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                                 >> 3U)))) 
                               << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                             | (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                                   >> 3U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d = 0ULL;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d 
        = ((0xfffffbffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall)) 
              << 0x22U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d 
        = ((0xfffffdffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja)) 
              << 0x21U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d 
        = ((0xffffff7fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret)) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d 
        = ((0xefffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata)))) 
              << 0x34U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0x19U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3fffffffffcULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | (IData)((IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               << 1U) | (1U & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0xcU)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d 
        = ((((((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x2bU))))) 
               & ((0xfffff000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                               >> 0x1fU)))) 
                                  << 0xcU)) | (0xfffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 0x14U)))) 
              | (0x1fU & ((- (IData)((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                    >> 0x29U))))) 
                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                             >> 0x14U)))) | ((- (IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 0x14U)) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                       >> 0x28U)))))) 
                                             & ((0xfff00000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0x1fU)))) 
                                                    << 0x14U)) 
                                                | ((0xff000U 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0) 
                                                   | ((0x800U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            >> 0x14U))))))) 
            | (0xfffff000U & ((- (IData)((1U & ((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x14U))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x28U)))))) 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0))) 
           | (0x1fU & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0xcU))))) 
                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                          >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x)
                   ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                            << 2U)) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r)
                                        ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                 << 2U))
                                        : 0U)) >> 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d 
        = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x)
                  ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                           << 2U)) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r)
                                       ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                << 2U))
                                       : 0U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x)
                   ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                            << 2U)) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r)
                                        ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                 << 2U))
                                        : 0U)) >> 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d 
        = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x)
                  ? (1U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                           << 2U)) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r)
                                       ? (2U | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                << 2U))
                                       : 0U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff00U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                              >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                        >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                                >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                                  >> 0x18U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff00U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                              >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                        >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                                >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                                  >> 0x18U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r 
        = (1U & ((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume)) 
                  | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 6U)) | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
        = ((0xdfffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                             >> 1U))))) 
              << 0x35U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1ff3fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t) 
           | (0x80U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x14U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br))) 
                       << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3fffffffffbULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d 
        = (0xfffU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d))) 
                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0x14U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass 
        = ((4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)) 
                  << 2U)) | ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                                     << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))) 
                             | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                                       >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                    >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass 
        = ((4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)) 
                  << 2U)) | ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                                     << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))) 
                             | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                                       >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                    >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m) 
            << 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m)) 
            << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & (((((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 3U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))) 
                   & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x10U))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0x11U))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xbU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d 
        = ((1U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                           >> 2U)) & (~ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x14U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset)
            : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                      << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                            >> 4U)) | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                               >> 0x22U))) 
                  | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                             >> 0x21U))) | (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d 
                                                    >> 0x1fU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync 
        = (1U & ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U)) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 1U))) | ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU)) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                      | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 6U)) & 
                         (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 1U)))) | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)) 
                   | (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xbU)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U))) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 6U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U))) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 3U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                  | ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 0xbU)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 7U)) & 
                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 1U)))) | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 3U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 2U)) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U)) & 
                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                   >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 1U))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   ((((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU)) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                            | ((((((((((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xbU)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)))) 
                                           | (((((((((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xbU)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 9U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 8U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                          | (((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                         | ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 9U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 8U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U))) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                        | ((((((((((((~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xbU)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xaU)) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 9U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 8U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 7U)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                       | ((((((((((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 0xbU)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 9U)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 8U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U)) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)))) 
                                      | (((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 9U)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 8U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U)) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                     | ((((((((((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 5U)) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 1U)))) 
                                    | ((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xbU)) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 9U)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 8U)) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 6U))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 5U)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U))) 
                                   | ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U))) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U)) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 1U))) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                  | ((((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xbU)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU)) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 9U)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 8U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 7U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 6U)) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 5U))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 3U)) & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 1U))) | ((
                                                   ((((((((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                            >> 0xbU)) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                             >> 0xaU)) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                            >> 9U)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 8U)) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 7U)) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 6U)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U)) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 3U))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 2U))) 
                                | (((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xbU) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 9U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 8U)) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U))) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 6U))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U)) & 
                                     (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 3U))) & 
                                    (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 2U))) & 
                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 1U))) | ((((
                                                   (((((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xbU)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 1U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                              | ((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 0xbU) & 
                                        (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU))) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 9U)) & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U)))) 
                             | (((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 0xbU) & 
                                        (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU))) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 9U)) & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                            | ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xbU) & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU))) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 6U))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 5U))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 2U))) | ((((((
                                                   ((((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU)) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                          | (((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU)) & 
                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xaU)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                         | ((((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU)) & 
                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xaU)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 8U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 2U)))) | (((((
                                                   ((((((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 0xbU)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU)) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 9U)) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 8U)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U)) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 6U))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 4U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 2U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                       | ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 0xbU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xaU))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 8U)) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 6U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 1U))) | ((((((((((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xbU)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 9U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 8U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 6U)) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U))) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U)))) 
                     | ((((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 0xbU)) & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 8U)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U))) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 4U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 1U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                    | ((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 0xbU)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 8U)) & 
                          (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 7U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 6U))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 3U))) | ((
                                                   ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 6U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 5U))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                  | ((((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xbU)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xaU))) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 8U)) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 7U))) 
                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U)) & 
                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                      >> 4U))) | ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU) & 
                                       (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 0xaU))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 9U)) & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 8U)) & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U))) & 
                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 0xaU)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 4U))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                   >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xaU)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics 
        = (1U & ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 0xbU)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U))) & 
                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync 
        = (1U & ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U)) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)) 
                      | ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 5U)) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 4U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U))) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                     | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 5U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 4U))) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 3U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U))) 
                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                    | ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U))) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 4U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))) 
                   | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                          >> 0xbU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                        (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                            >> 3U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 1U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 0xbU) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 4U))) & 
                       (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 3U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 2U)) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)))) 
                 | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 7U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 5U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                            >> 3U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U))) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen)) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                   == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                >> 0xaU)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass))) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                    >> 1U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                   >> 2U))) << 3U) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen)) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr) 
                   == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                >> 5U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass))) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                    >> 1U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                   >> 2U))) << 3U) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m)
                                        : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data
                                            : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 8U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 8U)))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x10U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x10U)))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x18U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x18U)))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x20U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x20U)))))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x28U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x28U)))))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x30U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x30U)))))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x38U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x38U)))))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m)
                                        : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data
                                            : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 8U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 8U)))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x10U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x10U)))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x18U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x18U)))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x20U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x20U)))))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x28U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x28U)))))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x30U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x30U)))))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x38U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x38U)))))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                  >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 8U))))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__brimm_in_ext 
        = ((0xffffe000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__brimm_in_ext) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout 
        = ((0x7ffff000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout) 
           | (0xfffU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                 >> 1U)) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                     >> 1U))) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d)) 
                 >> 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d 
        = (((((((((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((0x40001104U 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (((((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                                | (0x45U 
                                                                   & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid))))) 
                                                               | (0x10U 
                                                                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid))))) 
                                                              | (4U 
                                                                 & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid))))) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (((((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                                & (0x1800U 
                                                                   | ((0x80U 
                                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                          << 6U)) 
                                                                      | (8U 
                                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                            << 3U)))))) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           & (((((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U)) 
                                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                               & ((0xfffffffcU 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (((~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U)) 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))))) 
                                                              & ((0x70000000U 
                                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                     << 8U)) 
                                                                 | ((0x800U 
                                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                        >> 8U)) 
                                                                    | ((0x80U 
                                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                           >> 0xbU)) 
                                                                       | (8U 
                                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                             >> 0xeU))))))) 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (((((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                               & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                              & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U)) 
                                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                             & ((0x70000000U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie) 
                                                                    << 0x19U)) 
                                                                | ((0x800U 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie) 
                                                                       << 9U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie) 
                                                                          << 6U)) 
                                                                      | (8U 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie) 
                                                                            << 3U))))))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU) 
                                                                               & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U))) 
                                                                              & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                             & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 1U)))))) 
                                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U) 
                                                                               & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                              & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                             & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 2U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                              >> 1U)))))) 
                                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc)) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & (((((((~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                              & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                             & (~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 2U))) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 1U)) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (((((((~ 
                                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 0xaU)) 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                            & (~ 
                                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 3U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                              >> 2U))) 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 1U)) 
                                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (((((~ 
                                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 7U)) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 6U)) 
                                                                         & (~ 
                                                                            ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 2U))) 
                                                                        & (~ 
                                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 1U))) 
                                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((((~ 
                                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                          >> 7U)) 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                           >> 6U)) 
                                                                       & (~ 
                                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                           >> 1U))) 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout 
                                                          << 1U))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((((~ 
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 7U)) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                          >> 6U)) 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 1U)) 
                                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause)) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 6U) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 5U)) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 2U))))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((((~ 
                                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 7U)) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 6U)) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 1U)) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval)) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((((((~ 
                                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 0xbU)) 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 7U)) 
                                                                     & (~ 
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 5U))) 
                                                                    & (~ 
                                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 3U))) 
                                                                   & (~ 
                                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 2U))) 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 1U)))))) 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac)) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac))) 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((((((~ 
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 0xaU)) 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 6U)) 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 2U))) 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                     >> 1U))) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                                                    << 0xaU))) 
                                             | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap))) 
                                                & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                                                    << 0xaU) 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout) 
                                                      << 2U)))) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 0xbU) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                  >> 6U)) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 2U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl))) 
                                           | (0xfU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                   >> 0xbU) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                     >> 6U)) 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                    >> 1U)) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                    >> 9U)))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 0xbU) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 6U)) 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 1U))) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 4U)) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 3U)) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 4U)) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 3U)) 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 1U))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc)) 
                                       | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr))) 
                                          & (0x40000003U 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                                << 2U)))) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc))) 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout 
                                            << 1U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0))) 
                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h))) 
                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h)) 
                                   | (0xfU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_raw)))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics))) 
                                     & ((0x1000000U 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics 
                                            << 8U)) 
                                        | ((0x300000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics 
                                               << 6U)) 
                                           | (0x1fff8U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics 
                                                 << 3U)))))) 
                                 | ((- (IData)((1U 
                                                & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 4U))) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 1U))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel))) 
                                | ((- (IData)((1U & 
                                               (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 4U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out)) 
                               | ((- (IData)((1U & 
                                              (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 5U)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))))) 
                                  & (((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3)))) 
                              | ((- (IData)((1U & (
                                                   (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 3U))) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 1U))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect)) 
                             | ((- (IData)((1U & ((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 5U)) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 3U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect)) 
                            | ((- (IData)((1U & (((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect)) 
                           | ((- (IData)((1U & ((((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 3U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 2U))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3)) 
                          | ((- (IData)((1U & (((((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 1U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4)) 
                         | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xbU) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5)) 
                        | ((- (IData)((1U & (((((((~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 7U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6)) 
                       | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 7U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h)) 
                      | ((- (IData)((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 7U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h)) 
                     | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U)) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h)) 
                    | ((- (IData)((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 2U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 1U)) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h)) 
                   | ((- (IData)((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 6U) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 1U)) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht))) 
                  | ((- (IData)((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 6U) & 
                                         (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs))) 
                 | ((- (IData)((1U & ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 7U)) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U)) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U))) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3))) 
                | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U) & 
                                         (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U))) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U)) & 
                                      (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4))) 
               | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 3U))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U)) & 
                                     (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5))) 
              | ((- (IData)((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 5U) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 3U))) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6))) 
             | ((- (IData)((1U & ((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 7U)) & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 5U)) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 3U))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U))) & 
                                  (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit))) 
            | (2U & ((- (IData)((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 6U) & 
                                          (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))))) 
                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout)) 
                        << 1U)))) | ((- (IData)((((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0)) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1)) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0)) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0)) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1)))) 
                                     & (((((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0))) 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0) 
                                            | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1))) 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0))) 
                                              & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b))) 
                                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1))) 
                                             & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b))) 
                                         | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0))) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1)))));
}
