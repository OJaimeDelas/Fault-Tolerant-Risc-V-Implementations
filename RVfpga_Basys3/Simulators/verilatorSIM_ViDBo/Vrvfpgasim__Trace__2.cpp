// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvfpgasim__Syms.h"


void Vrvfpgasim::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vrvfpgasim__Syms* __restrict vlSymsp = static_cast<Vrvfpgasim__Syms*>(userp);
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7196);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp428[5];
    WData/*159:0*/ __Vtemp431[5];
    WData/*95:0*/ __Vtemp434[3];
    WData/*223:0*/ __Vtemp440[7];
    WData/*95:0*/ __Vtemp443[3];
    WData/*95:0*/ __Vtemp446[3];
    WData/*95:0*/ __Vtemp449[3];
    WData/*223:0*/ __Vtemp455[7];
    WData/*95:0*/ __Vtemp458[3];
    WData/*95:0*/ __Vtemp461[3];
    WData/*159:0*/ __Vtemp467[5];
    WData/*159:0*/ __Vtemp473[5];
    WData/*191:0*/ __Vtemp474[6];
    WData/*191:0*/ __Vtemp475[6];
    WData/*191:0*/ __Vtemp479[6];
    // Body
    {
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+0,((1U & ((((9U == 
                                             (0x3fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 2U)) 
                                           | ((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                             >> 5U)))));
            tracep->chgBit(oldp+1,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                           >> 1U) & 
                                          ((((9U == 
                                              (0x3fU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((9U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U))))));
            tracep->chgBit(oldp+2,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                  >> 1U) 
                                                 & ((((9U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 3U))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                         >> 2U)) 
                                                     | ((9U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                       >> 5U))))
                                           ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                   >> 5U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+3,((1U & ((((0xaU == 
                                             (0x3fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 2U)) 
                                           | ((0xaU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                             >> 5U)))));
            tracep->chgBit(oldp+4,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                           >> 1U) & 
                                          ((((0xaU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0xaU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U))))));
            tracep->chgBit(oldp+5,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                  >> 1U) 
                                                 & ((((0xaU 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 3U))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                         >> 2U)) 
                                                     | ((0xaU 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                       >> 5U))))
                                           ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                   >> 5U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+6,((1U & ((((0xbU == 
                                             (0x3fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 2U)) 
                                           | ((0xbU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                             >> 5U)))));
            tracep->chgBit(oldp+7,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                           >> 1U) & 
                                          ((((0xbU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0xbU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U))))));
            tracep->chgBit(oldp+8,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                  >> 1U) 
                                                 & ((((0xbU 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 3U))) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                         >> 2U)) 
                                                     | ((0xbU 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                       >> 5U))))
                                           ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                   >> 5U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+9,((1U & ((((0xcU == 
                                             (0x3fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 2U)) 
                                           | ((0xcU 
                                               == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                             >> 5U)))));
            tracep->chgBit(oldp+10,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0xcU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+11,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0xcU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0xcU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+12,((1U & ((((0xdU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0xdU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+13,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0xdU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0xdU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+14,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0xdU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0xdU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+15,((1U & ((((0xeU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0xeU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+16,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0xeU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0xeU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+17,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0xeU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0xeU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+18,((1U & ((((0xfU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0xfU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+19,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0xfU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0xfU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+20,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0xfU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0xfU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+21,((1U & ((((0x10U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x10U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+22,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x10U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x10U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+23,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x10U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x10U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+24,((1U & ((((0x11U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x11U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+25,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x11U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x11U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+26,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x11U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x11U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+27,((1U & ((((0x12U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x12U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+28,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x12U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x12U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+29,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x12U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x12U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+30,((1U & ((((0x13U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x13U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+31,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x13U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x13U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+32,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x13U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x13U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+33,((1U & ((((0x14U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x14U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+34,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x14U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+35,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x14U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x14U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+36,((1U & ((((0x15U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x15U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+37,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x15U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+38,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x15U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x15U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+39,((1U & ((((0x16U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x16U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+40,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x16U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x16U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+41,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x16U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x16U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+42,((1U & ((((0x17U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x17U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+43,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x17U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x17U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+44,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x17U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x17U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+45,((1U & ((((0x18U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x18U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+46,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x18U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+47,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x18U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x18U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+48,((1U & ((((0x19U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x19U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+49,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x19U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x19U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+50,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x19U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x19U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+51,((1U & ((((0x1aU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1aU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+52,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1aU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1aU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+53,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1aU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1aU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+54,((1U & ((((0x1bU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1bU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+55,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1bU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1bU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+56,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1bU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1bU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+57,((1U & ((((0x1cU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1cU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+58,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1cU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1cU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+59,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1cU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1cU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+60,((1U & ((((0x1dU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1dU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+61,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1dU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1dU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+62,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1dU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1dU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+63,((1U & ((((0x1eU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1eU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+64,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1eU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1eU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+65,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1eU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+66,((1U & ((((0x1fU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 2U)) 
                                            | ((0x1fU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+67,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 1U) 
                                           & ((((0x1fU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 2U)) 
                                               | ((0x1fU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+68,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 1U) 
                                                  & ((((0x1fU 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 2U)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+69,((1U & ((((0x20U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x20U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+70,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x20U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+71,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x20U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x20U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+72,((1U & ((((0x21U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x21U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+73,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x21U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+74,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x21U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x21U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+75,((1U & ((((0x22U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x22U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+76,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x22U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x22U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+77,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x22U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x22U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+78,((1U & ((((0x23U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x23U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+79,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x23U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x23U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+80,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x23U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+81,((1U & ((((0x24U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x24U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+82,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x24U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+83,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x24U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x24U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+84,((1U & ((((0x25U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x25U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+85,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x25U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x25U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+86,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x25U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x25U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+87,((1U & ((((0x26U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x26U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+88,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x26U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x26U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+89,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x26U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x26U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+90,((1U & ((((0x27U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x27U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+91,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x27U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x27U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+92,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x27U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x27U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+93,((1U & ((((0x28U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x28U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+94,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x28U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x28U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+95,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x28U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x28U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+96,((1U & ((((0x29U 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x29U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+97,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                            >> 2U) 
                                           & ((((0x29U 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 1U)) 
                                               | ((0x29U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+98,((1U & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                   >> 2U) 
                                                  & ((((0x29U 
                                                        == 
                                                        (0x3fU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                            >> 3U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                          >> 1U)) 
                                                      | ((0x29U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))))
                                            ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    >> 5U))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+99,((1U & ((((0x2aU 
                                              == (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                     >> 3U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                                            | ((0x2aU 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 5U)))));
            tracep->chgBit(oldp+100,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2aU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2aU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+101,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2aU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+102,((1U & ((((0x2bU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x2bU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+103,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2bU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+104,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2bU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2bU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+105,((1U & ((((0x2cU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x2cU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+106,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2cU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2cU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+107,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2cU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2cU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+108,((1U & ((((0x2dU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x2dU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+109,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2dU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+110,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2dU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2dU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+111,((1U & ((((0x2eU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x2eU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+112,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2eU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2eU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+113,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2eU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2eU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+114,((1U & ((((0x2fU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x2fU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+115,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x2fU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x2fU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+116,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x2fU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+117,((1U & ((((0x30U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x30U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+118,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x30U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x30U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+119,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x30U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+120,((1U & ((((0x31U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x31U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+121,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x31U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+122,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x31U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x31U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+123,((1U & ((((0x32U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x32U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+124,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x32U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x32U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+125,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x32U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x32U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+126,((1U & ((((0x33U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x33U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+127,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x33U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+128,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x33U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x33U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+129,((1U & ((((0x34U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x34U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+130,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x34U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x34U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+131,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x34U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x34U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+132,((1U & ((((0x35U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x35U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+133,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x35U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+134,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x35U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+135,((1U & ((((0x36U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x36U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+136,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x36U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x36U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+137,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x36U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+138,((1U & ((((0x37U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x37U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+139,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x37U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x37U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+140,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x37U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+141,((1U & ((((0x38U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x38U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+142,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x38U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x38U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+143,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x38U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x38U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+144,((1U & ((((0x39U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x39U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+145,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x39U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x39U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+146,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x39U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x39U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+147,((1U & ((((0x3aU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3aU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+148,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3aU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3aU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+149,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3aU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3aU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+150,((1U & ((((0x3bU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3bU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+151,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3bU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+152,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3bU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3bU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+153,((1U & ((((0x3cU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3cU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+154,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3cU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+155,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3cU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3cU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+156,((1U & ((((0x3dU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3dU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+157,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3dU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+158,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3dU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3dU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+159,((1U & ((((0x3eU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3eU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+160,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3eU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3eU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+161,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3eU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3eU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+162,((1U & ((((0x3fU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 1U)) 
                                             | ((0x3fU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+163,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U) 
                                            & ((((0x3fU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 1U)) 
                                                | ((0x3fU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+164,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 2U) 
                                                   & ((((0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 1U)) 
                                                       | ((0x3fU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+165,((1U & ((((0x20U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x20U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+166,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x20U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+167,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x20U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x20U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+168,((1U & ((((0x21U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x21U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+169,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x21U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x21U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+170,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x21U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x21U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+171,((1U & ((((0x22U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x22U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+172,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x22U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x22U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+173,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x22U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+174,((1U & ((((0x23U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x23U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+175,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x23U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x23U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+176,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x23U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x23U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+177,((1U & ((((0x24U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x24U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+178,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x24U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x24U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+179,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x24U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x24U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+180,((1U & ((((0x25U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x25U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+181,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x25U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x25U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+182,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x25U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x25U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+183,((1U & ((((0x26U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x26U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+184,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x26U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x26U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+185,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x26U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x26U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+186,((1U & ((((0x27U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x27U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+187,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x27U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x27U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+188,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x27U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x27U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+189,((1U & ((((0x28U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x28U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+190,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x28U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x28U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+191,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x28U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x28U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+192,((1U & ((((0x29U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x29U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+193,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x29U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+194,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x29U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x29U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+195,((1U & ((((0x2aU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2aU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+196,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2aU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2aU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+197,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2aU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2aU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+198,((1U & ((((0x2bU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2bU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+199,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2bU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+200,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2bU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2bU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+201,((1U & ((((0x2cU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2cU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+202,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2cU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2cU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+203,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2cU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2cU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+204,((1U & ((((0x2dU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2dU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+205,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2dU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+206,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2dU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2dU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+207,((1U & ((((0x2eU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2eU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+208,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2eU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2eU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+209,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2eU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2eU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+210,((1U & ((((0x2fU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x2fU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+211,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x2fU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x2fU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+212,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x2fU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+213,((1U & ((((0x30U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x30U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+214,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x30U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x30U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+215,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x30U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+216,((1U & ((((0x31U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x31U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+217,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x31U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x31U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+218,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x31U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x31U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+219,((1U & ((((0x32U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x32U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+220,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x32U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x32U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+221,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x32U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x32U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+222,((1U & ((((0x33U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x33U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+223,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x33U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x33U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+224,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x33U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x33U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+225,((1U & ((((0x34U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x34U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+226,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x34U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x34U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+227,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x34U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x34U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+228,((1U & ((((0x35U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x35U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+229,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x35U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x35U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+230,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x35U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x35U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+231,((1U & ((((0x36U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x36U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+232,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x36U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x36U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+233,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x36U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x36U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+234,((1U & ((((0x37U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x37U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+235,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x37U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x37U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+236,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x37U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x37U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+237,((1U & ((((0x38U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x38U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+238,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x38U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x38U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+239,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x38U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x38U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+240,((1U & ((((0x39U 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x39U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+241,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x39U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x39U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+242,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x39U 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x39U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+243,((1U & ((((0x3aU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3aU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+244,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3aU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3aU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+245,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3aU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3aU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+246,((1U & ((((0x3bU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3bU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+247,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3bU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3bU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+248,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3bU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3bU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+249,((1U & ((((0x3cU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3cU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+250,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3cU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3cU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+251,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3cU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3cU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+252,((1U & ((((0x3dU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3dU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+253,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3dU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3dU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+254,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3dU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3dU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+255,((1U & ((((0x3eU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3eU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+256,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3eU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3eU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+257,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3eU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3eU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+258,((1U & ((((0x3fU 
                                               == (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 2U)) 
                                             | ((0x3fU 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)))));
            tracep->chgBit(oldp+259,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U) 
                                            & ((((0x3fU 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                      >> 3U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 2U)) 
                                                | ((0x3fU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+260,((1U & ((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                                    >> 3U) 
                                                   & ((((0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                             >> 3U))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                           >> 2U)) 
                                                       | ((0x3fU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         >> 5U))))
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                     >> 5U))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout)))));
            tracep->chgBit(oldp+261,((1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                              >> 0x16U) 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r))))));
            tracep->chgIData(oldp+262,(((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))
                                         ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                            - (IData)(1U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                             : ((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                 >> 3U)))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                     & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                   >> 2U)))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                       | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                  >> 1U)))) 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))))),32);
            tracep->chgBit(oldp+263,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                 >> 3U) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                   >> 2U)) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                  >> 1U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                 >> 4U)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                               >> 4U)))));
            tracep->chgBit(oldp+264,((((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                          >> 0x17U) 
                                         & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout) 
                                        & (0U == (0x1fU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                                     >> 4U)))) 
                                       | (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                            >> 0x17U) 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                      | ((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                            >> 0x17U) 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r)))));
            tracep->chgBit(oldp+265,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r))) 
                                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                          >> 4U) & 
                                         (0U == (0x7fffffffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                                    >> 1U)))))));
            tracep->chgBit(oldp+266,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                >> 4U)) 
                                            & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r))) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                      >> 4U) 
                                                     & (0U 
                                                        == 
                                                        (0x7fffffffU 
                                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                                            >> 1U))))))))));
            tracep->chgIData(oldp+267,(((1U & (((((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                    >> 3U) 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                      >> 2U)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                     >> 1U)) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                    >> 4U)) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                  >> 4U)))
                                         ? ((0x10U 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))
                                             ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data 
                                                - (IData)(1U))
                                             : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)
                                                 ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                 : 
                                                ((((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                  >> 3U)))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                      & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                    >> 2U)))) 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                        | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                                   >> 1U)))) 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))))
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data)),32);
            tracep->chgBit(oldp+268,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x305U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+269,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x340U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+270,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x7c0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+271,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0xbccU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+272,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0xbc9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+273,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0xbcbU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+274,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0xbc8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+275,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x323U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+276,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x324U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+277,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x325U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+278,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x326U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+279,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req) 
                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                >> 0xdU)) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt))))));
            tracep->chgBit(oldp+280,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x320U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+281,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x7a0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgCData(oldp+282,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                               & (0x7a0U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel)))),2);
            tracep->chgCData(oldp+283,((3U & (((((2U 
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
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout)))),2);
            tracep->chgCData(oldp+284,((0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht)))),6);
            tracep->chgIData(oldp+285,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc)),32);
            tracep->chgIData(oldp+286,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc)),32);
            tracep->chgIData(oldp+287,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r)
                                         ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                             << 0x1bU) 
                                            | (0x7ffffffU 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : ((0xf8000000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect) 
                                            | (0x7ffffffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                                  + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r)))))),32);
            tracep->chgIData(oldp+288,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r)
                                         ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                             << 0x1bU) 
                                            | (0x7ffffffU 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : ((0xf8000000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect) 
                                            | (0x7ffffffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                                  + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)))))),32);
            tracep->chgIData(oldp+289,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r)
                                         ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                             << 0x1bU) 
                                            | (0x7ffffffU 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : ((0xf8000000U 
                                             & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                            | (0x7ffffffU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                  + 
                                                  (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                      >> 0x19U))))))),32);
            tracep->chgIData(oldp+290,((0x7ffffffU 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                           + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r)))),27);
            tracep->chgIData(oldp+291,((0x7ffffffU 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                           + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)))),27);
            tracep->chgIData(oldp+292,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr))),32);
            tracep->chgIData(oldp+293,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr))),32);
            tracep->chgIData(oldp+294,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr))),32);
            tracep->chgIData(oldp+295,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr))),32);
            tracep->chgIData(oldp+296,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+297,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+298,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
                                                    >> 0x20U)))),32);
            tracep->chgIData(oldp+299,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
                                                    >> 0x20U)))),32);
            tracep->chgCData(oldp+300,((0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                 & (0xbccU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                                 ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                 : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl)))),4);
            tracep->chgCData(oldp+301,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r)
                                                 ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_pl)
                                                 : 
                                                (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                  & (0xbcbU 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                  >> 9U))))),4);
            tracep->chgCData(oldp+302,((0xfU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                                 & (0xbc9U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                                 ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                 : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt)))),4);
            tracep->chgIData(oldp+303,((0x7fffffffU 
                                        & ((0x7ffffffeU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                           + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                              << 1U)))),31);
            tracep->chgIData(oldp+304,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[0U])),32);
            tracep->chgIData(oldp+305,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[1U])),32);
            tracep->chgBit(oldp+306,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                         >> 8U))));
            tracep->chgBit(oldp+307,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                                            | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 >> 7U) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 6U)))))));
            tracep->chgSData(oldp+308,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                                         ? ((0x200U 
                                             & ((~ 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                  >> 9U)) 
                                                << 9U)) 
                                            | (0x1ffU 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))),10);
            tracep->chgBit(oldp+309,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             >> 9U))) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req))));
            tracep->chgBit(oldp+310,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                       & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                      | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 1U)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                               >> 6U))))));
            tracep->chgBit(oldp+311,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                       & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                      | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                               >> 6U))))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                >> 8U) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)))))));
            tracep->chgBit(oldp+313,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x304U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+314,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                             >> 0xfU))) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)))));
            tracep->chgBit(oldp+315,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x7f9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+316,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0xbc0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+317,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x7d3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+318,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                      & (0x7d6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))));
            tracep->chgBit(oldp+319,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                                                & (((IData)(1U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)) 
                                                   >> 8U)))) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))));
            tracep->chgIData(oldp+320,((0xffffffU & 
                                        ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                                           | (1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                                               & (((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)) 
                                                  >> 8U)))) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                                             >> 8U)
                                          : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout))),24);
            tracep->chgBit(oldp+321,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))));
            tracep->chgCData(oldp+322,((0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok)) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)))),8);
            tracep->chgBit(oldp+323,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                                       | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                                                & (((IData)(1U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                                   >> 8U)))) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))));
            tracep->chgIData(oldp+324,((0xffffffU & 
                                        ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                                           | (1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                                               & (((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                                  >> 8U)))) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                                             >> 8U)
                                          : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout))),24);
            tracep->chgBit(oldp+325,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))));
            tracep->chgCData(oldp+326,((0xffU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok)) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)))),8);
            tracep->chgIData(oldp+327,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x7d3U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b)),32);
            tracep->chgIData(oldp+328,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x7d6U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b)),32);
            tracep->chgCData(oldp+329,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r)
                                         ? ((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
                                            | (1U & 
                                               (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout))),3);
            tracep->chgCData(oldp+330,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r)
                                         ? ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
                                            | (1U & 
                                               (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout))),4);
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 7U)))));
            tracep->chgBit(oldp+332,((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din) 
                                             ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))));
            tracep->chgSData(oldp+333,(((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din) 
                                                ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout))),10);
            tracep->chgIData(oldp+334,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout)),31);
            tracep->chgBit(oldp+335,((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din) 
                                             ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout)))));
            tracep->chgSData(oldp+336,(((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din) 
                                                ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout))),12);
            tracep->chgIData(oldp+337,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x305U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? ((0x7ffffffeU 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                >> 1U)) 
                                            | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)),31);
            tracep->chgBit(oldp+338,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                                      | (1U & ((((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                                >> 8U) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))))));
            tracep->chgIData(oldp+339,((0xffffffU & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                                          | (1U & (
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                                    >> 8U) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                                             >> 8U)
                                          : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout))),24);
            tracep->chgCData(oldp+340,((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)))),8);
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                               >> 0x10U)))));
            tracep->chgIData(oldp+342,(((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                  >> 0x10U)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc)
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh)),32);
            tracep->chgBit(oldp+343,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r) 
                                      | (1U & ((((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                                >> 8U) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable))))));
            tracep->chgIData(oldp+344,((0xffffffU & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r) 
                                          | (1U & (
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                                    >> 8U) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable))))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                                             >> 8U)
                                          : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout))),24);
            tracep->chgCData(oldp+345,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable)
                                                  ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)))),8);
            tracep->chgBit(oldp+346,((1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                              >> 0xfU) 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                >> 0xeU)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)))));
            tracep->chgIData(oldp+347,(((1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                 >> 0xfU) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                   >> 0xeU)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc)
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth)),32);
            tracep->chgIData(oldp+348,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x340U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch)),32);
            tracep->chgSData(oldp+349,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                                             ? ((0x200U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                      >> 9U)) 
                                                    << 9U)) 
                                                | (0x1ffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int))),10);
            tracep->chgSData(oldp+350,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x7f9U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? ((0xe000U 
                                             & ((~ 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                  >> 0x10U)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                                               | ((0xf80U 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                  | ((0x40U 
                                                      & ((~ 
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                           >> 6U)) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)))))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int))),16);
            tracep->chgIData(oldp+351,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x7c0U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_in
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac)),32);
            tracep->chgIData(oldp+352,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r)
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                                 << 0x1bU) 
                                                | (0x7ffffffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                             : ((0xf8000000U 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect) 
                                                | (0x7ffffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect 
                                                      + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r)))))
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect)),32);
            tracep->chgIData(oldp+353,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r)
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                                 << 0x1bU) 
                                                | (0x7ffffffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                             : ((0xf8000000U 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect) 
                                                | (0x7ffffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect 
                                                      + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)))))
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect)),32);
            tracep->chgBit(oldp+354,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r) 
                                            | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                               >> 0x19U)))));
            tracep->chgIData(oldp+355,(((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                  >> 0x19U)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r)
                                             ? (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                                 << 0x1bU) 
                                                | (0x7ffffffU 
                                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                             : ((0xf8000000U 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                                | (0x7ffffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect 
                                                      + 
                                                      (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout 
                                                          >> 0x19U))))))
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect)),32);
            tracep->chgCData(oldp+356,((0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                                                   ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht))
                                                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht)))),6);
            tracep->chgIData(oldp+357,((0x3fffffU & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                          & (0xbc8U 
                                             == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                             >> 0xaU)
                                          : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout))),22);
            tracep->chgCData(oldp+358,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r)
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__pic_claimid)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout))),8);
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))));
            tracep->chgIData(oldp+360,(((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[0U])
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0)),32);
            tracep->chgBit(oldp+361,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))));
            tracep->chgIData(oldp+362,(((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                                         ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r)
                                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r
                                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data[1U])
                                         : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h)),32);
            tracep->chgBit(oldp+363,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)))));
            tracep->chgBit(oldp+364,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                                             >> 1U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)))));
            tracep->chgBit(oldp+365,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                                             >> 2U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)))));
            tracep->chgBit(oldp+366,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)))));
            tracep->chgSData(oldp+367,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x323U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3))),10);
            tracep->chgSData(oldp+368,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x324U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4))),10);
            tracep->chgSData(oldp+369,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x325U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5))),10);
            tracep->chgSData(oldp+370,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x326U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6))),10);
            tracep->chgCData(oldp+371,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                         & (0x320U 
                                            == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r)))
                                         ? ((0x3eU 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                >> 1U)) 
                                            | (1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout))),6);
            tracep->chgBit(oldp+372,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))));
            tracep->chgCData(oldp+373,((0xfU & ((1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                                                 ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns)
                                                 : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__dicad1_ff__dout)))),4);
            tracep->chgQData(oldp+374,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m),40);
            tracep->chgBit(oldp+376,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                    >> 1U)))));
            tracep->chgQData(oldp+378,((0x3fffffffffULL 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                           >> 2U))),38);
            tracep->chgBit(oldp+380,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                        >> 1U))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 4U)))));
            tracep->chgQData(oldp+381,((0x3fffffffffULL 
                                        & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                              >> 1U))) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                     >> 4U)))
                                            ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                               >> 2U)
                                            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout))),38);
            tracep->chgBit(oldp+383,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_any)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 4U)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+384,(vlSymsp->TOP__rvfpgasim.o_led),16);
            tracep->chgBit(oldp+385,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg));
            tracep->chgBit(oldp+387,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg));
            tracep->chgCData(oldp+388,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_reg),6);
            tracep->chgBit(oldp+389,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg));
            tracep->chgCData(oldp+390,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg),6);
            tracep->chgQData(oldp+391,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_reg),64);
            tracep->chgBit(oldp+393,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_reg));
            tracep->chgBit(oldp+394,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg));
            tracep->chgCData(oldp+395,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_reg),5);
            tracep->chgCData(oldp+396,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg),5);
            tracep->chgBit(oldp+397,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg));
            tracep->chgCData(oldp+398,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg),2);
            tracep->chgCData(oldp+399,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_reg),5);
            tracep->chgSData(oldp+400,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg),16);
            tracep->chgCData(oldp+401,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg),8);
            tracep->chgCData(oldp+402,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_reg),3);
            tracep->chgCData(oldp+403,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_reg),2);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg),5);
            tracep->chgSData(oldp+405,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg),16);
            tracep->chgCData(oldp+406,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg),8);
            tracep->chgCData(oldp+407,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_reg),3);
            tracep->chgCData(oldp+408,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_reg),2);
            tracep->chgCData(oldp+409,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_pipe_reg),5);
            tracep->chgQData(oldp+410,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_pipe_reg),64);
            tracep->chgBit(oldp+412,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_pipe_reg));
            tracep->chgBit(oldp+413,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_pipe_reg));
            tracep->chgSData(oldp+414,((0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg) 
                                                   >> 3U))),13);
            tracep->chgSData(oldp+415,((0x1fffU & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg) 
                                                   >> 3U))),13);
            tracep->chgIData(oldp+416,(vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__i),32);
            tracep->chgBit(oldp+417,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__ss_r)))));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_irq));
            tracep->chgBit(oldp+419,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi0_irq));
            tracep->chgBit(oldp+420,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4) 
                                      ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4_pol))));
            tracep->chgBit(oldp+421,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3) 
                                      ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3_pol))));
            tracep->chgBit(oldp+422,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int_r))));
            tracep->chgIData(oldp+423,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__nmi_vec),32);
            tracep->chgCData(oldp+424,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bid),6);
            tracep->chgCData(oldp+425,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rid),6);
            tracep->chgBit(oldp+426,(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack));
            tracep->chgIData(oldp+427,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt),32);
            tracep->chgBit(oldp+428,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_spi_flash_ack));
            tracep->chgIData(oldp+429,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat),32);
            tracep->chgBit(oldp+430,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack));
            tracep->chgCData(oldp+431,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt),8);
            tracep->chgBit(oldp+432,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
            tracep->chgBit(oldp+433,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__aw_req));
            tracep->chgBit(oldp+434,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__w_req));
            tracep->chgBit(oldp+435,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__ar_req));
            tracep->chgQData(oldp+436,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__mtime),64);
            tracep->chgQData(oldp+438,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__mtimecmp),64);
            tracep->chgBit(oldp+440,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3));
            tracep->chgBit(oldp+441,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3_edge));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3_pol));
            tracep->chgBit(oldp+443,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq3_timer));
            tracep->chgBit(oldp+444,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4));
            tracep->chgBit(oldp+445,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4_edge));
            tracep->chgBit(oldp+446,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4_pol));
            tracep->chgBit(oldp+447,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__sw_irq4_timer));
            tracep->chgBit(oldp+448,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__irq_timer_en));
            tracep->chgIData(oldp+449,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__irq_timer_cnt),32);
            tracep->chgBit(oldp+450,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__irq_gpio_enable));
            tracep->chgBit(oldp+451,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__irq_ptc_enable));
            tracep->chgBit(oldp+452,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int));
            tracep->chgBit(oldp+453,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int_r));
            tracep->chgCData(oldp+454,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__Enables_Reg),4);
            tracep->chgIData(oldp+455,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__Digits_Reg),32);
            tracep->chgSData(oldp+456,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable),16);
            tracep->chgSData(oldp+457,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat),16);
            tracep->chgCData(oldp+458,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__sper),8);
            tracep->chgBit(oldp+459,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__ss_r));
            tracep->chgCData(oldp+460,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__sper) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+461,((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__sper))),2);
            tracep->chgBit(oldp+462,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spif));
            tracep->chgBit(oldp+463,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wcol));
            tracep->chgCData(oldp+464,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__tcnt),2);
            tracep->chgCData(oldp+465,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem[0]),8);
            tracep->chgCData(oldp+466,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem[1]),8);
            tracep->chgCData(oldp+467,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem[2]),8);
            tracep->chgCData(oldp+468,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem[3]),8);
            tracep->chgBit(oldp+469,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb));
            tracep->chgBit(oldp+470,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__gb));
            tracep->chgBit(oldp+471,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__pwm_pad_o));
            tracep->chgCData(oldp+472,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+473,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+474,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+475,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+476,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+477,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+478,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+479,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+480,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+481,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+482,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+483,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+484,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+485,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+486,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+487,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
            tracep->chgCData(oldp+488,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+489,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+490,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+491,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+492,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+493,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+494,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+495,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+496,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+497,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+498,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+499,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+500,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+501,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+502,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+503,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
            tracep->chgIData(oldp+504,((0x7fffffffU 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__nmi_vec 
                                           >> 1U))),31);
            tracep->chgCData(oldp+505,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__nmi_int_r)) 
                                         << 6U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_irq) 
                                                   << 5U))),7);
            tracep->chgQData(oldp+506,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__ic_tag_data_raw_packed_pre),44);
            tracep->chgWData(oldp+508,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre),272);
            tracep->chgWData(oldp+517,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre),272);
            tracep->chgWData(oldp+526,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__Q),136);
            __Vtemp428[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre[0U];
            __Vtemp428[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre[1U];
            __Vtemp428[2U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre[2U];
            __Vtemp428[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre[3U];
            __Vtemp428[4U] = (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout_pre[4U]);
            tracep->chgWData(oldp+531,(__Vtemp428),136);
            tracep->chgWData(oldp+536,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__size_256__DOT__WAYS__DOT__ic_bank_sb_way_data__Q),136);
            __Vtemp431[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[5U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[4U] 
                                            >> 8U));
            __Vtemp431[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[6U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[5U] 
                                            >> 8U));
            __Vtemp431[2U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[7U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[6U] 
                                            >> 8U));
            __Vtemp431[3U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[8U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[7U] 
                                            >> 8U));
            __Vtemp431[4U] = (0xffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout_pre[8U] 
                                       >> 8U));
            tracep->chgWData(oldp+541,(__Vtemp431),136);
            tracep->chgQData(oldp+546,(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout),64);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [4U] | vlTOPp->__Vm_traceActivity
                         [0x12U]))) {
            tracep->chgIData(oldp+548,(((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                    >> 0x20U))
                                         : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout))),32);
            tracep->chgWData(oldp+549,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp),176);
            tracep->chgBit(oldp+555,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_ack)))));
            __Vtemp434[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
            __Vtemp434[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
            __Vtemp434[2U] = (0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]);
            tracep->chgWData(oldp+556,(__Vtemp434),88);
            tracep->chgIData(oldp+559,((0x7ffffffU 
                                        & ((0x7fc0000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                               << 7U)) 
                                           | ((0x3fe00U 
                                               & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                   << 0x1eU) 
                                                  | (0x3ffffe00U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        >> 2U)))) 
                                              | (0x1ffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 0xbU))))))),27);
            __Vtemp440[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
            __Vtemp440[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
            __Vtemp440[2U] = ((0xfffffc00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                              << 0xaU)) 
                              | (0x3ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]));
            __Vtemp440[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                         >> 0x16U)) 
                              | (0xfffffc00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                << 0xaU)));
            __Vtemp440[4U] = ((0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                              << 0x14U)) 
                              | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                            >> 0x16U)) 
                                 | (0xffc00U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                << 0xaU))));
            __Vtemp440[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                           >> 0xcU)) 
                              | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                << 0x14U)));
            __Vtemp440[6U] = (0x3fffffffU & ((0xfffffU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                 >> 0xcU)) 
                                             | (0x3ff00000U 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   << 0x14U))));
            tracep->chgWData(oldp+560,(__Vtemp440),222);
            tracep->chgBit(oldp+567,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+568,((3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x12U)))),2);
            tracep->chgSData(oldp+569,((0x1ffU & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     >> 0xbU)))),9);
            tracep->chgBit(oldp+570,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+571,((3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 8U)))),2);
            __Vtemp443[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
            __Vtemp443[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
            __Vtemp443[2U] = (0x3ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]);
            tracep->chgWData(oldp+572,(__Vtemp443),74);
            tracep->chgBit(oldp+575,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+576,((0x7fU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                  << 0x15U) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    >> 0xbU)))),7);
            __Vtemp446[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
            __Vtemp446[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
            __Vtemp446[2U] = (0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U]);
            tracep->chgWData(oldp+577,(__Vtemp446),72);
            tracep->chgBit(oldp+580,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+581,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0x16U))));
            __Vtemp449[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                         >> 0x18U));
            __Vtemp449[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         >> 0x18U));
            __Vtemp449[2U] = (0xffffffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                              >> 0x18U)));
            tracep->chgWData(oldp+582,(__Vtemp449),88);
            tracep->chgIData(oldp+585,((0x7ffffffU 
                                        & ((0x7fc0000U 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                               << 0xfU)) 
                                           | ((0x3fe00U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                  << 6U)) 
                                              | (0x1ffU 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                    >> 3U)))))),27);
            __Vtemp455[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                         >> 0x18U));
            __Vtemp455[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         >> 0x18U));
            __Vtemp455[2U] = ((0xfffffc00U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               << 0x12U) 
                                              | (0x3fc00U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    >> 0xeU)))) 
                              | (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                              >> 0x18U))));
            __Vtemp455[3U] = ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         >> 0xeU)) 
                              | (0xfffffc00U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                 << 0x12U) 
                                                | (0x3fc00U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                      >> 0xeU)))));
            __Vtemp455[4U] = ((0xfff00000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               << 0x1cU) 
                                              | (0xff00000U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    >> 4U)))) 
                              | ((0x3ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                            >> 0xeU)) 
                                 | (0xffc00U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                 << 0x12U) 
                                                | (0x3fc00U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                      >> 0xeU))))));
            __Vtemp455[5U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                           >> 4U)) 
                              | (0xfff00000U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                 << 0x1cU) 
                                                | (0xff00000U 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                      >> 4U)))));
            __Vtemp455[6U] = (0x3fffffffU & ((0xfffffU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                 >> 4U)) 
                                             | (0x3ff00000U 
                                                & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                    << 0x1cU) 
                                                   | (0xff00000U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                         >> 4U))))));
            tracep->chgWData(oldp+586,(__Vtemp455),222);
            tracep->chgBit(oldp+593,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+594,((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                              >> 0xaU))),2);
            tracep->chgSData(oldp+595,((0x1ffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                  >> 3U))),9);
            tracep->chgBit(oldp+596,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+597,((3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])),2);
            __Vtemp458[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                         >> 0x18U));
            __Vtemp458[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         >> 0x18U));
            __Vtemp458[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                         << 8U) | (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                   >> 0x18U)));
            tracep->chgWData(oldp+598,(__Vtemp458),74);
            tracep->chgBit(oldp+601,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 2U))));
            tracep->chgCData(oldp+602,((0x7fU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                 >> 3U))),7);
            __Vtemp461[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                         >> 0x18U));
            __Vtemp461[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                         >> 0x18U));
            __Vtemp461[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                        << 8U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                  >> 0x18U)));
            tracep->chgWData(oldp+603,(__Vtemp461),72);
            tracep->chgBit(oldp+606,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+607,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 0xeU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+608,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata),32);
            tracep->chgIData(oldp+609,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr),32);
            tracep->chgIData(oldp+610,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg),32);
            tracep->chgBit(oldp+611,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                            >> 0x10U))));
            tracep->chgCData(oldp+612,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type),2);
            tracep->chgCData(oldp+613,((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                              >> 0x14U))),2);
            tracep->chgIData(oldp+614,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg),32);
            tracep->chgIData(oldp+615,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg),32);
            tracep->chgIData(oldp+616,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__haltsum0_reg),32);
            tracep->chgIData(oldp+617,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg),32);
            tracep->chgBit(oldp+618,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                         >> 8U)))))) 
                                      & ((((~ ((0U 
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
                                          | ((2U != 
                                              (7U & 
                                               (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                >> 0x14U))) 
                                             & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                     >> 0x18U))) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                   >> 0x11U)))) 
                                         | ((0U == 
                                             (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                 >> 0x18U))) 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                               >> 0x12U))))));
            tracep->chgBit(oldp+619,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                        & (2U == (0xffU 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                     >> 0x18U)))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                         >> 8U)))))) 
                                      & (((1U == (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                     >> 0x14U))) 
                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg) 
                                         | ((2U == 
                                             (7U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                               >> 0x14U))) 
                                            & (0U != 
                                               (3U 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))));
            tracep->chgCData(oldp+620,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg),2);
            tracep->chgBit(oldp+621,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack));
            tracep->chgBit(oldp+622,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted));
            tracep->chgBit(oldp+623,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q));
            tracep->chgBit(oldp+624,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command));
            tracep->chgCData(oldp+625,(((2U == (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U)))
                                         ? (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                    >> 0x14U))))
                                         : 1U)),4);
            tracep->chgIData(oldp+626,(((2U == (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U)))
                                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg
                                         : (0xffffU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))),32);
            tracep->chgIData(oldp+627,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr),32);
            tracep->chgCData(oldp+628,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout),4);
            tracep->chgBit(oldp+629,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din));
            tracep->chgBit(oldp+630,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned));
            tracep->chgBit(oldp+631,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                            >> 0x13U))));
            tracep->chgCData(oldp+632,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout),5);
            tracep->chgBit(oldp+633,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1));
            tracep->chgCData(oldp+634,(((((1U & (- (IData)(
                                                           (0U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                >> 0x11U)))))) 
                                          | (2U & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))) 
                                         | (4U & (- (IData)(
                                                            (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                 >> 0x11U))))))) 
                                        | (8U & (- (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                                                >> 0x11U)))))))),4);
            tracep->chgBit(oldp+635,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done));
            tracep->chgBit(oldp+636,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done));
            tracep->chgBit(oldp+637,((0xfU == (0xfU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg 
                                                  >> 0x1cU)))));
            tracep->chgBit(oldp+638,((0xfU != (0xfU 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg 
                                                  >> 0x1cU)))));
            tracep->chgBit(oldp+639,(((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                          | (4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                         | (5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                       | (7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                      | (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))));
            tracep->chgCData(oldp+640,((3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                              >> 0x14U))),3);
            tracep->chgCData(oldp+641,((7U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                              >> 0x11U))),3);
            tracep->chgIData(oldp+642,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg),32);
            tracep->chgQData(oldp+643,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)))),64);
            tracep->chgIData(oldp+645,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg),32);
            tracep->chgIData(oldp+646,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg),32);
            tracep->chgIData(oldp+647,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg),32);
            tracep->chgBit(oldp+648,(((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                      | (5U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))));
            tracep->chgBit(oldp+649,(((4U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                      | (6U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))));
            tracep->chgBit(oldp+650,((3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
            tracep->chgBit(oldp+651,((7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
            tracep->chgBit(oldp+652,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout));
            tracep->chgBit(oldp+653,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
            tracep->chgBit(oldp+654,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
            tracep->chgCData(oldp+655,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout),3);
            tracep->chgCData(oldp+656,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout),4);
            tracep->chgBit(oldp+657,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
            tracep->chgCData(oldp+658,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout),3);
            tracep->chgSData(oldp+659,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout),16);
            tracep->chgSData(oldp+660,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout),16);
            tracep->chgCData(oldp+661,((3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg)),2);
            tracep->chgCData(oldp+662,((0x1fU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr)),5);
            tracep->chgSData(oldp+663,((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr)),12);
            tracep->chgIData(oldp+664,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgCData(oldp+665,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir),5);
            tracep->chgCData(oldp+666,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en),2);
            tracep->chgBit(oldp+667,((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgCData(oldp+668,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout),4);
            tracep->chgBit(oldp+669,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din));
            tracep->chgBit(oldp+670,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in));
            tracep->chgBit(oldp+671,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in));
            tracep->chgBit(oldp+672,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+673,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 6U))));
            tracep->chgBit(oldp+674,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 5U))));
            tracep->chgBit(oldp+675,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 4U))));
            tracep->chgBit(oldp+676,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 3U))));
            tracep->chgBit(oldp+677,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 2U))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits) 
                                            >> 1U))));
            tracep->chgBit(oldp+679,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits))));
            tracep->chgBit(oldp+680,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__tf_push));
            tracep->chgSData(oldp+681,((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_data)),16);
            tracep->chgBit(oldp+682,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en));
            tracep->chgBit(oldp+683,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
            tracep->chgIData(oldp+684,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_data),32);
            tracep->chgCData(oldp+685,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__Digits_Bits),7);
            tracep->chgBit(oldp+686,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_irq));
            tracep->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                            >> 6U))));
            tracep->chgCData(oldp+688,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp),2);
            tracep->chgCData(oldp+689,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp),2);
            tracep->chgCData(oldp+690,((3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp)))),2);
            tracep->chgCData(oldp+691,((3U & ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp)))),2);
            tracep->chgCData(oldp+692,((3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)))),2);
            tracep->chgCData(oldp+693,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__wp),2);
            tracep->chgCData(oldp+694,((3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__wp)))),2);
            tracep->chgCData(oldp+695,((3U & ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__wp)))),2);
            tracep->chgIData(oldp+696,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out),32);
            tracep->chgIData(oldp+697,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux),32);
            tracep->chgCData(oldp+698,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl),2);
            tracep->chgIData(oldp+699,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints),32);
            tracep->chgBit(oldp+700,(((0U != vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ints) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_ctrl))));
            tracep->chgIData(oldp+701,(((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_out 
                                         & (~ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux)) 
                                        | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__aux_i 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__rgpio_aux))),32);
            tracep->chgBit(oldp+702,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                               >> 3U)))));
            tracep->chgSData(oldp+703,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl),9);
            tracep->chgCData(oldp+704,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is),8);
            tracep->chgCData(oldp+705,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is),3);
            tracep->chgBit(oldp+706,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__we_o));
            tracep->chgBit(oldp+707,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__enable));
            tracep->chgCData(oldp+708,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr),8);
            tracep->chgSData(oldp+709,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dl),16);
            tracep->chgSData(oldp+710,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__dlc),16);
            tracep->chgBit(oldp+711,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tx_reset));
            tracep->chgBit(oldp+712,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                                            >> 7U))));
            tracep->chgBit(oldp+713,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr0));
            tracep->chgBit(oldp+714,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                            >> 1U))));
            tracep->chgBit(oldp+715,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out))));
            tracep->chgBit(oldp+716,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out) 
                                            >> 2U))));
            tracep->chgBit(oldp+717,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr5));
            tracep->chgBit(oldp+718,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr6));
            tracep->chgBit(oldp+719,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask));
            tracep->chgSData(oldp+720,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_data_out),11);
            tracep->chgBit(oldp+721,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse));
            tracep->chgCData(oldp+722,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tf_count),5);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__tstate),3);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__rstate),4);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__block_value),8);
            tracep->chgBit(oldp+726,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out));
            tracep->chgBit(oldp+727,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_in));
            tracep->chgBit(oldp+728,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+729,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read));
            tracep->chgBit(oldp+730,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read));
            tracep->chgBit(oldp+731,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read));
            tracep->chgBit(oldp+732,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write));
            tracep->chgCData(oldp+733,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter),5);
            tracep->chgCData(oldp+734,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
            tracep->chgCData(oldp+735,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
            tracep->chgBit(oldp+736,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
            tracep->chgBit(oldp+737,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor));
            tracep->chgBit(oldp+738,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop));
            tracep->chgBit(oldp+739,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out));
            tracep->chgCData(oldp+740,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
            tracep->chgCData(oldp+741,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
            tracep->chgCData(oldp+742,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
            tracep->chgCData(oldp+743,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
            tracep->chgCData(oldp+744,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
            tracep->chgCData(oldp+745,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
            tracep->chgCData(oldp+746,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift),8);
            tracep->chgBit(oldp+747,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity));
            tracep->chgBit(oldp+748,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error));
            tracep->chgBit(oldp+749,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error));
            tracep->chgBit(oldp+750,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor));
            tracep->chgCData(oldp+751,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b),8);
            tracep->chgSData(oldp+752,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
            tracep->chgBit(oldp+753,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push));
            tracep->chgBit(oldp+754,((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b))));
            tracep->chgBit(oldp+755,((7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+756,((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgCData(oldp+757,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                                - (IData)(1U)))),4);
            tracep->chgSData(oldp+758,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value),10);
            tracep->chgCData(oldp+759,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+760,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
            tracep->chgCData(oldp+761,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
            tracep->chgCData(oldp+762,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
            tracep->chgIData(oldp+763,(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req),31);
            tracep->chgIData(oldp+764,((vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                        << 1U)),32);
            tracep->chgBit(oldp+765,((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req)));
            tracep->chgBit(oldp+766,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 1U))));
            tracep->chgBit(oldp+767,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 2U))));
            tracep->chgBit(oldp+768,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 3U))));
            tracep->chgBit(oldp+769,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 4U))));
            tracep->chgBit(oldp+770,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 5U))));
            tracep->chgBit(oldp+771,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 6U))));
            tracep->chgBit(oldp+772,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 7U))));
            tracep->chgBit(oldp+773,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 8U))));
            tracep->chgBit(oldp+774,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 9U))));
            tracep->chgBit(oldp+775,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xaU))));
            tracep->chgBit(oldp+776,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xbU))));
            tracep->chgBit(oldp+777,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xcU))));
            tracep->chgBit(oldp+778,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xdU))));
            tracep->chgBit(oldp+779,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xeU))));
            tracep->chgBit(oldp+780,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0xfU))));
            tracep->chgBit(oldp+781,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x10U))));
            tracep->chgBit(oldp+782,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x11U))));
            tracep->chgBit(oldp+783,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x12U))));
            tracep->chgBit(oldp+784,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x13U))));
            tracep->chgBit(oldp+785,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x14U))));
            tracep->chgBit(oldp+786,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x15U))));
            tracep->chgBit(oldp+787,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x16U))));
            tracep->chgBit(oldp+788,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x17U))));
            tracep->chgBit(oldp+789,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x18U))));
            tracep->chgBit(oldp+790,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x19U))));
            tracep->chgBit(oldp+791,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+792,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+793,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+794,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+795,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__rvtop__extintsrc_req 
                                            >> 0x1eU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgCData(oldp+796,(((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                               >> (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                      << 1U))))
                                         ? 2U : ((1U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                          << 1U)))))
                                                  ? 3U
                                                  : 0U))),2);
            tracep->chgBit(oldp+797,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 4U))));
            tracep->chgBit(oldp+798,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 3U))));
            tracep->chgBit(oldp+799,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 5U))));
            tracep->chgCData(oldp+800,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__ic_rd_hit),2);
            tracep->chgIData(oldp+801,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__ictag_debug_rd_data),26);
            tracep->chgWData(oldp+802,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__ic_debug_rd_data),71);
            tracep->chgCData(oldp+805,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__ic_parerr),2);
            tracep->chgBit(oldp+806,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done));
            tracep->chgBit(oldp+807,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done));
            tracep->chgBit(oldp+808,(((0U != (3U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                               >> (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                      << 1U))))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done))));
            tracep->chgIData(oldp+809,((((0xffU & (
                                                   (- (IData)(
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
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))),32);
            tracep->chgBit(oldp+810,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns));
            tracep->chgBit(oldp+811,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))));
            tracep->chgBit(oldp+812,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xdU))));
            tracep->chgBit(oldp+813,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xcU))));
            tracep->chgBit(oldp+814,((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 0xdU) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))));
            tracep->chgBit(oldp+815,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__ic_rd_hit))));
            tracep->chgBit(oldp+816,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xbU))));
            tracep->chgBit(oldp+817,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1));
            tracep->chgBit(oldp+818,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type));
            tracep->chgBit(oldp+819,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type));
            tracep->chgBit(oldp+820,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+821,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+822,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+823,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
            tracep->chgBit(oldp+824,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode));
            tracep->chgBit(oldp+825,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted));
            tracep->chgBit(oldp+826,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed));
            tracep->chgBit(oldp+827,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+828,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xeU))));
            tracep->chgSData(oldp+829,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r),10);
            tracep->chgBit(oldp+830,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns));
            tracep->chgBit(oldp+831,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_en));
            tracep->chgBit(oldp+832,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 5U))));
            tracep->chgBit(oldp+833,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 6U))));
            tracep->chgIData(oldp+834,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r),31);
            tracep->chgIData(oldp+835,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r),31);
            tracep->chgBit(oldp+836,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r));
            tracep->chgBit(oldp+837,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 4U))));
            tracep->chgBit(oldp+838,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done));
            tracep->chgBit(oldp+839,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 3U))));
            tracep->chgBit(oldp+840,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken));
            tracep->chgBit(oldp+841,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0x10U))));
            tracep->chgBit(oldp+842,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xfU))));
            tracep->chgBit(oldp+843,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xeU))));
            tracep->chgBit(oldp+844,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0xaU))));
            tracep->chgBit(oldp+845,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 8U))));
            tracep->chgBit(oldp+846,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 7U))));
            tracep->chgBit(oldp+847,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 2U))));
            tracep->chgCData(oldp+848,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r),4);
            tracep->chgCData(oldp+849,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r),4);
            tracep->chgBit(oldp+850,((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))));
            tracep->chgBit(oldp+851,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r));
            tracep->chgBit(oldp+852,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r));
            tracep->chgBit(oldp+853,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 9U))));
            tracep->chgBit(oldp+854,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+855,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected));
            tracep->chgBit(oldp+856,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns));
            tracep->chgBit(oldp+857,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 2U))));
            tracep->chgBit(oldp+858,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 9U))));
            tracep->chgBit(oldp+859,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 8U))));
            tracep->chgBit(oldp+860,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 7U))));
            tracep->chgBit(oldp+861,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns));
            tracep->chgBit(oldp+862,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 6U))));
            tracep->chgBit(oldp+863,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                            >> 1U))));
            tracep->chgBit(oldp+864,((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                >> 2U)) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                               >> 7U)))));
            tracep->chgBit(oldp+865,((1U & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)));
            tracep->chgBit(oldp+866,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0x11U))));
            tracep->chgBit(oldp+867,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 1U))));
            tracep->chgBit(oldp+868,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r));
            tracep->chgBit(oldp+869,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r));
            tracep->chgBit(oldp+870,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r)) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r))))));
            tracep->chgBit(oldp+871,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_r));
            tracep->chgCData(oldp+872,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep),4);
            tracep->chgBit(oldp+873,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1));
            tracep->chgSData(oldp+874,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout),16);
            tracep->chgIData(oldp+875,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout),18);
            tracep->chgIData(oldp+876,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r),31);
            tracep->chgBit(oldp+877,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed))));
            tracep->chgIData(oldp+878,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r),31);
            tracep->chgCData(oldp+879,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error),4);
            tracep->chgCData(oldp+880,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en),2);
            tracep->chgCData(oldp+881,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset),2);
            tracep->chgBit(oldp+882,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr));
            tracep->chgBit(oldp+883,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)) 
                                            & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr))))));
            tracep->chgCData(oldp+884,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz),2);
            tracep->chgCData(oldp+885,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr),2);
            tracep->chgIData(oldp+886,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata),32);
            tracep->chgBit(oldp+887,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                             ? ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)) 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)))
                                             : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)))));
            tracep->chgBit(oldp+888,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset))));
            tracep->chgBit(oldp+889,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en))));
            tracep->chgBit(oldp+890,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                                            >> 1U))));
            tracep->chgBit(oldp+891,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                            >> 1U))));
            tracep->chgQData(oldp+892,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw),52);
            tracep->chgQData(oldp+894,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout),50);
            tracep->chgCData(oldp+896,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr),2);
            tracep->chgQData(oldp+897,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_data),52);
            tracep->chgBit(oldp+899,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_bypass));
            tracep->chgQData(oldp+900,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC0__DOT__ic_tag_data_raw_packed),44);
            tracep->chgIData(oldp+902,((0xfffffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout))),20);
            tracep->chgBit(oldp+903,((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+904,((1U & (VL_REDXOR_32(
                                                         (0xfffffU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                       >> 0x14U))))));
            tracep->chgIData(oldp+905,((0xfffffU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                            >> 0x19U)))),20);
            tracep->chgBit(oldp+906,((1U & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+907,((1U & (VL_REDXOR_32(
                                                         (0xfffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                                     >> 0x19U)))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                       >> 0x2dU))))));
            tracep->chgCData(oldp+908,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_sel_sb),2);
            tracep->chgWData(oldp+909,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout),284);
            tracep->chgWData(oldp+918,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data),142);
            tracep->chgWData(oldp+923,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank),142);
            tracep->chgWData(oldp+928,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre),284);
            tracep->chgWData(oldp+937,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way),128);
            tracep->chgWData(oldp+941,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc),142);
            tracep->chgCData(oldp+946,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__bank_check_en),2);
            tracep->chgCData(oldp+947,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q),2);
            tracep->chgWData(oldp+948,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data),284);
            tracep->chgCData(oldp+957,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass),2);
            tracep->chgWData(oldp+958,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC0__DOT__wb_packeddout),272);
            tracep->chgWData(oldp+967,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC0__DOT__wb_packeddout),272);
            tracep->chgCData(oldp+976,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ECC0_MUX__DOT__ic_parerr_bank),8);
            __Vtemp467[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U];
            __Vtemp467[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U];
            __Vtemp467[2U] = ((0xfffffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U] 
                                              << 4U)) 
                              | (0xfU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U]));
            __Vtemp467[3U] = ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[0U] 
                                       >> 0x1cU)) | 
                              (0xfffffff0U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U] 
                                              << 4U)));
            __Vtemp467[4U] = (0xffU & ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[1U] 
                                                >> 0x1cU)) 
                                       | (0xf0U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
                                                   << 4U))));
            tracep->chgWData(oldp+977,(__Vtemp467),136);
            __Vtemp473[0U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
                               << 0x19U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
                                            >> 7U));
            __Vtemp473[1U] = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
                               << 0x19U) | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
                                            >> 7U));
            __Vtemp473[2U] = ((0xfffffff0U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
                                               << 0x1dU) 
                                              | (0x1ffffff0U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[2U] 
                                                    >> 3U)))) 
                              | (0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
                                         >> 7U)));
            __Vtemp473[3U] = ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
                                       >> 3U)) | (0xfffffff0U 
                                                  & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
                                                      << 0x1dU) 
                                                     | (0x1ffffff0U 
                                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[3U] 
                                                           >> 3U)))));
            __Vtemp473[4U] = (0xffU & ((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
                                                >> 3U)) 
                                       | (0xf0U & (
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_sb_wr_data[4U] 
                                                   >> 3U))));
            tracep->chgWData(oldp+982,(__Vtemp473),136);
            tracep->chgSData(oldp+987,((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[0U])),16);
            tracep->chgBit(oldp+988,((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U])));
            tracep->chgBit(oldp+989,((1U & (VL_REDXOR_32(
                                                         (0xffffU 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[0U])) 
                                            ^ vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U]))));
            tracep->chgSData(oldp+990,((0xffffU & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgBit(oldp+991,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+992,((1U & (VL_REDXOR_32(
                                                         (0xffffU 
                                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[0U] 
                                                                >> 0x10U)))) 
                                            ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                               >> 1U)))));
            tracep->chgSData(oldp+993,((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U])),16);
            tracep->chgBit(oldp+994,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+995,((1U & (VL_REDXOR_32(
                                                         (0xffffU 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U])) 
                                            ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                               >> 2U)))));
            tracep->chgSData(oldp+996,((0xffffU & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgBit(oldp+997,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+998,((1U & (VL_REDXOR_32(
                                                         (0xffffU 
                                                          & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[1U] 
                                                                >> 0x10U)))) 
                                            ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                               >> 3U)))));
            tracep->chgSData(oldp+999,((0xffffU & (
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                                    << 0x19U) 
                                                   | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                                      >> 7U)))),16);
            tracep->chgBit(oldp+1000,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1001,((1U & (VL_REDXOR_32(
                                                          (0xffffU 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                                               << 0x19U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                                                 >> 7U)))) 
                                             ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                >> 7U)))));
            tracep->chgSData(oldp+1002,((0xffffU & 
                                         ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                           << 9U) | 
                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+1003,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1004,((1U & (VL_REDXOR_32(
                                                          (0xffffU 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                                               << 9U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[2U] 
                                                                 >> 0x17U)))) 
                                             ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                >> 8U)))));
            tracep->chgSData(oldp+1005,((0xffffU & 
                                         ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                             >> 7U)))),16);
            tracep->chgBit(oldp+1006,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1007,((1U & (VL_REDXOR_32(
                                                          (0xffffU 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                               << 0x19U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                                                 >> 7U)))) 
                                             ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                >> 9U)))));
            tracep->chgSData(oldp+1008,((0xffffU & 
                                         ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                           << 9U) | 
                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                           >> 0x17U)))),16);
            tracep->chgBit(oldp+1009,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1010,((1U & (VL_REDXOR_32(
                                                          (0xffffU 
                                                           & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                               << 9U) 
                                                              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[3U] 
                                                                 >> 0x17U)))) 
                                             ^ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_ecc_bank[4U] 
                                                >> 0xaU)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [9U] | vlTOPp->__Vm_traceActivity
                         [0xeU]))) {
            tracep->chgBit(oldp+1011,((((0U != (3U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                                   >> 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 1U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns)))));
            tracep->chgBit(oldp+1012,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns))));
            tracep->chgBit(oldp+1013,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type))));
            tracep->chgBit(oldp+1014,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type))));
            tracep->chgBit(oldp+1015,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)))));
            tracep->chgBit(oldp+1016,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgCData(oldp+1017,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))),7);
            tracep->chgIData(oldp+1018,((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1019,(((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                       | (0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)))));
            tracep->chgBit(oldp+1020,((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))));
            tracep->chgBit(oldp+1021,((1U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 1U)))));
            tracep->chgQData(oldp+1022,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr),41);
            tracep->chgQData(oldp+1024,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr),41);
            tracep->chgCData(oldp+1026,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state),4);
            tracep->chgBit(oldp+1027,((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1028,((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1029,((6U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1030,((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1031,((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1032,((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1033,((0xdU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1034,((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1035,((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
            tracep->chgBit(oldp+1036,(((0U == (0xffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x1aU)))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                  >> 0x13U)))));
            tracep->chgBit(oldp+1037,(((0U == (0xffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x1aU)))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                  >> 0x14U)))));
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x16U)))));
            tracep->chgCData(oldp+1039,(((0x10U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x15U)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x14U))) 
                                                   << 3U)) 
                                            | (7U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x11U)))))),5);
            tracep->chgCData(oldp+1040,(((0xcU & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x20U)) 
                                                  << 2U)) 
                                         | ((2U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x1eU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 3U)))))),4);
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U)))));
            tracep->chgCData(oldp+1042,((3U & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 2U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgIData(oldp+1043,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr),32);
            tracep->chgCData(oldp+1044,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size),3);
            tracep->chgCData(oldp+1045,((0xfU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                 >> 0x1cU))),4);
            tracep->chgBit(oldp+1046,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_awvalid));
            tracep->chgBit(oldp+1047,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_arvalid));
            tracep->chgQData(oldp+1048,((((((- (QData)((IData)(
                                                               (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                            & (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                         << 0x20U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                            << 0x18U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                               << 0x10U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                  << 8U) 
                                                                 | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                          | ((- (QData)((IData)(
                                                                (2U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                             & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                         | ((- (QData)((IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata))),64);
            tracep->chgCData(oldp+1050,((0xffU & ((
                                                   (((- (IData)(
                                                                (0U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size)))) 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size)))) 
                                                       & ((IData)(3U) 
                                                          << 
                                                          (6U 
                                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr)))) 
                                                   | ((- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size)))) 
                                                      & ((IData)(0xfU) 
                                                         << 
                                                         (4U 
                                                          & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr)))) 
                                                  | (- (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))))),8);
            tracep->chgBit(oldp+1051,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__sb_wvalid));
            tracep->chgBit(oldp+1052,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble));
            tracep->chgBit(oldp+1053,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1));
            tracep->chgBit(oldp+1054,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid));
            tracep->chgBit(oldp+1055,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_awvalid));
            tracep->chgBit(oldp+1056,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_wvalid));
            tracep->chgBit(oldp+1057,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_read_pend));
            tracep->chgQData(oldp+1058,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata),64);
            tracep->chgBit(oldp+1060,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+1061,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__o_flash_sclk));
            tracep->chgBit(oldp+1062,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__treg) 
                                             >> 7U))));
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__treg),8);
            tracep->chgBit(oldp+1064,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfwe));
            tracep->chgCData(oldp+1065,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__state),2);
            tracep->chgCData(oldp+1066,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__bcnt),3);
            tracep->chgSData(oldp+1067,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__clkcnt),12);
            tracep->chgBit(oldp+1068,((1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__clkcnt)))))));
            tracep->chgCData(oldp+1069,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem[0]),8);
            tracep->chgCData(oldp+1070,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem[1]),8);
            tracep->chgCData(oldp+1071,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem[2]),8);
            tracep->chgCData(oldp+1072,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem[3]),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+1073,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o));
            tracep->chgBit(oldp+1074,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o));
            tracep->chgCData(oldp+1075,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o))),2);
            tracep->chgCData(oldp+1076,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o))),2);
            tracep->chgBit(oldp+1077,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid));
            tracep->chgBit(oldp+1078,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error));
            tracep->chgBit(oldp+1079,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid));
            tracep->chgBit(oldp+1080,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error));
            tracep->chgBit(oldp+1081,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o));
            tracep->chgBit(oldp+1082,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o));
            tracep->chgCData(oldp+1083,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o))),2);
            tracep->chgCData(oldp+1084,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o))),2);
            tracep->chgBit(oldp+1085,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid));
            tracep->chgBit(oldp+1086,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error));
            tracep->chgBit(oldp+1087,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid));
            tracep->chgBit(oldp+1088,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error));
            tracep->chgBit(oldp+1089,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o));
            tracep->chgBit(oldp+1090,(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o));
            tracep->chgCData(oldp+1091,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o))),2);
            tracep->chgCData(oldp+1092,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                                          ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o))),2);
            tracep->chgBit(oldp+1093,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid));
            tracep->chgBit(oldp+1094,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error));
            tracep->chgBit(oldp+1095,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid));
            tracep->chgBit(oldp+1096,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error));
            tracep->chgCData(oldp+1097,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
            tracep->chgCData(oldp+1098,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
            tracep->chgCData(oldp+1099,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
            tracep->chgCData(oldp+1100,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
            tracep->chgCData(oldp+1101,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
            tracep->chgCData(oldp+1102,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
            tracep->chgBit(oldp+1103,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d));
            tracep->chgBit(oldp+1104,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d));
            tracep->chgIData(oldp+1105,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d),32);
            tracep->chgIData(oldp+1106,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d),32);
            tracep->chgQData(oldp+1107,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap),42);
            tracep->chgIData(oldp+1109,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d),32);
            tracep->chgSData(oldp+1110,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d),12);
            tracep->chgBit(oldp+1111,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1112,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d));
            tracep->chgBit(oldp+1113,((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1114,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d));
            tracep->chgIData(oldp+1115,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d),32);
            tracep->chgQData(oldp+1116,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d),56);
            tracep->chgBit(oldp+1118,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid));
            tracep->chgBit(oldp+1119,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d));
            tracep->chgBit(oldp+1120,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1));
            tracep->chgBit(oldp+1121,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
            tracep->chgBit(oldp+1122,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall));
            tracep->chgBit(oldp+1123,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall));
            tracep->chgCData(oldp+1124,((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU))),5);
            tracep->chgCData(oldp+1125,((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 5U))),5);
            tracep->chgIData(oldp+1126,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0),32);
            tracep->chgSData(oldp+1127,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d),12);
            tracep->chgBit(oldp+1128,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d));
            tracep->chgBit(oldp+1129,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d));
            tracep->chgBit(oldp+1130,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)))));
            tracep->chgBit(oldp+1131,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d))));
            tracep->chgBit(oldp+1132,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d));
            tracep->chgBit(oldp+1133,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid));
            tracep->chgBit(oldp+1134,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read));
            tracep->chgBit(oldp+1135,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write));
            tracep->chgBit(oldp+1136,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr));
            tracep->chgBit(oldp+1137,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
            tracep->chgWData(oldp+1138,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw),96);
            tracep->chgWData(oldp+1141,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp),96);
            tracep->chgCData(oldp+1144,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass),3);
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass),3);
            tracep->chgBit(oldp+1146,((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                              >> 0x17U) 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1147,((1U & ((~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                 >> 0x17U)) 
                                             & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1148,((1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                >> 0xdU) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d))) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                                & (0x7c2U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                       >> 0x14U))))))));
            tracep->chgBit(oldp+1149,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal));
            tracep->chgBit(oldp+1150,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x));
            tracep->chgBit(oldp+1151,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r));
            tracep->chgBit(oldp+1152,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x));
            tracep->chgBit(oldp+1153,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r));
            tracep->chgCData(oldp+1154,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d),2);
            tracep->chgCData(oldp+1155,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d),2);
            tracep->chgBit(oldp+1156,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br));
            tracep->chgSData(oldp+1157,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset),12);
            tracep->chgIData(oldp+1158,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm),20);
            tracep->chgBit(oldp+1159,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset));
            tracep->chgBit(oldp+1160,(((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
                                        >> 0x17U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case))));
            tracep->chgBit(oldp+1161,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case));
            tracep->chgBit(oldp+1162,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall));
            tracep->chgBit(oldp+1163,(((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
                                        >> 0x17U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case))));
            tracep->chgBit(oldp+1164,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case));
            tracep->chgBit(oldp+1165,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja));
            tracep->chgBit(oldp+1166,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case));
            tracep->chgBit(oldp+1167,(((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
                                        >> 0x17U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case))));
            tracep->chgBit(oldp+1168,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret));
            tracep->chgBit(oldp+1169,((1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                >> 0x17U) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case))))));
            tracep->chgBit(oldp+1170,((1U & (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                               >> 8U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                >> 1U)))));
            tracep->chgCData(oldp+1171,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d),3);
            tracep->chgCData(oldp+1172,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d),3);
            tracep->chgBit(oldp+1173,(((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                        >> 0xdU) & 
                                       (0U != (0x1fU 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))))));
            tracep->chgBit(oldp+1174,((1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 9U) 
                                               | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                  >> 8U)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1175,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d));
            tracep->chgBit(oldp+1176,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d));
            tracep->chgBit(oldp+1177,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i));
            tracep->chgBit(oldp+1178,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i))));
            tracep->chgBit(oldp+1179,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write));
            tracep->chgBit(oldp+1180,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall));
            tracep->chgBit(oldp+1181,((1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                              >> 0x17U) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br))))));
            tracep->chgBit(oldp+1182,((1U & (~ ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                 >> 0x11U) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x1fU)))))));
            tracep->chgBit(oldp+1183,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1184,((1U & (~ (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                     >> 0x1fU))) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x16U)))))));
            tracep->chgBit(oldp+1185,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1186,((1U & (~ ((((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0x1fU) 
                                                  & (~ 
                                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                      >> 0x11U))) 
                                                 & (~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x16U)))))));
            tracep->chgBit(oldp+1187,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1188,((1U & (~ (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                  >> 0x16U) 
                                                 & (~ 
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                     >> 0x1fU))) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                    >> 9U)))))));
            tracep->chgBit(oldp+1189,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1190,((1U & (~ (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x1fU)) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x16U)))))));
            tracep->chgBit(oldp+1191,((1U & (~ ((((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0x1fU) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                     >> 9U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x16U)) 
                                                & (~ 
                                                   (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                    >> 0x11U)))))));
            tracep->chgBit(oldp+1192,((1U & (~ ((((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0x1fU) 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                     >> 9U)) 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0x16U)) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1193,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__bitmanip_legal));
            tracep->chgBit(oldp+1194,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw));
            tracep->chgIData(oldp+1195,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d),32);
            tracep->chgSData(oldp+1196,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r),15);
            tracep->chgQData(oldp+1197,((((QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 0xfU)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d)))),37);
            tracep->chgCData(oldp+1199,((0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r))),5);
            tracep->chgBit(oldp+1200,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1201,(((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1)) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1))));
            tracep->chgBit(oldp+1202,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0));
            tracep->chgBit(oldp+1203,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1));
            tracep->chgBit(oldp+1204,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0));
            tracep->chgBit(oldp+1205,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1));
            tracep->chgBit(oldp+1206,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0));
            tracep->chgBit(oldp+1207,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1));
            tracep->chgBit(oldp+1208,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1209,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 6U) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1210,((1U & (((((~ 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1211,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid));
            tracep->chgBit(oldp+1212,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid));
            tracep->chgBit(oldp+1213,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid));
            tracep->chgBit(oldp+1214,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xaU) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1215,((1U & (((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1216,((1U & (((((~ 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1217,((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1218,((1U & (((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1219,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1220,((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1221,((1U & (((((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1222,((1U & (((((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1223,((1U & (((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1224,((1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1225,((1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1226,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 6U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1227,((1U & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1228,((1U & ((((((~ 
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
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1229,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U)) 
                                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1230,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac));
            tracep->chgBit(oldp+1231,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap));
            tracep->chgBit(oldp+1232,((1U & ((((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1233,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1234,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xbU) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1235,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1236,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr));
            tracep->chgBit(oldp+1237,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1238,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1239,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc));
            tracep->chgBit(oldp+1240,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1241,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1242,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1243,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1244,((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1245,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1246,((1U & (((((((~ 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1247,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1248,((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1249,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1250,((1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
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
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1251,((1U & ((((((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U)) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1252,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U) 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1253,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U) 
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
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1254,((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U) 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1255,((1U & ((((((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U)) 
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
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1256,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U)) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1257,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1258,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 6U) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1259,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 6U) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d))))));
            tracep->chgBit(oldp+1260,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics));
            tracep->chgBit(oldp+1261,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h));
            tracep->chgBit(oldp+1262,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0));
            tracep->chgBit(oldp+1263,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1));
            tracep->chgBit(oldp+1264,((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
            tracep->chgBit(oldp+1265,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync));
            tracep->chgBit(oldp+1266,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync));
            tracep->chgBit(oldp+1267,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal));
            tracep->chgQData(oldp+1268,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d),56);
            tracep->chgBit(oldp+1270,((1U & (((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                       >> 0xfU)) 
                                              | (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                         >> 0xeU))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1271,((1U & (((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                       >> 8U)) 
                                              | (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                         >> 7U))) 
                                             & (~ (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
                                                           >> 6U)))))));
            tracep->chgIData(oldp+1272,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout),31);
            tracep->chgBit(oldp+1273,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal));
            tracep->chgBit(oldp+1274,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1275,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal) 
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
            tracep->chgIData(oldp+1276,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__brimm_in_ext),32);
            tracep->chgBit(oldp+1277,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout));
            tracep->chgBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en),2);
            tracep->chgCData(oldp+1280,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en),2);
            tracep->chgBit(oldp+1281,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in));
            tracep->chgIData(oldp+1282,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in),32);
            tracep->chgCData(oldp+1283,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in),3);
            tracep->chgCData(oldp+1284,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_byteen_in),8);
            tracep->chgBit(oldp+1285,((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en))));
            tracep->chgBit(oldp+1286,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en))));
            tracep->chgBit(oldp+1287,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en))));
            tracep->chgBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                             >> 1U))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en) 
                                             >> 1U))));
            tracep->chgWData(oldp+1290,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+1293,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
            tracep->chgWData(oldp+1296,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+1299,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
            tracep->chgWData(oldp+1302,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_chan_select_in),74);
            tracep->chgWData(oldp+1305,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_chan_select_in),68);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+1308,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r));
            tracep->chgBit(oldp+1309,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r));
            tracep->chgBit(oldp+1310,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r));
            tracep->chgBit(oldp+1311,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
            tracep->chgBit(oldp+1312,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r));
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r));
            tracep->chgIData(oldp+1315,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r),31);
            tracep->chgBit(oldp+1316,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_div_cancel));
            tracep->chgBit(oldp+1317,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu_div_wren));
            tracep->chgBit(oldp+1318,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty));
            tracep->chgCData(oldp+1319,((3U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))))),2);
            tracep->chgBit(oldp+1320,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate));
            tracep->chgCData(oldp+1321,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken),4);
            tracep->chgBit(oldp+1322,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken))));
            tracep->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 1U))));
            tracep->chgBit(oldp+1324,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 2U))));
            tracep->chgBit(oldp+1325,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                                             >> 3U))));
            tracep->chgBit(oldp+1326,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r));
            tracep->chgBit(oldp+1327,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r));
            tracep->chgBit(oldp+1328,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r));
            tracep->chgIData(oldp+1329,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in),24);
            tracep->chgBit(oldp+1330,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r));
            tracep->chgBit(oldp+1331,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r));
            tracep->chgBit(oldp+1332,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume));
            tracep->chgBit(oldp+1333,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
            tracep->chgBit(oldp+1334,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r));
            tracep->chgBit(oldp+1335,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r));
            tracep->chgBit(oldp+1336,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r));
            tracep->chgBit(oldp+1337,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r));
            tracep->chgBit(oldp+1338,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r));
            tracep->chgBit(oldp+1339,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r));
            tracep->chgBit(oldp+1340,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r));
            tracep->chgBit(oldp+1341,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r));
            tracep->chgBit(oldp+1342,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r));
            tracep->chgBit(oldp+1343,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r));
            tracep->chgBit(oldp+1344,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r));
            tracep->chgBit(oldp+1345,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r));
            tracep->chgBit(oldp+1346,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r));
            tracep->chgBit(oldp+1347,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r));
            tracep->chgBit(oldp+1348,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r));
            tracep->chgBit(oldp+1349,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r));
            tracep->chgBit(oldp+1350,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r));
            tracep->chgBit(oldp+1351,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r));
            tracep->chgBit(oldp+1352,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r));
            tracep->chgBit(oldp+1353,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns));
            tracep->chgBit(oldp+1354,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt));
            tracep->chgBit(oldp+1355,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r));
            tracep->chgBit(oldp+1356,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r));
            tracep->chgBit(oldp+1357,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r));
            tracep->chgBit(oldp+1358,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r));
            tracep->chgCData(oldp+1359,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns),6);
            tracep->chgIData(oldp+1360,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns),32);
            tracep->chgIData(oldp+1361,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns),32);
            tracep->chgBit(oldp+1362,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r));
            tracep->chgIData(oldp+1363,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r),31);
            tracep->chgBit(oldp+1364,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r));
            tracep->chgBit(oldp+1365,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r));
            tracep->chgBit(oldp+1366,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r));
            tracep->chgCData(oldp+1367,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns),7);
            tracep->chgBit(oldp+1368,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r));
            tracep->chgBit(oldp+1369,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r));
            tracep->chgBit(oldp+1370,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r));
            tracep->chgBit(oldp+1371,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r));
            tracep->chgBit(oldp+1372,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r));
            tracep->chgBit(oldp+1373,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r));
            tracep->chgBit(oldp+1374,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r));
            tracep->chgBit(oldp+1375,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r));
            tracep->chgBit(oldp+1376,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready));
            tracep->chgBit(oldp+1377,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready));
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready));
            tracep->chgBit(oldp+1379,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready));
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready));
            tracep->chgBit(oldp+1381,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready));
            tracep->chgBit(oldp+1382,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int));
            tracep->chgBit(oldp+1383,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int));
            tracep->chgBit(oldp+1384,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int));
            tracep->chgBit(oldp+1385,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int));
            tracep->chgBit(oldp+1386,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
            tracep->chgBit(oldp+1387,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
            tracep->chgBit(oldp+1388,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi));
            tracep->chgBit(oldp+1389,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
            tracep->chgBit(oldp+1390,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
            tracep->chgBit(oldp+1391,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r));
            tracep->chgBit(oldp+1392,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r));
            tracep->chgBit(oldp+1393,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r));
            tracep->chgBit(oldp+1394,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r));
            tracep->chgCData(oldp+1395,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r),5);
            tracep->chgBit(oldp+1396,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable));
            tracep->chgBit(oldp+1397,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r));
            tracep->chgBit(oldp+1398,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r));
            tracep->chgBit(oldp+1399,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r));
            tracep->chgBit(oldp+1400,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r));
            tracep->chgBit(oldp+1401,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r));
            tracep->chgBit(oldp+1402,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts));
            tracep->chgBit(oldp+1403,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt));
            tracep->chgBit(oldp+1404,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
            tracep->chgBit(oldp+1405,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
            tracep->chgBit(oldp+1406,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
            tracep->chgBit(oldp+1407,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
            tracep->chgBit(oldp+1408,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
            tracep->chgBit(oldp+1409,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
            tracep->chgBit(oldp+1410,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
            tracep->chgCData(oldp+1411,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r),4);
            tracep->chgBit(oldp+1412,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1));
            tracep->chgBit(oldp+1413,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
            tracep->chgBit(oldp+1414,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled));
            tracep->chgBit(oldp+1415,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req));
            tracep->chgBit(oldp+1416,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
            tracep->chgBit(oldp+1417,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
            tracep->chgBit(oldp+1418,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req));
            tracep->chgBit(oldp+1419,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final));
            tracep->chgBit(oldp+1420,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc));
            tracep->chgBit(oldp+1421,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in));
            tracep->chgBit(oldp+1422,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r));
            tracep->chgBit(oldp+1423,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
            tracep->chgBit(oldp+1424,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0));
            tracep->chgBit(oldp+1425,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0));
            tracep->chgBit(oldp+1426,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0));
            tracep->chgBit(oldp+1427,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0));
            tracep->chgBit(oldp+1428,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0));
            tracep->chgBit(oldp+1429,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0));
            tracep->chgBit(oldp+1430,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0));
            tracep->chgBit(oldp+1431,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0));
            tracep->chgCData(oldp+1432,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual),4);
            tracep->chgBit(oldp+1433,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod));
            tracep->chgBit(oldp+1434,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r));
            tracep->chgBit(oldp+1435,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r));
            tracep->chgBit(oldp+1436,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r));
            tracep->chgBit(oldp+1437,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r));
            tracep->chgIData(oldp+1438,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns),32);
            tracep->chgIData(oldp+1439,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns),32);
            tracep->chgCData(oldp+1440,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns),3);
            tracep->chgCData(oldp+1441,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns),4);
            tracep->chgBit(oldp+1442,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r));
            tracep->chgBit(oldp+1443,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r));
            tracep->chgBit(oldp+1444,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r));
            tracep->chgBit(oldp+1445,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r));
            tracep->chgBit(oldp+1446,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok));
            tracep->chgBit(oldp+1447,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok));
            tracep->chgBit(oldp+1448,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)))));
            tracep->chgBit(oldp+1449,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)))));
            tracep->chgIData(oldp+1450,((0xffffffU 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                                            >> 8U))),24);
            tracep->chgCData(oldp+1451,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns)),8);
            tracep->chgIData(oldp+1452,((0xffffffU 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                                            >> 8U))),24);
            tracep->chgCData(oldp+1453,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns)),8);
            tracep->chgCData(oldp+1454,(((6U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
                                         | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))))),3);
            tracep->chgCData(oldp+1455,(((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
                                         | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))))),4);
            tracep->chgSData(oldp+1456,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din),10);
            tracep->chgSData(oldp+1457,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din),12);
            tracep->chgIData(oldp+1458,((0xffffffU 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                                            >> 8U))),24);
            tracep->chgCData(oldp+1459,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns)),8);
            tracep->chgBit(oldp+1460,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))));
            tracep->chgIData(oldp+1461,((0xffffffU 
                                         & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                                            >> 8U))),24);
            tracep->chgCData(oldp+1462,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns)),8);
            tracep->chgBit(oldp+1463,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r))));
            tracep->chgBit(oldp+1464,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r))));
            tracep->chgBit(oldp+1465,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns));
            tracep->chgBit(oldp+1466,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r))));
            tracep->chgBit(oldp+1467,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r))));
            tracep->chgBit(oldp+1468,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted))));
            tracep->chgBit(oldp+1469,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))));
            tracep->chgSData(oldp+1470,(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din),14);
            tracep->chgBit(oldp+1471,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))));
            tracep->chgCData(oldp+1472,((0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns))),4);
            tracep->chgBit(oldp+1473,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
            tracep->chgBit(oldp+1474,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r));
            tracep->chgBit(oldp+1475,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r));
            tracep->chgBit(oldp+1476,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m));
            tracep->chgSData(oldp+1477,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in),14);
            tracep->chgBit(oldp+1478,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in))));
            tracep->chgSData(oldp+1479,((0x1fffU & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in) 
                                          >> 1U))),13);
            tracep->chgBit(oldp+1480,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo));
            tracep->chgCData(oldp+1481,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo),4);
            tracep->chgCData(oldp+1482,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo),4);
            tracep->chgSData(oldp+1483,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo),16);
            tracep->chgBit(oldp+1484,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo));
            tracep->chgCData(oldp+1485,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo),4);
            tracep->chgBit(oldp+1486,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain));
            tracep->chgBit(oldp+1487,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
            tracep->chgBit(oldp+1488,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+1489,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+1490,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+1491,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+1492,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
            tracep->chgBit(oldp+1493,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+1494,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren));
            tracep->chgBit(oldp+1495,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren));
            tracep->chgBit(oldp+1496,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0));
            tracep->chgBit(oldp+1497,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0));
            tracep->chgBit(oldp+1498,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgIData(oldp+1499,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din),32);
            tracep->chgBit(oldp+1500,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren));
            tracep->chgSData(oldp+1501,((0xffffU & 
                                         (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                                          >> 0x10U))),16);
            tracep->chgSData(oldp+1502,((0xffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din)),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+1503,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spsr),8);
            tracep->chgBit(oldp+1504,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wffull));
            tracep->chgBit(oldp+1505,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfempty));
            tracep->chgCData(oldp+1506,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp),2);
            tracep->chgCData(oldp+1507,((3U & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgCData(oldp+1508,((0xffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)),8);
            tracep->chgBit(oldp+1509,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_awready));
            tracep->chgBit(oldp+1510,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_arready));
            tracep->chgBit(oldp+1511,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_wready));
            tracep->chgBit(oldp+1512,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_bvalid));
            tracep->chgQData(oldp+1513,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rdata),64);
            tracep->chgBit(oldp+1515,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__io_rvalid));
            tracep->chgIData(oldp+1516,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                         << 2U)),32);
            tracep->chgIData(oldp+1517,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat),32);
            tracep->chgCData(oldp+1518,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel),4);
            tracep->chgBit(oldp+1519,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we));
            tracep->chgBit(oldp+1520,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_cyc));
            tracep->chgBit(oldp+1521,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb));
            tracep->chgBit(oldp+1522,(((5U >= (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                                       & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_ptc_rty) 
                                            << 2U) 
                                           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_rty) 
                                              << 1U)) 
                                          >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))));
            tracep->chgBit(oldp+1523,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                             >> 5U))));
            tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                             >> 3U))));
            tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                             >> 4U))));
            tracep->chgBit(oldp+1526,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o))));
            tracep->chgBit(oldp+1527,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                             >> 1U))));
            tracep->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                             >> 2U))));
            tracep->chgBit(oldp+1529,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb))));
            tracep->chgSData(oldp+1530,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr),14);
            __Vtemp474[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp474[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp474[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp474[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp474[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            __Vtemp474[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                              << 2U);
            tracep->chgWData(oldp+1531,(__Vtemp474),192);
            __Vtemp475[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp475[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp475[2U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp475[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp475[4U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            __Vtemp475[5U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat;
            tracep->chgWData(oldp+1537,(__Vtemp475),192);
            tracep->chgIData(oldp+1543,((0xffffffU 
                                         & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel) 
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
            tracep->chgCData(oldp+1544,((0x3fU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we))))),6);
            tracep->chgCData(oldp+1545,(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o),6);
            tracep->chgCData(oldp+1546,((0x3fU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb))))),6);
            tracep->chgCData(oldp+1547,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel),3);
            tracep->chgCData(oldp+1548,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match),6);
            tracep->chgBit(oldp+1549,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__hi_32b_w));
            tracep->chgBit(oldp+1550,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__arbiter));
            tracep->chgIData(oldp+1551,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__wb_rdt_low),32);
            tracep->chgCData(oldp+1552,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi2wb__DOT__cs),4);
            tracep->chgCData(oldp+1553,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                  << 2U))),6);
            tracep->chgCData(oldp+1554,(vlSymsp->TOP__rvfpgasim__veerwolf.__Vcellinp__spi__adr_i),3);
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr),8);
            tracep->chgBit(oldp+1556,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfre));
            tracep->chgBit(oldp+1557,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfre));
            tracep->chgBit(oldp+1558,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe));
            tracep->chgBit(oldp+1559,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_acc));
            tracep->chgBit(oldp+1560,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wb_wr));
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 7U))));
            tracep->chgBit(oldp+1562,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 6U))));
            tracep->chgBit(oldp+1563,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 5U))));
            tracep->chgBit(oldp+1564,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 4U))));
            tracep->chgBit(oldp+1565,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 3U))));
            tracep->chgBit(oldp+1566,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1567,((3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr))),2);
            tracep->chgCData(oldp+1568,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__espr),4);
            tracep->chgBit(oldp+1569,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wr_spsr));
            tracep->chgBit(oldp+1570,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__spcr) 
                                                >> 6U)))));
            tracep->chgCData(oldp+1571,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                  << 2U))),8);
            tracep->chgBit(oldp+1572,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1573,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (2U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1574,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (3U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1575,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (4U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1576,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (5U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1577,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (6U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1578,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (7U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1579,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1580,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                             & (9U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))))));
            tracep->chgBit(oldp+1581,(1U));
            tracep->chgBit(oldp+1582,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_err));
            tracep->chgSData(oldp+1583,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                  << 2U))),16);
            tracep->chgBit(oldp+1584,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                       & (0U == (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+1585,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                       & (1U == (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+1586,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                       & (2U == (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgBit(oldp+1587,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                         >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                       & (3U == (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))))));
            tracep->chgCData(oldp+1588,((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),3);
            tracep->chgSData(oldp+1589,((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))),10);
            tracep->chgQData(oldp+1590,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_dat)))),64);
            tracep->chgCData(oldp+1592,(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we),8);
            tracep->chgSData(oldp+1593,((0xff8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                   << 2U))),12);
            tracep->chgSData(oldp+1594,((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr) 
                                                   >> 1U))),9);
            tracep->chgCData(oldp+1595,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+1596,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+1597,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+1598,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+1599,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                             >> 1U))));
            tracep->chgBit(oldp+1600,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                             >> 1U))));
            tracep->chgBit(oldp+1601,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                             >> 2U))));
            tracep->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                             >> 2U))));
            tracep->chgCData(oldp+1603,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids),3);
            tracep->chgCData(oldp+1604,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids),3);
            tracep->chgBit(oldp+1605,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids))));
            tracep->chgBit(oldp+1606,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids))));
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                             >> 1U))));
            tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                             >> 1U))));
            tracep->chgBit(oldp+1609,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_valids) 
                                             >> 2U))));
            tracep->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_valids) 
                                             >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+1611,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_ack));
            tracep->chgBit(oldp+1612,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_io_err));
            tracep->chgIData(oldp+1613,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__gpio_module__DOT__wb_dat),32);
            tracep->chgCData(oldp+1614,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+1615,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+1616,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                             >> 1U))));
            tracep->chgBit(oldp+1617,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                             >> 2U))));
            tracep->chgBit(oldp+1618,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+1619,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgCData(oldp+1620,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
            tracep->chgBit(oldp+1621,((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
            tracep->chgBit(oldp+1622,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                             >> 1U))));
            tracep->chgBit(oldp+1623,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                             >> 2U))));
            tracep->chgBit(oldp+1624,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
            tracep->chgBit(oldp+1625,(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        }
        tracep->chgSData(oldp+1626,(vlTOPp->i_sw),16);
        tracep->chgSData(oldp+1627,(vlTOPp->o_led),16);
        tracep->chgCData(oldp+1628,(vlTOPp->i_pb),5);
        tracep->chgCData(oldp+1629,(vlTOPp->AN),4);
        tracep->chgBit(oldp+1630,(vlTOPp->CA));
        tracep->chgBit(oldp+1631,(vlTOPp->CB));
        tracep->chgBit(oldp+1632,(vlTOPp->CC));
        tracep->chgBit(oldp+1633,(vlTOPp->CD));
        tracep->chgBit(oldp+1634,(vlTOPp->CE));
        tracep->chgBit(oldp+1635,(vlTOPp->CF));
        tracep->chgBit(oldp+1636,(vlTOPp->CG));
        tracep->chgCData(oldp+1637,(vlTOPp->Enables_Reg),4);
        tracep->chgIData(oldp+1638,(vlTOPp->Digits_Reg),32);
        tracep->chgBit(oldp+1639,(vlTOPp->tf_push));
        tracep->chgCData(oldp+1640,(vlTOPp->wb_m2s_uart_dat_output),8);
        tracep->chgBit(oldp+1641,(vlTOPp->LED_B));
        tracep->chgBit(oldp+1642,(vlTOPp->LED_G));
        tracep->chgBit(oldp+1643,(vlTOPp->LED_R));
        tracep->chgBit(oldp+1644,(vlTOPp->clk));
        tracep->chgBit(oldp+1645,(vlTOPp->rst));
        tracep->chgBit(oldp+1646,(vlTOPp->i_jtag_tck));
        tracep->chgBit(oldp+1647,(vlTOPp->i_jtag_tms));
        tracep->chgBit(oldp+1648,(vlTOPp->i_jtag_tdi));
        tracep->chgBit(oldp+1649,(vlTOPp->i_jtag_trst_n));
        tracep->chgBit(oldp+1650,(vlTOPp->o_jtag_tdo));
        tracep->chgBit(oldp+1651,(vlTOPp->o_uart_tx));
        tracep->chgSData(oldp+1652,(vlTOPp->o_gpio),16);
        tracep->chgCData(oldp+1653,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
                                             >> (0xcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q) 
                                                    << 2U))))),4);
        tracep->chgBit(oldp+1654,(vlSymsp->TOP__rvfpgasim.o_jtag_tdo));
        tracep->chgBit(oldp+1655,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__mcr) 
                                          >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__serial_out)))));
        tracep->chgBit(oldp+1656,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset));
        tracep->chgBit(oldp+1657,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset));
        tracep->chgIData(oldp+1658,(((IData)(vlTOPp->i_sw) 
                                     << 0x10U)),32);
        tracep->chgIData(oldp+1659,(((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                                      : ((2U == (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                          ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                                          : ((3U == 
                                              (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                              ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                              : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)))),32);
        __Vtemp479[0U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart_rdt;
        __Vtemp479[1U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_dat;
        __Vtemp479[2U] = ((1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                           ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc
                           : ((2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                               ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc
                               : ((3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl)
                                   : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr)));
        __Vtemp479[3U] = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi_rdt;
        __Vtemp479[4U] = (IData)((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                     ? (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))));
        __Vtemp479[5U] = (IData)(((((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                                                      ? (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout 
                                                                 >> 0x20U))
                                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.__PVT__dout)))) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_sys_dat))) 
                                  >> 0x20U));
        tracep->chgWData(oldp+1660,(__Vtemp479),192);
        tracep->chgCData(oldp+1666,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack) 
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
        tracep->chgCData(oldp+1667,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat) 
                                             >> (0xcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q) 
                                                    << 2U))))),4);
        tracep->chgCData(oldp+1668,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__mem
                                    [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp]),8);
        tracep->chgBit(oldp+1669,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb))));
        tracep->chgBit(oldp+1670,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__wp) 
                                    == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__rp)) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfifo__DOT__gb)))));
        tracep->chgCData(oldp+1671,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__mem
                                    [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
        tracep->chgBit(oldp+1672,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__tcnt)))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__rfwe))));
        tracep->chgBit(oldp+1673,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wfwe) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__spi__DOT__wffull))));
        tracep->chgBit(oldp+1674,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_s2m_gpio_err)))));
        tracep->chgIData(oldp+1675,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_cntr),32);
        tracep->chgIData(oldp+1676,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_hrc),32);
        tracep->chgIData(oldp+1677,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_lrc),32);
        tracep->chgBit(oldp+1678,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                                >> 4U))) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                            >> 7U)))));
        tracep->chgBit(oldp+1679,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                      >> 4U))));
        tracep->chgBit(oldp+1680,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__eclk_gate) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                         >> 1U)))));
        tracep->chgBit(oldp+1681,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__lrc_match) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__hrc_match)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                      >> 5U))));
        tracep->chgCData(oldp+1682,((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))
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
        tracep->chgCData(oldp+1683,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                    [vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        tracep->chgBit(oldp+1684,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_halt_req));
        tracep->chgBit(oldp+1685,((1U & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                            >> 1U)))));
        tracep->chgIData(oldp+1686,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg),32);
        tracep->chgIData(oldp+1687,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg),32);
        tracep->chgIData(oldp+1688,(((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
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
        tracep->chgBit(oldp+1689,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))));
        tracep->chgBit(oldp+1690,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0));
        tracep->chgIData(oldp+1691,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
        tracep->chgBit(oldp+1692,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))));
        tracep->chgBit(oldp+1693,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0));
        tracep->chgCData(oldp+1694,((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                         >> 0xcU) & 
                                        (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                        >> 8U)))))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                      & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                            & ((0x16U 
                                                == 
                                                (0x7fU 
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
                                          | (4U == 
                                             (0x7fU 
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
                                               ? 2U
                                               : ((
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
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
                                                   : 
                                                  ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
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
        tracep->chgBit(oldp+1695,(((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                      >> 0xcU) & (~ (IData)(
                                                            (0U 
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
        tracep->chgBit(oldp+1696,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
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
                                          | (0U != 
                                             (7U & 
                                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                               >> 0xdU)))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                     >> 8U))))))));
        tracep->chgBit(oldp+1697,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                    & (2U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                     >> 8U))))))));
        tracep->chgBit(oldp+1698,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                     >> 8U))))))));
        tracep->chgBit(oldp+1699,((((0x16U == (0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))));
        tracep->chgBit(oldp+1700,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                    & (0x18U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                   & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                         >> 0xcU)))));
        tracep->chgBit(oldp+1701,((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0xcU)) | 
                                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))));
        tracep->chgBit(oldp+1702,(((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xcU))));
        tracep->chgBit(oldp+1703,((((((0x10U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg)));
        tracep->chgBit(oldp+1704,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail));
        tracep->chgBit(oldp+1705,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted))))));
        tracep->chgBit(oldp+1706,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq));
        tracep->chgBit(oldp+1707,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                       & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                             >> 0xcU))) 
                                      & (((4U == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)) 
                                         | ((5U == 
                                             (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg) 
                                               >> 1U)))))));
        tracep->chgBit(oldp+1708,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                                   | ((((0U == (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U))) 
                                        & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                           >> 0x13U)) 
                                       & (8U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                        >> 8U)))))))));
        tracep->chgIData(oldp+1709,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din),32);
        tracep->chgBit(oldp+1710,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
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
                                          | (0x3cU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                         | (0x3dU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))))));
        tracep->chgBit(oldp+1711,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x18U)))))));
        tracep->chgCData(oldp+1712,(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din),3);
        tracep->chgBit(oldp+1713,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+1714,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))),32);
        tracep->chgBit(oldp+1715,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))));
        tracep->chgIData(oldp+1716,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                   >> 0x20U))))),32);
        tracep->chgBit(oldp+1717,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))));
        tracep->chgIData(oldp+1718,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
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
        tracep->chgBit(oldp+1719,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                    & (0x39U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                      >> 0x14U))));
        tracep->chgBit(oldp+1720,(((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                    & (0x3cU == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                      >> 0xfU))));
        tracep->chgBit(oldp+1721,((1U & (((((((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
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
        tracep->chgBit(oldp+1722,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)) 
                                          | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 8U)))));
        tracep->chgBit(oldp+1723,((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
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
        tracep->chgBit(oldp+1724,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
        tracep->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                          ? (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x16U))
                                          : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
        tracep->chgCData(oldp+1726,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren)
                                      ? ((0x10U & ((IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x15U)) 
                                                   << 4U)) 
                                         | ((8U & (
                                                   (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x14U))) 
                                                   << 3U)) 
                                            | (7U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x11U)))))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout))),5);
        tracep->chgCData(oldp+1727,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
        tracep->chgIData(oldp+1728,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
                                      ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))) 
                                         | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
                                      : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg)),32);
        tracep->chgIData(oldp+1729,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
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
        tracep->chgIData(oldp+1730,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
                                      ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))) 
                                         | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                               + ((
                                                   ((1U 
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
        tracep->chgCData(oldp+1731,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
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
        tracep->chgBit(oldp+1732,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                                          ? (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))
                                          : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
        tracep->chgBit(oldp+1733,(((((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                     & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0xcU)) | 
                                    (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)))
                                    ? ((9U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                          >> 0xcU))
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack))));
        tracep->chgBit(oldp+1734,(((((((0x10U == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                  >> 0x1eU))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                    & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn))));
        tracep->chgBit(oldp+1735,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
        tracep->chgCData(oldp+1736,((3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                             & (0x18U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U))))) 
                                            & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                                  >> 0xcU)))
                                            ? (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 2U))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)))),2);
        tracep->chgSData(oldp+1737,((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                                                 >> 0x10U)
                                                 : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))),16);
        tracep->chgSData(oldp+1738,((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
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
        tracep->chgIData(oldp+1739,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))
                                      ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 2U))) 
                                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                                 ? 
                                                (((0xffU 
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
        tracep->chgIData(oldp+1740,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
                                      ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))) 
                                         | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
                                      : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)),32);
        tracep->chgBit(oldp+1741,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done))));
        tracep->chgBit(oldp+1742,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
                                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done))));
        tracep->chgCData(oldp+1743,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))),4);
        tracep->chgIData(oldp+1744,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
                                      ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
                                      : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)),32);
        tracep->chgCData(oldp+1745,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))),4);
        tracep->chgBit(oldp+1746,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal) 
                                       & ((~ ((((((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                                   | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 0xaU) 
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
                                                          >> 1U)))) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                                              | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 3U)) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 2U))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 1U)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                          | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 0xdU)))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d) 
                                         & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid)) 
                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 2U))) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap)))))));
        tracep->chgIData(oldp+1747,((((((- (IData)(
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                    & (0U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type))))) 
                                        & (0x6033U 
                                           | (0xf8000U 
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
                                        & (0x1073U 
                                           | (0xfff00000U 
                                              & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr 
                                                 << 0x14U)))))),32);
        tracep->chgBit(oldp+1748,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+1749,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_type)))));
        tracep->chgBit(oldp+1750,(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                         >> 1U)))));
        tracep->chgIData(oldp+1751,((0x7fffffffU & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                       ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__nmi_vec 
                                          >> 1U) : 
                                      ((1U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                        ? ((0x7ffffffeU 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                           + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                              << 1U))
                                        : (0x7ffffffeU 
                                           & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec))))),31);
        tracep->chgBit(oldp+1752,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal) 
                                   & ((~ ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                               | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 0xaU) 
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
                                                      >> 1U)))) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                                          | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                      | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xdU)))));
        tracep->chgBit(oldp+1753,((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                    & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns))));
        tracep->chgBit(oldp+1754,(((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                   & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)))))));
        tracep->chgBit(oldp+1755,((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d))) 
                                   & (0x7cbU == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))));
        tracep->chgBit(oldp+1756,((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din) 
                                          ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
        tracep->chgSData(oldp+1757,(((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din) 
                                             ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))),16);
        tracep->chgBit(oldp+1758,((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                                          ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))));
        tracep->chgIData(oldp+1759,(((0U != (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                                             ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))
                                      ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
                                      : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)),18);
        tracep->chgSData(oldp+1760,((((((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                 >> 0x25U)) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                      << 0xbU) | ((
                                                   ((IData)(
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
        tracep->chgSData(oldp+1761,(((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_ctl_en))
                                      ? (((((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d 
                                                     >> 0x25U)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d)) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                          << 0xbU) 
                                         | ((((IData)(
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
        tracep->chgBit(oldp+1762,((1U & (((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data_vld)) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vld)) 
                                              | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid) 
                                                    >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg) 
                                                       >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)))) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus) 
                                                     >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr))) 
                                                 & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write) 
                                                     >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)) 
                                                    | (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write) 
                                                        >> (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr)))))) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_cmd_done_q)) 
                                          | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid))) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 8U)))));
        tracep->chgBit(oldp+1763,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))))));
        tracep->chgBit(oldp+1764,((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset) 
                                             >> 1U)) 
                                         & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                             >> 1U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout))))));
        tracep->chgCData(oldp+1765,((3U & ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                   >> 4U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+1766,((3U & ((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+1767,((3U & ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                   >> 0x1dU) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+1768,((3U & ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                                   >> 0x19U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+1769,((3U & ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                   >> 0x16U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgCData(oldp+1770,((3U & ((1U & ((
                                                   vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                   >> 0x12U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgBit(oldp+1771,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                      >> 0x17U))));
        tracep->chgBit(oldp+1772,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                  << 0xeU) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    >> 0x12U)))) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                      >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 0x12U)))))));
        tracep->chgBit(oldp+1773,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                      >> 0x16U))));
        tracep->chgBit(oldp+1774,(((2U >= (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                    >> 8U)))) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_readies) 
                                      >> (3U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                   >> 8U)))))));
        tracep->chgBit(oldp+1775,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                      >> 0xfU))));
        tracep->chgBit(oldp+1776,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                 >> 0xaU))) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_b_readies) 
                                      >> (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                >> 0xaU))))));
        tracep->chgBit(oldp+1777,(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                      >> 0xeU))));
        tracep->chgBit(oldp+1778,(((2U >= (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_r_readies) 
                                      >> (3U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))));
    }
}
