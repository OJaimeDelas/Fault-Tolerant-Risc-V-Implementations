// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_el2_configurable_gw.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__32(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__32\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 2U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 1U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__63(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__63\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)
                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req
                  : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__33(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__33\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 4U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 2U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__64(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__64\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 1U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__34(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__34\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 6U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 3U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__65(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__65\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 2U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__35(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__35\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 8U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 4U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__66(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__66\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 3U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__36(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__36\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xaU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 5U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__67(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__67\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 4U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__37(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__37\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xcU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 6U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__68(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__68\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 5U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__38(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__38\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xeU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 7U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__69(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__69\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 6U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__39(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__39\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x10U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 8U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__70(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__70\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 7U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__40(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__40\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x12U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 9U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__71(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__71\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 8U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__41(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__41\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x14U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xaU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__72(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__72\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 9U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__42(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__42\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x16U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xbU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__73(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__73\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xaU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__43(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__43\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x18U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xcU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__74(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__74\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xbU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__44(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__44\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xdU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__75(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__75\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xcU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__45(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__45\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xeU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__76(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__76\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xdU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__46(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__46\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xfU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__77(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__77\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xeU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__47(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__47\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x20U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x10U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__78(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__78\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xfU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__48(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__48\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x22U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x11U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__79(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__79\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x10U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__49(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__49\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x24U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x12U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__80(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__80\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x11U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__50(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__50\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x26U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x13U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__81(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__81\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x12U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__51(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__51\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x28U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x14U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__82(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__82\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x13U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__52(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__52\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x15U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__83(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__83\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x14U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__53(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__53\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x16U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__84(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__84\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x15U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__54(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__54\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x17U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__85(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__85\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x16U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__55(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__55\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x30U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x18U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__86(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__86\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x17U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__56(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__56\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x32U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x19U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__87(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__87\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x18U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__57(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__57\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x34U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1aU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__88(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__88\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x19U) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__58(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__58\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x36U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1bU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__89(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__89\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1aU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__59(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__59\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x38U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1cU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__90(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__90\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1bU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__60(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__60\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1dU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__91(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__91\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1cU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__61(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__61\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1eU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__92(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__92\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1dU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__62(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_sequent__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__62\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1fU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__93(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_multiclk__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__93\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)
                  ? (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1eU) : (IData)(this->__PVT__sync_inst__DOT__din_ff1)));
}
