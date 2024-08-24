// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_veerwolf_core__B0_Cbebc20.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp318[3];
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                  >> 7U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_r_ff0__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en))
            ? (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                       >> 8U)))) << 0x38U) 
               | vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_predictpacket_x_ff__dout)
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en))
            ? (((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                           >> 0x25U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                << 0xbU) | ((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                       >> 0x36U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                             << 0xaU) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d) 
                                          << 9U) | 
                                         ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d) 
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
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_flush_path_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_path_d;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_predictpacket_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_flush_path_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_flush_path_x_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_predictpacket_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_predictpacket_x_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en) 
             >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d))
            ? 0U : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__predpipe_x);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_flush_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_flush_path_x_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_npc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pred_correct_npc_x;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_flush_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_flush_r_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_npc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_npc_r_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i_pc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en))
                           ? (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                      >> 1U)) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_csr_rs1_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en) 
             >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_csr_rs1_x);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_branch_x))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__predpipe_x
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__predpipe_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i_result_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_data_en) 
             >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__result
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__alu_result_x);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb0 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val 
        = (3U & ((1U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                           >> 3U))) | ((- (IData)((1U 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B))))) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                          >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1fff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken 
        = (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_p) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
                   | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_empty_any))) 
                  | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d 
        = (0x1fffU & (((0x1000U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                   << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d)) 
                      + (7U & (((1U & (- (IData)((1U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                                     >> 0xaU))))) 
                                | (3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                                       >> 9U)))))) 
                               | (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                                   >> 8U))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_result_m
            : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d)
                ? ((((- (IData)(((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                         >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d)) 
                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                    >> 7U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d) 
                    | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d) 
                                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                          >> 5U))) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      >> 7U)))) & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d)) 
                   | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                         >> 5U) & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 7U))))) 
                      & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                          << 0xaU) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout) 
                                      << 2U)))) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match 
        = ((((0x3fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                       >> 5U)) == (0x3fU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout 
                                            >> 5U))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                    >> 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f 
        = (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f)))) 
            & (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken 
        = (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                            >> 5U))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)) 
             | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f 
        = (((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                              >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val))) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb1 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_xff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__trap_xff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
        = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
           + ((0xffffe000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d) 
                                                >> 0xcU)))) 
                              << 0xdU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d) 
           | (0xfffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                        + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout 
        = (1U & (((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d) 
                  + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d)) 
                 >> 0xcU));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff)
                : 0U);
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff)
                : ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)
                    : 0U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff)
                : ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match))) 
                   & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (((0x3ffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                              >> 5U)) == (0x3ffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                             >> 5U))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
              & ((0x3ffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                >> 5U)) != (0x3ffffffU 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                               >> 5U)))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                  >> 6U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f) 
             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
           & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb1))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb1)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_mff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x1fffffffU & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_d)) 
                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                    >> 4U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                >> 3U)
                           : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_mff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d) 
           | (0xfffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                               >> 0xbU) 
                                                              ^ ~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout))))) 
                                               << 0xcU) 
                                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d)) 
                              | (((- (IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))))) 
                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd 
        = (((5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_ic_req_ff_in 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                       >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
                 & (~ ((((7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid)) 
                        & (vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                           >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                     : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (2U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                          >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (4U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                          >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                    << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (8U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                          >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                    << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x10U & (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                         : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                             >> 4U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x20U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                         : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                             >> 5U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                       << 5U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x40U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                         : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                             >> 6U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                       << 6U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x80U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error)
                         : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                             >> 7U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)))) 
                       << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat))) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 1U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 3U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 5U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 6U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 7U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f)) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                      : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                  >> 7U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))
                  : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                      : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))))
                          : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f 
        = ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f))) 
           & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                     >> (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                               >> 2U)))) ? 3U : ((1U 
                                                  & ((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                        >> 1U) 
                                                       & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                                          >> 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                              >> 2U))))) 
                                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                                           >> 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                >> 2U)))))))
                                                  ? 2U
                                                  : 0U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                        ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)
                                 ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))
                                     ? 0U : 2U) : 0U))
                    : (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f)) 
                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                        ? 2U : 0U)) : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                            ? 0U : 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))
                                                 ? 0U
                                                 : 2U)
                                             : 1U))
                                        : 0U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                                    ? 
                                                   ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                     ? 5U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                      ? 7U
                                                      : 0U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                                       & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                           >> 2U) 
                                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                                      ? 0U
                                                      : 
                                                     ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                            >> 2U))) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                                       ? 3U
                                                       : 
                                                      (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                                        ? 4U
                                                        : 
                                                       ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                         ? 0U
                                                         : 
                                                        (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                          ? 6U
                                                          : 
                                                         (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                           ? 6U
                                                           : 
                                                          (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat))))
                                                             ? 2U
                                                             : 0U)))))))))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))
                                                     ? 1U
                                                     : 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f) 
               & (((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   | (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                  | (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_d 
        = ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                  >> 2U)) != (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regpred_access_fault_d 
        = (((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                              >> 0x1cU))) | (0xfU == 
                                             (0xfU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 0x1cU)))) 
           ^ ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                >> 0x1cU))) | (0xfU 
                                               == (0xfU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                                      >> 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__unmapped_access_fault_d 
        = (((((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                >> 0x1cU))) & (~ ((0x3c01U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                       >> 0x12U))) 
                                                  | (0x1e018U 
                                                     == 
                                                     (0x1ffffU 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                         >> 0xfU)))))) 
             | ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                  >> 0x1cU))) & (~ 
                                                 ((0x3c01U 
                                                   == 
                                                   (0x3fffU 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                       >> 0x12U))) 
                                                  | (0x1e018U 
                                                     == 
                                                     (0x1ffffU 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                         >> 0xfU))))))) 
            | ((0x3c01U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                       >> 0x12U))) 
               & (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                           >> 0xfU))))) 
           | ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                        >> 0xfU))) 
              & (0x3c01U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                        >> 0x12U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_d 
        = (1U & (~ ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                      >> 0x1cU))) | 
                    (0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                      >> 0x1cU))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regcross_misaligned_fault_d 
        = ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                    >> 0x1cU)) != (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                           >> 0x1cU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_d 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (1U | (0x1eU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                       >> 0x1bU)))) 
                   & (~ (((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                            >> 0x1cU))) 
                          | (0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                              >> 0x1cU)))) 
                         | (0xeU == (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                             >> 0x1cU)))))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d)) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                     >> 6U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                               >> 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d 
        = ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                     >> 0xfU))) & (0x1e018U 
                                                   == 
                                                   (0x1ffffU 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                       >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned 
        = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                  >> 2U)) != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_d 
        = ((0x3c01U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                   >> 0x12U))) & (0x3c01U 
                                                  == 
                                                  (0x3fffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                      >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt))) 
                  & ((IData)(1U) + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                    >> 3U))) | ((- (IData)(
                                                           (1U 
                                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt)) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt)))))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                                   >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in 
        = ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                     >> (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                               >> 2U))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                              >> 1U))) 
                   & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
                  | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                       >> (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                 >> 2U))) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                                >> 1U))) 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
                 | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                      >> (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                >> 2U))) & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                            >> 1U)) 
                    & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout))) 
                | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                      >> (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                                            >> (7U 
                                                & ((IData)(1U) 
                                                   + 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                                    >> 2U))))) 
                    & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                       >> 1U)) & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                 >> 6U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_access_fault_f 
        = (3U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f)) 
                 & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = ((((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
              & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
             & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f)))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
        = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
             & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r) 
                | ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d)))) 
                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_path_d))) 
            | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                 & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                        >> 7U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f))))))) 
               & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
           | ((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                              >> 7U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f)))) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__sideeffect_misaligned_fault_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_d) 
           & (~ (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 9U) & (0U == (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                      >> 0xaU) & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_rden 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
               >> 7U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_mken 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
               >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__picm_access_fault_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d) 
           & ((0U != (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d)) 
              | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_pic_wen 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                >> 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                           >> 6U) & ((~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                          >> 9U) | 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                                          >> 8U))) 
                                     | (0U != (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d)))))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_d)) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz) 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din 
        = ((0xffffff80U & ((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                   >> 4U))) << 7U) 
                           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                               << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))) 
           | ((((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss)) 
               << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count) 
                          << 3U) | ((2U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_ic_diag_pkt[0U]) 
                                    | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                             >> 1U))))));
    VL_EXTEND_WQ(80,64, __Vtemp318, (((QData)((IData)(
                                                      vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[2U])) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U])) 
                                                      >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data 
        = (((- (QData)((IData)((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                           >> 6U)) 
                                       | (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                      | (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))))) 
            & (((QData)((IData)(((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                  ? __Vtemp318[1U] : 
                                 vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U]))) 
                << 0x20U) | (QData)((IData)(((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                              ? __Vtemp318[0U]
                                              : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U]))))) 
           | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f))) 
              & ((0x3fU >= (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                     << 4U))) ? ((((QData)((IData)(
                                                                   ((0x9bU 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                     ? 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                            >> 5U)))] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                                     | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * 
                                                                          (3U 
                                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                              >> 1U)))))
                                                                      ? 
                                                                     (((0U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * 
                                                                            (3U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (7U 
                                                                          & (((IData)(0x27U) 
                                                                              * 
                                                                              (3U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                             >> 5U)))] 
                                                                        << 
                                                                        ((IData)(0x20U) 
                                                                         - 
                                                                         (0x1fU 
                                                                          & ((IData)(0x27U) 
                                                                             * 
                                                                             (3U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))) 
                                                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                         (7U 
                                                                          & (((IData)(0x27U) 
                                                                              * 
                                                                              (3U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                             >> 5U))] 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & ((IData)(0x27U) 
                                                                             * 
                                                                             (3U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))
                                                                      : 0U)))) 
                                                 >> 
                                                 (0x10U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                     << 4U)))
                  : 0ULL)));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0x3b80U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                      >> 0x11U)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                     >> 7U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_scnd_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf);
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout
                : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout
                    : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_scnd_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf 
        = ((0x3b80U != (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                   >> 0x11U))) & (0xeU 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                                      >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_uncacheable_bf 
        = (1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (0x1eU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                 >> 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                  >> 7U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2))) 
            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual) 
              & (0x1fU != (0x1fU & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout))) 
             & (2U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) 
            << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_d 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regcross_misaligned_fault_d) 
             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__sideeffect_misaligned_fault_d) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_d))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__picm_wren 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                 >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_r)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_pic_wen));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_rden 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_d));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
            = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r_ff)
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
            = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r_ff)
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r_ff;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r_ff;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
            = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
            = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_hi
                : 0U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_lo
                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_any) 
           & ((~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
                 & (~ (((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any 
                               >> 2U)) == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 2U))) 
                       | ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any 
                                 >> 2U)) == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__rgn_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_uncacheable_bf));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__rgn_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff)
            : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_uncacheable_bf)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((1U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
                      | (7U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                  >> 1U)))) | (3U & 
                                               ((- (IData)(
                                                           ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   >> 2U)))) 
                    | (0xeU & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                  << 1U)))) | ((- (IData)(
                                                          (1U 
                                                           & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left)))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate 
            = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                ? ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r))) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                    ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r)
                             ? 1U : 3U)) : ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f))
                                              ? 3U : 2U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en 
            = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                      ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                      : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate 
            = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                ? ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                    ? 0U : (((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f) 
                                & (3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)))))
                             ? 3U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f))
                                      ? 2U : 1U))) : 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en 
            = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                      ? ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r) 
                          & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                        >> 4U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                       >> 4U)) | (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                        >> 4U)))) | 
                  (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                         >> 4U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                      >> 4U)) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                       >> 4U)))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                           >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
            << 2U) | ((((1U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                      >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                       << 1U) | ((0U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                               >> 5U))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch = 0U;
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout) 
                     | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    } else {
        if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
                = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f) 
                       & (3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data))))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))));
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f) 
                   << (1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_rden) 
              & ((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                               >> 2U))) | (0U == (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                     >> 2U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_rden) 
               & ((1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (1U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_rden) 
               & ((2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (2U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_rden) 
               & ((3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (3U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned 
        = ((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                  >> 2U)) != (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (1U & (((((((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                    ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 1U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 3U)) 
                                  ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 4U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 6U)) 
                                ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 8U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xaU)) 
                              ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                 >> 0xbU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xdU)) 
                            ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                               >> 0xfU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0x11U)) 
                          ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x13U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0x15U)) 
                        ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                           >> 0x17U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x19U)) 
                      ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                         >> 0x1aU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x1cU)) ^ 
                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                     >> 0x1eU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (2U & ((((((((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     << 1U) ^ (0x7ffffffeU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 1U))) 
                                   ^ (0x3ffffffeU & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 2U))) ^ (0xffffffeU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                      >> 4U))) 
                                 ^ (0x7fffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 5U))) 
                                ^ (0xfffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 8U))) 
                               ^ (0x7ffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 9U))) 
                              ^ (0x1ffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xbU))) 
                             ^ (0xffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xcU))) 
                            ^ (0x1fffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0xfU))) 
                           ^ (0xfffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x10U))) 
                          ^ (0x1ffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x13U))) 
                         ^ (0xffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x14U))) ^ 
                        (0x1feU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x17U))) ^ (0xfeU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x18U))) 
                      ^ (0x3eU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x1aU))) ^ (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x1bU))) 
                    ^ (2U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (4U & ((((((((((((((((((0xfffffffcU & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      << 1U)) ^ (0xfffffffcU 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any)) 
                                   ^ (0x7ffffffcU & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 1U))) ^ (0x7fffffcU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                      >> 5U))) 
                                 ^ (0x3fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 6U))) 
                                ^ (0x1fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 7U))) 
                               ^ (0xfffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 8U))) 
                              ^ (0xffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 0xcU))) 
                             ^ (0x7fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xdU))) 
                            ^ (0x3fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0xeU))) 
                           ^ (0x1fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0xfU))) 
                          ^ (0xffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x14U))) 
                         ^ (0x7fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x15U))) ^ 
                        (0x3fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x16U))) ^ (0x1fcU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x17U))) 
                      ^ (0x1cU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x1bU))) ^ (0xcU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x1cU))) 
                    ^ (4U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (8U & (((((((((((((((0x7ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 1U)) 
                                 ^ (0x3ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                   >> 2U))) 
                                ^ (0x1ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 3U))) 
                               ^ (0xffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 7U))) 
                           ^ (0x1fff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0xfU))) 
                          ^ (0xfff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x10U))) 
                         ^ (0x7ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x11U))) 
                        ^ (0x3ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x12U))) ^ 
                       (0x1ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x13U))) ^ (0xff8U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x14U))) 
                     ^ (0x7f8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x15U))) ^ (0x3f8U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x16U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (0x10U & (((((((((((((((0x1fffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                   >> 7U)) 
                                    ^ (0xfffff0U & 
                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 8U))) ^ 
                                   (0x7ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 9U))) 
                                  ^ (0x3ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 0xaU))) 
                                 ^ (0x1ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 0xbU))) 
                                ^ (0xffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 0xcU))) 
                               ^ (0x7fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xdU))) 
                              ^ (0x3fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0x10U))) 
                           ^ (0x7ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x11U))) 
                          ^ (0x3ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x12U))) 
                         ^ (0x1ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x13U))) 
                        ^ (0xff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 0x14U))) ^ 
                       (0x7f0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x15U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (0x20U & ((((((0x7e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x15U)) ^ 
                           (0x3e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x16U))) ^ 
                          (0x1e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 0x17U))) ^ 
                         (0xe0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x18U))) ^ (0x60U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x19U))) 
                       ^ (0x20U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (1U & (((((((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                    ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 1U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 3U)) 
                                  ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 4U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 6U)) 
                                ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 8U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xaU)) 
                              ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                 >> 0xbU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xdU)) 
                            ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                               >> 0xfU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0x11U)) 
                          ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x13U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0x15U)) 
                        ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                           >> 0x17U)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x19U)) 
                      ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                         >> 0x1aU)) ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x1cU)) ^ 
                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                     >> 0x1eU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (2U & ((((((((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     << 1U) ^ (0x7ffffffeU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 1U))) 
                                   ^ (0x3ffffffeU & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 2U))) ^ (0xffffffeU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                      >> 4U))) 
                                 ^ (0x7fffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 5U))) 
                                ^ (0xfffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 8U))) 
                               ^ (0x7ffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 9U))) 
                              ^ (0x1ffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xbU))) 
                             ^ (0xffffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xcU))) 
                            ^ (0x1fffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0xfU))) 
                           ^ (0xfffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x10U))) 
                          ^ (0x1ffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x13U))) 
                         ^ (0xffeU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x14U))) ^ 
                        (0x1feU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x17U))) ^ (0xfeU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x18U))) 
                      ^ (0x3eU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x1aU))) ^ (0x1eU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x1bU))) 
                    ^ (2U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (4U & ((((((((((((((((((0xfffffffcU & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      << 1U)) ^ (0xfffffffcU 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any)) 
                                   ^ (0x7ffffffcU & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 1U))) ^ (0x7fffffcU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                      >> 5U))) 
                                 ^ (0x3fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 6U))) 
                                ^ (0x1fffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 7U))) 
                               ^ (0xfffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 8U))) 
                              ^ (0xffffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 0xcU))) 
                             ^ (0x7fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xdU))) 
                            ^ (0x3fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0xeU))) 
                           ^ (0x1fffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0xfU))) 
                          ^ (0xffcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x14U))) 
                         ^ (0x7fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x15U))) ^ 
                        (0x3fcU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x16U))) ^ (0x1fcU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x17U))) 
                      ^ (0x1cU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x1bU))) ^ (0xcU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x1cU))) 
                    ^ (4U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x1dU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (8U & (((((((((((((((0x7ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 1U)) 
                                 ^ (0x3ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                   >> 2U))) 
                                ^ (0x1ffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 3U))) 
                               ^ (0xffffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 7U))) 
                           ^ (0x1fff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0xfU))) 
                          ^ (0xfff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x10U))) 
                         ^ (0x7ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x11U))) 
                        ^ (0x3ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x12U))) ^ 
                       (0x1ff8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x13U))) ^ (0xff8U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x14U))) 
                     ^ (0x7f8U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x15U))) ^ (0x3f8U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x16U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (0x10U & (((((((((((((((0x1fffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                   >> 7U)) 
                                    ^ (0xfffff0U & 
                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 8U))) ^ 
                                   (0x7ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 9U))) 
                                  ^ (0x3ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 0xaU))) 
                                 ^ (0x1ffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 0xbU))) 
                                ^ (0xffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 0xcU))) 
                               ^ (0x7fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xdU))) 
                              ^ (0x3fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0x10U))) 
                           ^ (0x7ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x11U))) 
                          ^ (0x3ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x12U))) 
                         ^ (0x1ff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x13U))) 
                        ^ (0xff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 0x14U))) ^ 
                       (0x7f0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x15U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (0x20U & ((((((0x7e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x15U)) ^ 
                           (0x3e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x16U))) ^ 
                          (0x1e0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 0x17U))) ^ 
                         (0xe0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x18U))) ^ (0x60U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x19U))) 
                       ^ (0x20U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x1aU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtrff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m
                        : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff00U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                              >> 8U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                            >> 8U) : 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                         >> 8U))) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                                >> 0x10U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                              ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x10U)
                                              : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                                  >> 0x18U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                                ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                   >> 0x18U)
                                                : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m
                        : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff00U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                              >> 8U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                            >> 8U) : 
                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                         >> 8U))) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff0000U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                                >> 0x10U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                              ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x10U)
                                              : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff000000U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                                  >> 0x18U) : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                                ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                   >> 0x18U)
                                                : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wren 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                        & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                              >> 4U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                 >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                             >> 8U)
                           : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                              >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff00U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                 >> 5U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                             >> 8U)
                           : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                              >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                   >> 2U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                               >> 0x10U)
                             : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                                >> 0x10U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff0000U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                   >> 6U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                               >> 0x10U)
                             : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                >> 0x10U)) << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                     >> 3U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x18U)
                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                                  >> 0x18U)) << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff000000U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                     >> 7U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x18U)
                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                  >> 0x18U)) << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                  ? (((6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt))) 
                         & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)))) 
                     | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt)) 
                                          & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle1ff__din 
        = ((0x60U & (((0x20U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                << 5U)) | (0x40U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                                            >> 1U) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                            << 5U))) 
                     | (0xffffffe0U & (((- (IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                        << 5U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout))))) 
           | ((0x18U & (((((8U & ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                  << 3U)) | (0x10U 
                                             & ((- (IData)(
                                                           ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                              >> 1U) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                << 3U))) 
                          | (0x10U & ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                      << 3U))) | (8U 
                                                  & ((- (IData)(
                                                                ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren) 
                                                                   >> 2U) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2)) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                     << 3U))) 
                        | (0xfffffff8U & (((- (IData)(
                                                      (1U 
                                                       & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2))) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                           << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout))))) 
              | (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                          >> 2U)) & (2U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                  >> 3U)))) 
                     << 2U) & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0_shift_2B) 
                                  << 2U))) | ((((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                                  >> 2U)) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                       >> 3U)))) 
                                               << 2U) 
                                              & ((0xfffffffcU 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B) 
                                                    << 2U)))) 
                  | (0xfffffffcU & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                          >> 2U)) & 
                                      (0U == (3U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                               >> 3U)))) 
                                     << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))) 
                 | (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                             >> 1U)) & (1U == (3U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                >> 3U)))) 
                        << 1U) & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0_shift_2B) 
                                     << 1U))) | (((
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                                     >> 1U)) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                          >> 3U)))) 
                                                  << 1U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B) 
                                                       << 1U)))) 
                     | (0xfffffffeU & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen) 
                                             >> 1U)) 
                                         & (2U == (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                      >> 3U)))) 
                                        << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))) 
                    | (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen)) 
                          & (0U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                          >> 3U)))) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0_shift_2B))) 
                        | (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen)) 
                            & (2U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                            >> 3U)))) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B)))) 
                       | (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen)) 
                           & (1U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                           >> 3U)))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & ((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                     | (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                    | (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                    >> 9U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable)) 
           | (1U & (((((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f)) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                        >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                                      >> 8U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable)) 
           | (2U & ((((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right) 
                                      >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f)) 
                      << 1U) | (0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 1U))) 
                    & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 8U)) << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any 
        = ((0x40U & ((VL_REDXOR_32(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any) 
                      ^ VL_REDXOR_32((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp))) 
                     << 6U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any 
        = ((0x40U & ((VL_REDXOR_32(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any) 
                      ^ VL_REDXOR_32((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp))) 
                     << 6U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m)) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                      >> 6U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                 >> 4U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wren) 
              & ((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                               >> 2U))) | (0U == (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                     >> 2U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wren) 
               & ((1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                >> 2U))) | (1U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                      >> 2U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wren) 
               & ((2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                >> 2U))) | (2U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                      >> 2U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wren) 
               & ((3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                >> 2U))) | (3U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                      >> 2U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | ((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                               << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                                            >> 2U))) 
                  == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                 >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffffeU & (((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                                                 >> 0x14U))) 
                                  == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 1U)) << 1U)) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 1U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 1U)) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffffcU & (((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                                 >> 6U))) 
                                  == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 2U)) << 2U)) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 2U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 2U)) 
                                            << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffff8U & (((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                                 >> 0x18U))) 
                                  == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 3U)) << 3U)) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 3U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 3U)) 
                                            << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              << 0x1eU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                                           >> 2U))) 
                 == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                                >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffffeU & ((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                                                >> 0x14U))) 
                                 == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 1U)) << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffffcU & ((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                                              << 0x1aU) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                                >> 6U))) 
                                 == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 2U)) << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffff8U & ((((((0xffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                                                >> 0x18U))) 
                                 == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 3U)) << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & ((0xffffffeU & (((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                        >> 6U)) << 1U) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                      >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f) 
                                                 << 1U)) 
                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                    << 1U))) | (0x7fffffeU 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                     >> 5U) 
                                                    & ((~ 
                                                        ((((((((2U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                               | (6U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                             | (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f))) 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                             >> 8U)))) 
                                                       << 1U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                                      << 1U))))) 
           | (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                     & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r))) 
                        & (0U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                        >> 5U))))) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                        >> 5U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__goto_idle))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall 
        = ((3U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 5U))) | ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   >> 5U))) 
                                     & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                          >> 4U) & 
                                         (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf 
        = (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                            >> 5U))) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                            >> 3U) 
                                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1)))))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes) 
                  & (~ (((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                         | ((6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f))))) 
                        & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))))))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
                    >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)) 
           | (0xfffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
                              & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
                                 << 1U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
                                                >> 6U)) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
            & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
             >> 1U) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r_ff)
                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r_ff)))
                : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r_ff))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r_ff)
                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r_ff)))
                : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r_ff))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_lo)))
                : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen)
                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_hi)))
                : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xffffffffffc000ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | (IData)((IData)((0x3fffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                          ? (((0U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                   >> 2U))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                              ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                 >> 4U)
                                              : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                 >> 4U))
                                          : (((0U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                              ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                 >> 4U)
                                              : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 4U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xfffffff0003fffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                           ? (((1U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                  >> 4U))
                                           : (((1U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                  >> 4U)))))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xfffc000fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                           ? (((2U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                  >> 4U))
                                           : (((2U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                  >> 4U)))))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0x3ffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                           ? (((3U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_lo 
                                                  >> 4U))
                                           : (((3U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                    >> 2U))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                  >> 4U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                  >> 4U)))))) 
              << 0x2aU));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r))) 
                   & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                         | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                     & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                           & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))))
                  ? ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                      & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                            | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))))
                      ? ((IData)(2U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr))
                      : ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
              & ((((((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                     & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                    | (((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                       & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                   | (((0U == (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                      & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                            | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 1U) & (((((((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((1U == (3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 2U) & (((((((2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((2U == (3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 2U) | (0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 3U) & (((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((3U == (3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 3U) | (0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                      & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                     & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (2U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (4U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 2U) | (0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (8U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 3U) | (0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_real_rd_wp_unused 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                 & (0x3b80U != (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                           >> 0x11U)))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f))) 
            & (~ (((((((((6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en))) 
                        | (((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en))) 
                           & (3U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))) 
                       | (((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                          & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))) 
                      | ((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                     | ((7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                    | ((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                   | ((6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en))) 
                  | ((5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))))) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                  & (0x3b80U != (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                            >> 0x11U)))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any) 
            << 9U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f) 
                       << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                  << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state) 
                                             << 5U) 
                                            | ((0x10U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_uncacheable_bf) 
            << 8U) | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf) 
                         & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                  >> 7U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f))) 
                       << 7U) | (((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                                  << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r) 
                                             << 5U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f))) 
                                                   << 2U) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arvalid_ff) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arready_unq_ff) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                               >> 5U)))) 
                                                       & (0U 
                                                          != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_dma_access_ok 
        = (1U & ((((((0x3b80U != (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                             >> 0x11U))) 
                     | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 4U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1))))) 
                    | ((3U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                     >> 5U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf)))) 
                   | (0U == (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 5U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                    >> 9U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err 
        = ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error) 
               & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f))))
            : (((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error) 
                       << 1U)) | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error))) 
               & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error)
            ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
               ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error)
            ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
               ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity)
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[0U] 
        = (IData)((((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                  >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                    : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U] 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U]) 
           | (IData)(((((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                      >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U] 
        = ((0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U]) 
           | (0xffffff80U & ((IData)((((1U == (3U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                >> 2U))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                       : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U] 
        = ((0xffffc000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U]) 
           | ((0x7fU & ((IData)((((1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                >> 2U))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                  : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                       >> 2U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                                  : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U] 
        = ((0x3fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U]) 
           | (0xffffc000U & ((IData)((((2U == (3U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                >> 2U))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                       : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U] 
        = ((0xffe00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U]) 
           | ((0x3fffU & ((IData)((((2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                  >> 2U))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                    ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                    : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                           >> 2U))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                                      : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U]) 
           | (0xffe00000U & ((IData)((((3U == (3U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                >> 2U))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                       : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[4U] 
        = ((0x1fffffU & ((IData)((((3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                 >> 2U))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                   ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                   : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo)) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_addr_hi 
                                                       >> 2U))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_hi
                                                  : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__dccm_wr_data_lo) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
        = ((0xfffc0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]) 
           | (0x3ffffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                           : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]) 
           | (0xfffc0000U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                               : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]) 
           | (0xfU & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                        : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r) 
                      >> 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((0xffc0000fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]) 
           | (0x3ffff0U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r) 
                           << 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
        = ((0x3fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]) 
           | (0xffc00000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                               : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r) 
                             << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
        = (0xffU & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r
                      : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r) 
                    >> 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfff0U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                       : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xff0fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf0U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                         ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                             >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                         : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                             >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                       << 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xf0ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf00U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                              >> 8U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                          : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                              >> 8U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                        << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                               >> 0xcU) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                           : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                               >> 0xcU) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U])
                        : ((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff00U & (((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                >> 8U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff0000U & (((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 2U)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 2U)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff000000U & (((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 3U)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 3U)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U])
                        : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff00U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 5U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 5U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                >> 8U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff0000U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 6U)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff000000U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 7U)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 7U)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 8U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U])
                        : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 8U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff00U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 9U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 9U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                >> 8U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xaU)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff000000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xbU)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xbU)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U])
                        : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r
                            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff00U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 0xdU)) 
                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                        >> 1U))) ? 
                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                               >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                         >> 8U)) : 
                          ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xdU)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                                   >> 1U)))
                            ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                               >> 8U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                         >> 8U))) << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff0000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xeU)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                              >> 0x10U))
                             : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xeU)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                              >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                   >> 0x18U))
                               : ((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xfU)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fbwrite_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_sigs_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err) 
                  << 2U)) | ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_access_fault_f) 
                                    << 1U)) | ((2U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_access_fault_f)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc 
        = ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)) 
           | ((0x40U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                  >> 0x26U)) ^ (0x40U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
                        << 6U)) | ((0x20U & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                      >> 0x1fU)) 
                                             << 5U)) 
                                   | ((0x10U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 0xfU)) 
                                                << 4U)) 
                                      | ((8U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 7U)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                            >> 3U)) 
                                                   << 2U)) 
                                            | (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
        = ((0xffffffff00000000ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data) 
           | (IData)((IData)(((0xfc000000U & ((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                       >> 0x20U)) 
                                              << 0x1aU)) 
                              | ((0x3fff800U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 0x10U)) 
                                                << 0xbU)) 
                                 | ((0x7f0U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 8U)) 
                                               << 4U)) 
                                    | ((0xeU & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 4U)) 
                                                << 1U)) 
                                       | (1U & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 2U))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)) 
           | ((0x2000U & (((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                    >> 0x26U)) ^ (0x40U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
                          << 0xdU)) | ((0x1000U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                            >> 0x1fU)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                     >> 0xfU)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 7U)) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                             >> 3U)) 
                                                    << 9U)) 
                                                | (0x180U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity) 
                                                      << 7U))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
        = ((0xffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data) 
           | ((QData)((IData)(((0xfc000000U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 0x20U)) 
                                               << 0x1aU)) 
                               | ((0x3fff800U & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 0x10U)) 
                                                 << 0xbU)) 
                                  | ((0x7f0U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 8U)) 
                                                << 4U)) 
                                     | ((0xeU & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 4U)) 
                                                 << 1U)) 
                                        | (1U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 2U))))))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err 
        = (((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error 
        = ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]
                        : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
                                        >> 0x12U)) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                            << 0x1cU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                                         >> 4U)) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                        ? ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                            << 0xaU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                                        >> 0x16U)) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))))) 
                   & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)
                       : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 1U))))) 
                   & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 2U))))) 
                   & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 8U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 3U))))) 
                   & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk2__DOT__miscff__din 
        = ((0x3f000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
                          ? ((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err))
                                ? 1U : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f)
                                         ? 2U : ((4U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout))
                                                  ? 3U
                                                  : 0U))) 
                              << 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in))
                          : (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                             >> 0xcU)) << 0xcU)) | 
           ((0xfc0U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
                         ? ((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err))
                               ? 1U : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f)
                                        ? 2U : ((4U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout))
                                                 ? 3U
                                                 : 0U))) 
                             << 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in))
                         : (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout 
                            >> 6U)) << 6U)) | (0x3fU 
                                               & ((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen))
                                                   ? 
                                                  ((((0U 
                                                      != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f)
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout))
                                                        ? 3U
                                                        : 0U))) 
                                                    << 4U) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in))
                                                   : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
            ? ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error))
                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr)))
                : (((QData)((IData)(((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data)
                                      : (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
                                                 >> 0x20U))))) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
            << 9U) | ((0x100U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                  << 8U) | (0xffffff00U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                  << 8U))))) 
                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                          << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                     << 6U) | ((0x3fffffe0U 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                     << 5U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                       >> 2U)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                                                      << 5U))) 
                                               | ((0x3ffffff0U 
                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                        << 4U) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                          >> 2U)) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m) 
                                                         << 4U))) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 5U)) 
                                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__force_halt))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din 
        = ((0x40U & (((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                         << 6U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)) 
                                    << 6U))) | ((0x30U 
                                                 & ((((- (IData)(
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2) 
                                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((- (IData)(
                                                                      (1U 
                                                                       & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                                           << 4U) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
                                                | ((0xcU 
                                                    & (((((- (IData)(
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
                                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                         << 2U) 
                                                        | (0x3ffffffcU 
                                                           & (((- (IData)(
                                                                          ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1) 
                                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                               << 2U) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                 >> 2U)))) 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                                          << 2U))) 
                                                   | (3U 
                                                      & (((((- (IData)(
                                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                           | ((- (IData)(
                                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                 >> 4U))) 
                                                          | ((- (IData)(
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))))) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))))) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r)
                ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                    << 0x1bU) | (0x7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                : ((0xf8000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect) 
                   | (0x7ffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                    + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error))))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ecc_dat0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
              & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error))
            ? (((QData)((IData)((0x7fU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                           ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)
                                           : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc) 
                                              >> 7U))))) 
                << 0x30U) | (((QData)((IData)(((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data)
                                                : (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
                                                           >> 0x20U))))) 
                              << 0x10U) | (QData)((IData)(
                                                          (0xffffU 
                                                           & ((1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                                               ? 
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout 
                                                               >> 1U)
                                                               : 
                                                              ((IData)(1U) 
                                                               + 
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout 
                                                                >> 1U))))))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
            ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                         ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                  ? 0U : 3U))) : ((2U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                     ? 0U
                                                     : 3U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)
                                                     ? 4U
                                                     : 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
            } else {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status 
                    = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_dma_access_ok) 
              & (3U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                >> 1U)) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__genblk2__DOT__miscff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk2__DOT__miscff__din 
                   ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk2__DOT__miscff__din
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__bundle2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status)
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr_ff)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req) 
            & (0x3b80U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                      >> 0x12U)))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count) 
                      >= (7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0x10U))) ? ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))))
                          ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)))
                  ? ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
                     & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr) 
            << 8U) | ((0xe0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                >> 3U)) | ((0x18U & 
                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr 
                                             << 1U)) 
                                           | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                     >> 1U)) 
                                                 | (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din 
        = (0x20U | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                     << 9U) | ((0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff) 
                                            << 8U) 
                                           | (0xffffff00U 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))) 
                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt)) 
                                             << 8U))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final) 
                                   << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                                              << 6U) 
                                             | (((((((vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                                                      >> 8U) 
                                                     & (7U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count))) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
                                                   & ((5U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                      | (5U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final))) 
                                                 << 4U) 
                                                | ((8U 
                                                    & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))) 
                                                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent)) 
                                                           << 3U)) 
                                                       & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                          << 3U))) 
                                                   | ((4U 
                                                       & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat)) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req))) 
                                                           << 2U) 
                                                          | (0xfffffffcU 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                                   << 2U))))) 
                                                      | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_dma_access_ok) 
                                                            & (3U 
                                                               != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error))) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (1U & ((((((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error))) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m)))) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                        >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                     >> 5U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (2U & (((((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                       >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                                                   >> 1U)) 
                        | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr)) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m))) 
                     << 1U) | (0xffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 4U))))));
    if (((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((0x7fffffffffULL & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                          >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U] 
            = ((0xffffff80U & ((IData)((0x7fffffffffULL 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                           >> 0x10U))) 
                               << 7U)) | (IData)(((0x7fffffffffULL 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                      >> 0x10U)) 
                                                  >> 0x20U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & ((0x7fU & ((IData)((0x7fffffffffULL 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                >> 0x10U))) 
                                    >> 0x19U)) | (0xffffff80U 
                                                  & ((IData)(
                                                             ((0x7fffffffffULL 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                                  >> 0x10U)) 
                                                              >> 0x20U)) 
                                                     << 7U))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((((QData)((IData)((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)))) 
                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata))));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U] 
            = ((0xffffff80U & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata 
                                        >> 0x20U)) 
                               << 7U)) | (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata))) 
                                                  >> 0x20U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)) 
                          | (0x7fU & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_wdata 
                                               >> 0x20U)) 
                                      >> 0x19U))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write))) 
           | ((0x3b80U == (0x3fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                      >> 0x11U))) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)) 
           | (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_req) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_write));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size 
        = ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_sz));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
        = (0x1ffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req)) 
                        & (3U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))
                        ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_mem_addr 
                           >> 1U) : (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_req))) 
                                      & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))
                                      ? (0x1fffeU & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout) 
                                          << 1U)) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_misc_bits__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[0U] 
        = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U])))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U] 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U]) 
           | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U])))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U] 
        = ((0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U]) 
           | (0xffffff80U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                            >> 7U)))) 
                             << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U] 
        = ((0xffffc000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U]) 
           | ((0x7fU & ((IData)((0x7fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                >> 7U)))) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                       >> 7U))) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U] 
        = ((0x3fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U]) 
           | (0xffffc000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U]))))) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U] 
        = ((0xffe00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U]) 
           | ((0x3fffU & ((IData)((0x7fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U]))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x7fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U])))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U]) 
           | (0xffe00000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                            >> 7U)))) 
                             << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U] 
        = ((0x1fffffU & ((IData)((0x7fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                 >> 7U)))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                       >> 7U))) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                  >> 3U)) & (((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                | ((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 3U))) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 4U))) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                                | ((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                               | ((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                              | ((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift))) 
                                                                             | ((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d))) 
                                                                            | ((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                                           | ((9U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                              & (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                          | ((0xaU 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                             & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 6U) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                         | ((0xbU 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                            & (2U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                        | ((0xcU 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                           & (3U 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                       | (((0xdU 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                           & (2U 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                             >> 4U))) 
                                                                      | (((0xeU 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                          & (3U 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                            >> 4U))) 
                                                                     | ((0xfU 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                        & (4U 
                                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                       & (5U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                   | ((0x12U 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                      & (6U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                  | ((0x11U 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                     & (7U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                 | ((0x13U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                    & (8U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                | ((0x14U 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                   & (9U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                               | ((0x15U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                  & (0xaU 
                                                                     == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                              | ((0x16U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                 & (0xbU 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                             | ((0x17U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                & (0xcU 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                            | ((0x18U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                               & ((0xdU 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                  | (0xeU 
                                                                     == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                           | ((0x19U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                              & (((IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                           >> 0x37U)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                          | ((0x1aU 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                             & (((IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                          >> 0x36U)) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                         | ((0x1bU 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                            & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                 >> 7U) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                        | ((0x1cU 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall))) 
                                                       | ((0x1eU 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                      | ((0x1fU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall))) 
                                                     | ((0x20U 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall))) 
                                                    | ((0x22U 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any))) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x3ffU 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any))) 
                                                  | ((0x24U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any))) 
                                                 | ((0x25U 
                                                     == 
                                                     (0x3ffU 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                    & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                        | (0U 
                                                           != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)))) 
                                                | ((0x26U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                                               | ((0x27U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                                              | ((0x28U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                             | ((0x2aU 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                            | ((0x2bU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn))) 
                                           | ((0x2cU 
                                               == (0x3ffU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned))) 
                                          | ((0x2dU 
                                              == (0x3ffU 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 2U))) 
                                         | ((0x2eU 
                                             == (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error))) 
                                        | ((0x2fU == 
                                            (0x3ffU 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 1U))) 
                                       | ((0x30U == 
                                           (0x3ffU 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy))) 
                                      | ((0x31U == 
                                          (0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                         & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout))) 
                                     | ((0x32U == (0x3ffU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                        & ((~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout) 
                                           & (0U != 
                                              ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                >> 0x11U) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie)))))) 
                                    | ((0x36U == (0x3ffU 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                       & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                   | ((0x37U == (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                      & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 5U)) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                  | ((0x38U == (0x3ffU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                     & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            >> 4U)) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                 | ((0x200U == (0x3ffU 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 2U))) | (
                                                   (0x201U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read))) 
                               | ((0x202U == (0x3ffU 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write))) 
                              | ((0x203U == (0x3ffU 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read))) 
                             | ((0x204U == (0x3ffU 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 4U)) << 1U) & (((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 3U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 1U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                                                                << 1U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 1U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                                | (0x7fffffeU 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 5U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 1U)) 
                                                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 1U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                               | (0x1ffffffeU 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U)))) 
                                                                              | (0x1ffffffeU 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U)))) 
                                                                             | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (4U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                            | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 1U)) 
                                                                           | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                               & (6U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 1U)) 
                                                                          | (((0x11U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                              & (7U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 1U)) 
                                                                         | (((0x13U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                             & (8U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 1U)) 
                                                                        | (((0x14U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                            & (9U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 1U)) 
                                                                       | (((0x15U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                           & (0xaU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 1U)) 
                                                                      | (((0x16U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                          & (0xbU 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 1U)) 
                                                                     | (((0x17U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                         & (0xcU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                        << 1U)) 
                                                                    | (((0x18U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                        & ((0xdU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           | (0xeU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                       << 1U)) 
                                                                   | (((0x19U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                       & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 1U)) 
                                                                  | (((0x1aU 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                      & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                     << 1U)) 
                                                                 | (0x3fffffeU 
                                                                    & (((0x1bU 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                        << 1U) 
                                                                       & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                            >> 6U) 
                                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                              << 1U)) 
                                                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                             << 1U))))) 
                                                                | (((0x1cU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                   << 1U)) 
                                                               | (((0x1eU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                  << 1U)) 
                                                              | (((0x1fU 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xaU)))) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                 << 1U)) 
                                                             | (((0x20U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xaU)))) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                << 1U)) 
                                                            | (((0x22U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xaU)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                               << 1U)) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xaU)))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                              << 1U)) 
                                                          | (((0x24U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xaU)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                             << 1U)) 
                                                         | (((0x25U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xaU)))) 
                                                             & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                 | (0U 
                                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                            << 1U)) 
                                                        | (((0x26U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xaU)))) 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                           << 1U)) 
                                                       | (((0x27U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xaU)))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                          << 1U)) 
                                                      | (((0x28U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xaU)))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                         << 1U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xaU)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 1U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xaU)))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                       << 1U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xaU)))) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 1U)) 
                                                  | (0x7ffffffeU 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xaU)))) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                           >> 1U)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xaU)))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                    << 1U)) 
                                                | (0xfffffffeU 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xaU)))) 
                                                       << 1U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xaU)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                  << 1U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xaU)))) 
                                                  & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)) 
                                                 << 1U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xaU)))) 
                                                 & ((~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 1U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xaU)))) 
                                                & (0xfU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 1U)) 
                                           | (0xffffffeU 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xaU)))) 
                                                  << 1U) 
                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 1U) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 4U)) 
                                                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 1U))))) 
                                          | (0x1ffffffeU 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xaU)))) 
                                                 << 1U) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 1U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 3U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 1U))))) 
                                         | (0x7ffffffeU 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xaU)))) 
                                                << 1U) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  >> 1U)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xaU)))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                           << 1U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xaU)))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                          << 1U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xaU)))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                       << 1U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xaU)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)) 
                                                  << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 5U)) << 2U) & (((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                                | (0x3ffffffcU 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 2U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                                                                << 2U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 2U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                                | (0xffffffcU 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 2U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                               | (0x3ffffffcU 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 2U)))) 
                                                                              | (0x3ffffffcU 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 2U)))) 
                                                                             | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (4U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                            | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 2U)) 
                                                                           | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                               & (6U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 2U)) 
                                                                          | (((0x11U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                              & (7U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 2U)) 
                                                                         | (((0x13U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                             & (8U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 2U)) 
                                                                        | (((0x14U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                            & (9U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 2U)) 
                                                                       | (((0x15U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                           & (0xaU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 2U)) 
                                                                      | (((0x16U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                          & (0xbU 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 2U)) 
                                                                     | (((0x17U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                         & (0xcU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                        << 2U)) 
                                                                    | (((0x18U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                        & ((0xdU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           | (0xeU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                       << 2U)) 
                                                                   | (((0x19U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                       & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 2U)) 
                                                                  | (((0x1aU 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                      & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                     << 2U)) 
                                                                 | (0x7fffffcU 
                                                                    & (((0x1bU 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                            >> 5U) 
                                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                              << 2U)) 
                                                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                             << 2U))))) 
                                                                | (((0x1cU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                   << 2U)) 
                                                               | (((0x1eU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                  << 2U)) 
                                                              | (((0x1fU 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x14U)))) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                 << 2U)) 
                                                             | (((0x20U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x14U)))) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                << 2U)) 
                                                            | (((0x22U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x14U)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                               << 2U)) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x14U)))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                              << 2U)) 
                                                          | (((0x24U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x14U)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                             << 2U)) 
                                                         | (((0x25U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x14U)))) 
                                                             & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                 | (0U 
                                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                            << 2U)) 
                                                        | (((0x26U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x14U)))) 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                           << 2U)) 
                                                       | (((0x27U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x14U)))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                          << 2U)) 
                                                      | (((0x28U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x14U)))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                         << 2U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x14U)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 2U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x14U)))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                       << 2U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x14U)))) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 2U)) 
                                                  | (0xfffffffcU 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x14U)))) 
                                                         << 2U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x14U)))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                    << 2U)) 
                                                | (0xfffffffcU 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x14U)))) 
                                                       << 2U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         << 1U)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x14U)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                  << 2U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x14U)))) 
                                                  & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)) 
                                                 << 2U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x14U)))) 
                                                 & ((~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 2U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x14U)))) 
                                                & (0xfU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 2U)) 
                                           | (0x1ffffffcU 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x14U)))) 
                                                  << 2U) 
                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 2U) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 3U)) 
                                                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 2U))))) 
                                          | (0x3ffffffcU 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x14U)))) 
                                                 << 2U) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 2U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 2U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 2U))))) 
                                         | (0xfffffffcU 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x14U)))) 
                                                << 2U) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x14U)))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                           << 2U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x14U)))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                          << 2U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x14U)))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                       << 2U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x14U)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)) 
                                                  << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 6U)) << 3U) & (((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                                | (0x7ffffff8U 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 3U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                                                                << 3U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 3U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                                | (0x1ffffff8U 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 3U)) 
                                                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 3U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                               | (0x7ffffff8U 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 1U)))) 
                                                                              | (0x7ffffff8U 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 1U)))) 
                                                                             | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (4U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                            | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (5U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 3U)) 
                                                                           | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                               & (6U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 3U)) 
                                                                          | (((0x11U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                              & (7U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 3U)) 
                                                                         | (((0x13U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                             & (8U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 3U)) 
                                                                        | (((0x14U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                            & (9U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 3U)) 
                                                                       | (((0x15U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                           & (0xaU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 3U)) 
                                                                      | (((0x16U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                          & (0xbU 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 3U)) 
                                                                     | (((0x17U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                         & (0xcU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                        << 3U)) 
                                                                    | (((0x18U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                        & ((0xdU 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           | (0xeU 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                       << 3U)) 
                                                                   | (((0x19U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                       & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 3U)) 
                                                                  | (((0x1aU 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                      & (((IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                     << 3U)) 
                                                                 | (0xffffff8U 
                                                                    & (((0x1bU 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                        << 3U) 
                                                                       & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                            >> 4U) 
                                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                              << 3U)) 
                                                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                             << 3U))))) 
                                                                | (((0x1cU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall)) 
                                                                   << 3U)) 
                                                               | (((0x1eU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                  << 3U)) 
                                                              | (((0x1fU 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x1eU)))) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                 << 3U)) 
                                                             | (((0x20U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x1eU)))) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                << 3U)) 
                                                            | (((0x22U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x1eU)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any)) 
                                                               << 3U)) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x1eU)))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any)) 
                                                              << 3U)) 
                                                          | (((0x24U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x1eU)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any)) 
                                                             << 3U)) 
                                                         | (((0x25U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x1eU)))) 
                                                             & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                 | (0U 
                                                                    != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                            << 3U)) 
                                                        | (((0x26U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x1eU)))) 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                           << 3U)) 
                                                       | (((0x27U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x1eU)))) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                          << 3U)) 
                                                      | (((0x28U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x1eU)))) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                         << 3U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x1eU)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 3U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x1eU)))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn)) 
                                                       << 3U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x1eU)))) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 3U)) 
                                                  | (0xfffffff8U 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x1eU)))) 
                                                         << 3U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                           << 1U)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x1eU)))) 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error)) 
                                                    << 3U)) 
                                                | (0xfffffff8U 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x1eU)))) 
                                                       << 3U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         << 2U)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x1eU)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy)) 
                                                  << 3U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x1eU)))) 
                                                  & (~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)) 
                                                 << 3U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x1eU)))) 
                                                 & ((~ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 3U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x1eU)))) 
                                                & (0xfU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 3U)) 
                                           | (0x3ffffff8U 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x1eU)))) 
                                                  << 3U) 
                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 3U) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 2U)) 
                                                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 3U))))) 
                                          | (0x7ffffff8U 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x1eU)))) 
                                                 << 3U) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 3U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 1U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 3U))))) 
                                         | (0xfffffff8U 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x1eU)))) 
                                                << 3U) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  << 1U)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x1eU)))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read)) 
                                           << 3U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x1eU)))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write)) 
                                          << 3U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x1eU)))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read)) 
                                       << 3U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x1eU)))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write)) 
                                                  << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_address__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en)
                       ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                          >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_address__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en)
                       ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                          >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_data__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffffULL & (((((((0x7fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 2U)) 
                                   == (0x7fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  >> 1U))) 
                                  & (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                             >> 1U)) 
                                      == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                     | (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid)) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren)) 
                               | ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_buf_correct_ecc)))
                               ? (((((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                            >> 1U)) 
                                     == (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                       >> 1U)) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size)))))
                                   ? (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                       >> 7U)) : (((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U]))))
                               : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_data__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_data__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffffULL & (((((((0x7fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 2U)) 
                                   == (0x7fffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  >> 0x11U))) 
                                  & (((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                             >> 1U)) 
                                      == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                >> 0x10U))) 
                                     | (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size))))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren)) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_buf_correct_ecc)))
                               ? (((((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                            >> 1U)) 
                                     == (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                               >> 0x10U))) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                       >> 1U)) | ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                   >> 0x10U) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size)))))
                                   ? (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[2U])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                       >> 7U)) : (((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_data[0U]))))
                               : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_data__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din 
        = ((0x1fffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                     | vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
        = (0x1ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                       + ((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wr_size)))
                           ? 2U : 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[0U] 
        = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[0U])))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[1U] 
        = ((0xffffff80U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[1U]) 
           | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[0U])))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[1U] 
        = ((0x7fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[1U]) 
           | (0xffffff80U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                          << 0x39U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U])) 
                                               >> 7U))))) 
                             << 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[2U] 
        = ((0xffffc000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[2U]) 
           | ((0x7fU & ((IData)((0x7fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                   << 0x39U) | (((QData)((IData)(
                                                                 vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U])) 
                                                   >> 7U))))) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U])) 
                                                          >> 7U)))) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[2U] 
        = ((0x3fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[2U]) 
           | (0xffffc000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                          << 0x32U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                             << 0x12U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                               >> 0xeU))))) 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[3U] 
        = ((0xffe00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[3U]) 
           | ((0x3fffU & ((IData)((0x7fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                        >> 0xeU))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x7fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                                            << 0x12U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U])) 
                                                              >> 0xeU)))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[3U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[3U]) 
           | (0xffe00000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                          << 0xbU) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                            >> 0x15U)))) 
                             << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data[4U] 
        = ((0x1fffffU & ((IData)((0x7fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                    << 0xbU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                                >> 0x15U)))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U])) 
                                                     << 0xbU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U])) 
                                                       >> 0x15U))) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
                     >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r) 
                                >> 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
                     >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r) 
                                >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep) 
                     >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r) 
                                >> 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk12__DOT__mstatus_ff__din 
        = ((0x4000000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_en) 
                           << 0x1aU) | (0xfc000000U 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                  & (0xbc0U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))) 
                                              << 0x1aU))))) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_r) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_r))) 
                 << 0x19U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r) 
                               << 0x19U) | (0xfe000000U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                               << 0x15U)))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                  << 0x19U)) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
                                 << 0x18U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
                                               << 0x17U) 
                                              | ((((((0U 
                                                      != 
                                                      (0x7ffffffU 
                                                       & (((IData)(0xffffffffU) 
                                                           << 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                               >> 0x1bU))) 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect))) 
                                                     | (0U 
                                                        != 
                                                        (0x7ffffffU 
                                                         & (((IData)(0xffffffffU) 
                                                             << 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                                                 >> 0x1bU))) 
                                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect)))) 
                                                    | (0U 
                                                       != 
                                                       (0x7ffffffU 
                                                        & (((IData)(0xffffffffU) 
                                                            << 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                                                >> 0x1bU))) 
                                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect)))) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns) 
                                                      << 0x15U) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__mexintpend) 
                                                            << 0x13U) 
                                                           | (0x60000U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                 << 0xdU)))))) 
                                                 | ((0x10000U 
                                                     & (((((0xffffffU 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel 
                                                               >> 8U)) 
                                                           + 
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                + 
                                                                (0xffU 
                                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                                               >> 8U))) 
                                                          >> 8U) 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)) 
                                                            << 0x10U)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in) 
                                                           << 0x10U))) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable) 
                                                        << 0xfU) 
                                                       | ((0x4000U 
                                                           & ((((((0xffffffU 
                                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl 
                                                                      >> 8U)) 
                                                                  + 
                                                                  (1U 
                                                                   & (((IData)(1U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                                                      >> 8U))) 
                                                                 >> 0xaU) 
                                                                & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)) 
                                                                   << 0xeU)) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r) 
                                                                  << 0xeU)) 
                                                              & ((~ 
                                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                   >> 0xdU)) 
                                                                 << 0xeU))) 
                                                          | ((0x2000U 
                                                              & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req) 
                                                                   << 0xdU) 
                                                                  | (0xffffe000U 
                                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)) 
                                                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)) 
                                                                    << 0xdU))) 
                                                             | ((0x1e00U 
                                                                 & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r)
                                                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_pl)
                                                                      : 
                                                                     (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                                       & (0xbcbU 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                                                       ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                                       : 
                                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                       >> 9U))) 
                                                                    << 9U)) 
                                                                | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) 
                                                                     & (0x7cbU 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                                                    << 8U) 
                                                                   | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
                                                                        & (0x7cbU 
                                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted) 
                                                                             << 2U) 
                                                                            | (3U 
                                                                               & (((((2U 
                                                                                & (((- (IData)(
                                                                                ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r)) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                                << 1U)) 
                                                                                | ((- (IData)(
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))) 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 2U)))) 
                                                                                | ((- (IData)(
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                                                                                & (2U 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                                                >> 1U))))) 
                                                                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt))) 
                                                                                & (1U 
                                                                                | (2U 
                                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)))) 
                                                                                | ((- (IData)(
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                                                                                & ((2U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 3U))))) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt)))))) 
                                                                                & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)))))))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_index_f__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din 
                   ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
               >> 1U) & ((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                       >> 1U)) == (0xffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                      >> 0x10U))) 
                          & (0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                          >> 1U)))) 
                         | (((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                         >> 1U)) == 
                             (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                         >> 0x10U))) 
                            & (0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                            >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
              & ((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                               >> 1U)) == (0xffffU 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                  & (0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                  >> 1U)))) | (((0xffffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                    >> 1U)) 
                                                == 
                                                (0xffffU 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1)) 
           | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
                             & (((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 1U)) 
                                   == (0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  >> 0x10U))) 
                                  & (1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                                  >> 1U)))) 
                                 | (((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                 >> 1U)) 
                                     == (0xffffU & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                          >> 0x10U))) 
                                    & (1U == (3U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                               >> 1U))))) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
               & ((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U)) == (0xffffU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                   & (1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                   >> 1U)))) | (((0xffffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                     >> 1U)) 
                                                 == 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                       >> 1U)))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1)) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
                              << 1U) & (((((0xffffU 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 1U)) 
                                           == (0xffffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  >> 0x10U))) 
                                          & (2U == 
                                             (3U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 1U)))) 
                                         | (((0xffffU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                 >> 1U)) 
                                             == (0xffffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                    >> 0x10U))) 
                                            & (2U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                   >> 1U))))) 
                                        << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
               & ((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U)) == (0xffffU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                   & (2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                   >> 1U)))) | (((0xffffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                     >> 1U)) 
                                                 == 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                                & (2U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                       >> 1U)))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1)) 
           | (0xfffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
                              << 2U) & (((((0xffffU 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 1U)) 
                                           == (0xffffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                  >> 0x10U))) 
                                          & (3U == 
                                             (3U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                               >> 1U)))) 
                                         | (((0xffffU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                 >> 1U)) 
                                             == (0xffffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address 
                                                    >> 0x10U))) 
                                            & (3U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                   >> 1U))))) 
                                        << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid) 
               & ((((0xffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U)) == (0xffffU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                   & (3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                   >> 1U)))) | (((0xffffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                     >> 1U)) 
                                                 == 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address)) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                       >> 1U)))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden) 
              & ((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                               >> 1U))) | (0U == (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                     >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden) 
               & ((1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (1U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden) 
               & ((2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (2U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden) 
               & ((3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (3U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren) 
              & ((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                               >> 1U))) | (0U == (3U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                     >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren) 
               & ((1U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (1U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren) 
               & ((2U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (2U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_wren) 
               & ((3U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                >> 1U))) | (3U == (3U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                      >> 1U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                : (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                           >> 0x20U))) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk12__DOT__mstatus_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk12__DOT__mstatus_ff__din 
                   ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk12__DOT__mstatus_ff__din
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__red_lru__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_buf_correct_ecc) 
                  | ((((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)) 
                       | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rden)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_correction_state)))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_buf_correct_ecc)
                      ? (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru))
                      : (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank 
        = ((0xffffffffffc000ULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank) 
           | (IData)((IData)((0x3fffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                             >> 3U)
                                          : ((0U == 
                                              (3U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                >> 1U)))
                                              ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                 >> 3U)
                                              : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                                 >> 3U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank 
        = ((0xfffffff0003fffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank))
                                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                              >> 3U)
                                           : ((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                   >> 1U)))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                  >> 3U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                                  >> 3U)))))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank 
        = ((0xfffc000fffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank))
                                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                              >> 3U)
                                           : ((2U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                   >> 1U)))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                  >> 3U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                                  >> 3U)))))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken)) 
           | (8U & ((0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank))) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank 
        = ((0x3ffffffffffULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank) 
           | ((QData)((IData)((0x3fffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank))
                                           ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                              >> 3U)
                                           : ((3U == 
                                               (3U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                   >> 1U)))
                                               ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc 
                                                  >> 3U)
                                               : (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__iccm_rw_addr 
                                                  >> 3U)))))) 
              << 0x2aU));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_combo__TOP__rvfpgasim__veerwolf__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
        = ((0xfffff800U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U]) 
           | vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
        = ((0x7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U]) 
           | (0xfffff800U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
                             << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                      >> 0x15U)) | (0xfffff800U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                                                   << 0xbU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
        = ((0xffc00000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U]) 
           | ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                         >> 0x15U)) | (0xfffff800U 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                          << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
        = ((0x3fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U]) 
           | (0xffc00000U & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
                             << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[1U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[2U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[3U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[4U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[5U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[6U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[7U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[8U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[9U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xaU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xbU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xcU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xdU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xeU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0xfU] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x10U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x11U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x12U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
        = ((0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x13U] 
                         >> 0xaU)) | (0xffc00000U & 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                                       << 0x16U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
        = (0x3fffffU & (vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__mst_reqs_o[0x14U] 
                        >> 0xaU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__cntr_clk 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__eclk_gate)
            : (IData)(vlTOPp->clk));
    if ((0x100U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_clk 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__capt_pad_i;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_clk 
            = (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__capt_pad_i)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_clk 
            = vlTOPp->clk;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_clk 
            = (1U & (IData)(vlTOPp->clk));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp 
        = ((0xf00U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                       << 0x16U) | (0x3fff00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                 >> 0xaU)))) 
           | (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                        << 0x16U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                                     >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp 
        = ((0xf00U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                       << 0xbU) | (0x700U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                             >> 0x15U)))) 
           | (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                                    >> 0x15U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp 
        = ((0xf00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U]) 
           | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[1U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[1U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[2U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[3U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[3U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[4U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[5U] 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[5U];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0xfe000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0x7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | (0xfffff800U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                              << 0x12U) | (0x3f800U 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U] 
                                              >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
        = ((0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                                        >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                      >> 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0xfe000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[7U] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
        = ((0x1ffffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                             >> 0x12U))) | (0xfe000000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                                               << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0xfffc0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | (0x3ffffU & ((0x1ffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU] 
                                         << 0xeU)) 
                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                             >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1eU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
        = ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]) 
           | (0xfffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | ((0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U]) 
              | (0x1ffffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | (0xfffc0000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                              << 0x1cU) | (0xffc0000U 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                              >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
        = ((0x3ffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                                        >> 4U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0xfffff800U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | (0x7ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                        >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | (0xe0000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                             << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
        = ((0x1fffffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                                           << 0xeU)) 
                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                              >> 0x12U))) | (0xe0000000U 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                                                << 0xeU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
        = (0x3fffffU & ((0x1fffc000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                                        << 0xeU)) | 
                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                         >> 0x12U)));
}

VL_INLINE_OPT void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_sequent__TOP__rvfpgasim__veerwolf__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdly__wb_s2m_gpio_err;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__msr;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    CData/*7:0*/ __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    CData/*0:0*/ __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    CData/*3:0*/ __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    CData/*4:0*/ __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    CData/*3:0*/ __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*2:0*/ __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    CData/*0:0*/ __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    SData/*9:0*/ __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    // Body
    __Vdly__uart16550_0__DOT__regs__DOT__msi_reset 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset;
    __Vdly__wb_s2m_gpio_err = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err;
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r;
    __Vdly__uart16550_0__DOT__regs__DOT__msr = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl;
    __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__rstate 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rstate;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__tstate 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tstate;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__dlc 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dlc;
    __Vdly__uart16550_0__DOT__regs__DOT__rf_count = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count;
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__tf_count 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count;
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset) {
            __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 0U;
        } else {
            if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read) {
                __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__msi_reset = 1U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition));
    __Vdly__wb_s2m_gpio_err = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__pextc_sampled 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__extc_in;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__pextc_sampled = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    __Vdly__uart16550_0__DOT__regs__DOT__lsr5r = (1U 
                                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)) 
                                                     | ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5_d)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)) 
                 | ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write)) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6_d)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7_d))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4_d))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3_d))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2_d))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_s));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_irq 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd)
               ? (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))
               : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd)
                      ? (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read))
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd)
                          ? (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read)))
                          : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read))))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__ext_pad_s 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__sync;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__rst_l_sync 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__rstl_syncff__DOT__din_ff1) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__ext_pad_s = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__rst_l_sync = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = 0ULL;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_ack 
            = (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                    >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_ack))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err))) 
               & 1U);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_ack = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is = 0U;
    }
    __Vtableidx2 = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is) 
                     << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is) 
                                << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_uart_ack 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vtable2___PVT__wb_s2m_uart_ack
        [__Vtableidx2];
    if ((2U & vlSymsp->TOP__rvfpgasim__veerwolf.__Vtablechg2
         [__Vtableidx2])) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wbstate 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate
            [__Vtableidx2];
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wre 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre
        [__Vtableidx2];
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0_d))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xf0U & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset)
                 ? 0U : (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr) 
                                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals))))));
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 
            ((0xfU & (IData)(__Vdly__uart16550_0__DOT__regs__DOT__msr)) 
             | ((((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                   ? (1U & ((0xcU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                    >> 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      >> 3U)))))
                   : 0U) << 7U) | ((0x40U & (((0x10U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                               ? ((0xcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                               : 0U) 
                                             << 5U)) 
                                   | ((0x20U & (((0x10U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                                  ? 
                                                 ((0xcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                                  : 0U) 
                                                << 3U)) 
                                      | (0x10U & ((
                                                   (0x10U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr))
                                                    ? 
                                                   ((0xcU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                                             >> 3U))))
                                                    : 0U) 
                                                  << 1U))))));
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__msr = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
             & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fcr 
                = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                         >> 6U));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fcr = 3U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop) {
            __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__re_o) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                       >> 7U)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 1U;
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__rf_pop = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
              & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
                = (0x1ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__timer_ptc__DOT__rptc_ctrl 
                    = ((0x1bfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__timer_ptc__DOT__rptc_ctrl)) 
                       | (0x40U & ((0xffffffc0U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__int_ptc) 
                                      << 6U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__timer_ptc__DOT__rptc_ctrl = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
                = (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat);
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ctrl 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ctrl)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl)) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_irq) 
                                   << 1U))));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ctrl = 0U;
    }
    __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier)))));
    __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                       >> 3U)))));
    __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir))) 
                     & (1U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir) 
                                     >> 1U)))))) & 
              (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_d))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                     >> 1U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier)))));
    __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_d))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                       >> 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1_d))))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tf_push) 
                 & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count)))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)
            ? ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux)) 
               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__aux_i 
                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux))
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
            __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__counter_t 
                    = (0x3ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t) 
                                 - (IData)(1U)));
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__counter_t = 0x27fU;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b) 
                                - (IData)(1U)));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write))) {
            __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_value;
        } else {
            if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))) {
                __Vdly__uart16550_0__DOT__regs__DOT__block_cnt 
                    = (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt) 
                                - (IData)(1U)));
            }
        }
    } else {
        __Vdly__uart16550_0__DOT__regs__DOT__block_cnt = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__dlc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)
            ? (0xffffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dlc))))))
                           ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dlc) 
                                                - (IData)(1U))))
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ints 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ints 
                    = (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints 
                       | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_muxed 
                            ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_in) 
                           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_muxed 
                                 ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig))) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__gpio_module__DOT__rgpio_ints = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_rdt 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)
            ? (0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                         ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                             ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                 ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__scratch)
                                 : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr))
                             : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                 ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr)
                                 : 0U)) : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr)
                                                : (0xc0U 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr))
                                                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                                    >> 3U))))))
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
            __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else {
            if ((2U == (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                         << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                if ((0x10U > (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                    __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
                    __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                    __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                    __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                    vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                             << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                    if ((0U < (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count))) {
                        __Vdly__uart16550_0__DOT__regs__DOT__rf_count 
                            = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
                                        - (IData)(1U)));
                        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                    }
                } else {
                    if ((3U == (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                                 << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop)))) {
                        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                        __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
                        __Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__uart16550_0__DOT__regs__DOT__rf_count = 0U;
        __Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err 
        = __Vdly__wb_s2m_gpio_err;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msi_reset 
        = __Vdly__uart16550_0__DOT__regs__DOT__msi_reset;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t 
        = __Vdly__uart16550_0__DOT__regs__DOT__counter_t;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_cnt 
        = __Vdly__uart16550_0__DOT__regs__DOT__block_cnt;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r 
        = __Vdly__uart16550_0__DOT__regs__DOT__lsr5r;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr 
        = __Vdly__uart16550_0__DOT__regs__DOT__msr;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __Vdlyvval__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__Vdlyvset__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = 1U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_d 
        = (0x7ffffU & ((IData)(1U) + vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_s 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__sync_clk));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__sync 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__i_gpio;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__rstl_syncff__DOT__din_ff1 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__sync = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__rstl_syncff__DOT__din_ff1 = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q)))) {
        if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = 1U;
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o 
        = ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))
            ? (0xfffU & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0xcU) 
                                              * (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q))))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xf01ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xf0fffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf000U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q) 
                          >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q) 
                                    << 2U))) << 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xc00U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffc0000U & (((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
                              << 0x13U) | ((4U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
                                           << 0x12U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)
            ? 0xfU : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
             & (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__int_ptc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_match)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__en = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out32 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out32) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out33 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out33) 
           | (2U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out34 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out34) 
           | (4U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out35 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out35) 
           | (8U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out36 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out36) 
           | (0x10U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out37 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out37) 
           | (0x20U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out38 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out38) 
           | (0x40U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out39 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out39) 
           | (0x80U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out40 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out40) 
           | (0x100U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out41 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out41) 
           | (0x200U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out42 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out42) 
           | (0x400U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out43 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out43) 
           | (0x800U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out44 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out44) 
           | (0x1000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out45 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out45) 
           | (0x2000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out46 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out46) 
           | (0x4000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out47 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out47) 
           | (0x8000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out48 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out48) 
           | (0x10000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out49 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out49) 
           | (0x20000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out50 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out50) 
           | (0x40000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out51 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out51) 
           | (0x80000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out52 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out52) 
           | (0x100000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out53 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out53) 
           | (0x200000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out54 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out54) 
           | (0x400000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out55 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out55) 
           | (0x800000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out56 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out56) 
           | (0x1000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out57 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out57) 
           | (0x2000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out58 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out58) 
           | (0x4000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out59 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out59) 
           | (0x8000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out60 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out60) 
           | (0x10000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out61 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out61) 
           | (0x20000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out62 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out62) 
           | (0x40000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out63 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out63) 
           | (0x80000000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_gpio) 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0r))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__start_dlc 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_muxed
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ptrig = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                      >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                    & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff000000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff0000U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat));
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_inte = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                = (6U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
        } else {
            if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                    = (4U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                    = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
            } else {
                if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd) {
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                        = (0xcU | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                        = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                } else {
                    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd) {
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                            = (2U | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir)));
                        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                            = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                    } else {
                        if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd) {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                        } else {
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir 
                                = (1U | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir));
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir = 1U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
             & (7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__scratch 
                = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is;
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__scratch = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
             & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xfff0fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xf0U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                       >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xadcab1e0U | (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0xa11ab1ebU;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xcU | (0xffff0U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = (0xcU | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xffeffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | (0xfffffffeU & ((0U == (0xffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                 << 1U)));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out 
        = ((((((((((((((((((((((((((((((((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out32 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)) 
                                         | (2U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out33 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                        | (4U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out34 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                       | (8U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out35 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                      | (0x10U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out36 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                     | (0x20U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out37 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                    | (0x40U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out38 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                   | (0x80U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out39 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                  | (0x100U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out40 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                 | (0x200U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out41 
                                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                                | (0x400U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out42 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                               | (0x800U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out43 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                              | (0x1000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out44 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                             | (0x2000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out45 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                            | (0x4000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out46 
                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                           | (0x8000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out47 
                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                          | (0x10000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out48 
                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                         | (0x20000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out49 
                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                        | (0x40000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out50 
                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                       | (0x80000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out51 
                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                      | (0x100000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out52 
                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                     | (0x200000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out53 
                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                    | (0x400000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out54 
                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                   | (0x800000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out55 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                  | (0x1000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out56 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                 | (0x2000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out57 
                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
                | (0x4000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out58 
                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
               | (0x8000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out59 
                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
              | (0x10000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out60 
                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
             | (0x20000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out61 
                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
            | (0x40000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out62 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe))) 
           | (0x80000000U & (vlSymsp->TOP__rvfpgasim__veerwolf.io_data__out__out63 
                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_oe)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_muxed 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk 
            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__pextc_sampled) 
           | ((~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_eclk) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__ext_pad_s));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__rls_int_pnd;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__ti_int_pnd;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__thre_int_pnd;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd 
        = __Vdly__uart16550_0__DOT__regs__DOT__ms_int_pnd;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_lach 
        = (((~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec) 
            & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_s) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_r)))))) 
           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_nec 
              & (- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_s)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__sync_clk 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__clk_pad_i));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__re_o 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) {
        if (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop))) 
                 & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 1U;
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun = 0U;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 2U) & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                               >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                                         >> 2U)) | 
                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                              >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                                         >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__extc_in 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_lach 
            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__ext_pad_s) 
           | ((~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__in_lach) 
              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__pextc_sampled));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_pop 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_pop;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count 
        = __Vdly__uart16550_0__DOT__regs__DOT__rf_count;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rx_reset 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is) 
                 >> 1U)));
}
