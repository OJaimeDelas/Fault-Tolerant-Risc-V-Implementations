// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_el2_configurable_gw.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_el2_configurable_gw) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_el2_configurable_gw::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_el2_configurable_gw::~Vrvfpgasim_el2_configurable_gw() {
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 2U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 1U)))));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req);
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 4U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 2U)))));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 1U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__3\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 6U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 3U)))));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 2U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__4\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 8U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 4U)))));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 3U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 4U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 5U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 6U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 7U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 8U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 9U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__11\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xaU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__12\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xbU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__13(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__13\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xcU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__14(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__14\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xdU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__15(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__15\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xeU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__16(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__16\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0xfU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__17(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__17\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x10U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__18(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__18\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x11U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__19(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__19\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x12U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__20(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__20\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x13U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__21(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__21\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x14U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__22(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__22\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x15U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__23(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__23\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x16U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__24(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__24\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x17U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__25(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__25\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x18U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__26(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__26\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x19U));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__27(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__27\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1aU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__28(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__28\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1bU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__29(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__29\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1cU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__30(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__30\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1dU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__31(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_settle__TOP__rvfpgasim__veerwolf__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__31\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                     >> 0x1eU));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
        this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    }
}

void Vrvfpgasim_el2_configurable_gw::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrvfpgasim_el2_configurable_gw::_ctor_var_reset\n"); );
    // Body
    __PVT__gw_clk = VL_RAND_RESET_I(1);
    __PVT__rawclk = VL_RAND_RESET_I(1);
    __PVT__clken = VL_RAND_RESET_I(1);
    __PVT__rst_l = VL_RAND_RESET_I(1);
    __PVT__extintsrc_req = VL_RAND_RESET_I(1);
    __PVT__meigwctrl_polarity = VL_RAND_RESET_I(1);
    __PVT__meigwctrl_type = VL_RAND_RESET_I(1);
    __PVT__meigwclr = VL_RAND_RESET_I(1);
    __PVT__extintsrc_req_config = VL_RAND_RESET_I(1);
    __PVT__gw_int_pending = VL_RAND_RESET_I(1);
    __PVT__extintsrc_req_sync = VL_RAND_RESET_I(1);
    __PVT__sync_inst__DOT__din_ff1 = VL_RAND_RESET_I(1);
    sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
}
