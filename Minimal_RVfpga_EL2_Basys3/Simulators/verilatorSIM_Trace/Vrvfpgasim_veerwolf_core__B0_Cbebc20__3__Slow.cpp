// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_veerwolf_core__B0_Cbebc20.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        = (1U & ((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                    >> 0x1cU) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap 
        = ((0x3fffffffffcULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__i0_ap) 
           | (IData)((IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               << 1U) | (1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                               >> 0xfU))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d 
        = ((((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                 >> 0xeU)))) & ((0xfffff000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0x1fU)))) 
                                                    << 0xcU)) 
                                                | (0xfffU 
                                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 0x14U)))) 
              | (0x1fU & ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                            >> 0xcU)))) 
                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                             >> 0x14U)))) | ((- (IData)(
                                                        (1U 
                                                         & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                             >> 0x17U) 
                                                            & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                               >> 0xbU))))) 
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
            | (0xfffff000U & ((- (IData)((1U & ((~ 
                                                 (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                  >> 0x17U)) 
                                                & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0xbU))))) 
                              & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0))) 
           | (0x1fU & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                   & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                      >> 0xfU)))) & 
                       (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d 
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x)
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
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x)
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
           | (0x80U & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                        >> 0x10U) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                                     << 7U))));
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
                   << 2U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                              << 2U) | (0xfffffffcU 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))))) 
           | ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                      << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))) 
              | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                        >> 1U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                      >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                 >> 1U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass 
        = ((4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                   << 2U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                              << 2U) | (0xfffffffcU 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
           | ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                      << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))) 
              | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                        >> 1U) & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                      >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
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
                           >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                         >> 0x17U))))
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
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal 
        = ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d)) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal) 
                      & ((~ ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 0xaU) & 
                                        (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 4U))) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 3U))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U)) & 
                                     (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 1U)))) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                             | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                                  & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 2U))) & 
                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                         | (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                            >> 0xdU)))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d) 
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
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap))))))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__bitmanip_legal));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall 
        = (1U & ((((((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                      >> 0xeU) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d)))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw)) 
                  | vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc) 
                 & ((0x20U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp[0U])
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout
                     : (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                        | vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                      >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                                 >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d) 
                                            >> 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                      >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                                 >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d) 
                                            >> 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                       >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? (IData)(((0x3fU >= 
                                          (0x18U & 
                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                            << 3U)))
                                          ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
                                             >> (0x18U 
                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
                                                    << 3U)))
                                          : 0ULL)) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_corr_r);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m
            : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                ? ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                   | (((((0x40U & ((- (IData)((1U & 
                                               ((((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                   >> 8U) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                                   << 4U)) | (0x30U 
                                              & ((- (IData)(
                                                            (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))))) 
                                                 << 4U))) 
                        | (0x10U & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))))) 
                                    << 4U))) | (0x20U 
                                                & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))) 
                                                   << 4U))) 
                      | (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)
                    ? ((0x2000U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 2U)) | ((0x300U 
                                               & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                  >> 2U)) 
                                              | ((0x70U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                 | ((2U 
                                                     & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                                          >> 2U))))))
                    : ((0x3ffcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                           << 1U) | (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & (((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                         >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout) 
           | (0x7ffff000U & (((((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
                                                   >> 0xbU) 
                                                  ^ ~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout))))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                           >> 0xdU))) 
                               | ((- (IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                                            >> 0xdU))))) 
                              | ((- (IData)((1U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout)))))) 
                                 & ((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                             >> 0xdU)) 
                                    - (IData)(1U)))) 
                             << 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[0U] 
        = (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                    & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in))))
                    ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                        : ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                   >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                            : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[1U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                     & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in))))
                     ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                         : ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                    >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                 >> 5U))))
                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                             : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[2U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 2U))))
                    ? (QData)((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr 
                                       >> 0x20U))) : 
                   (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m))
                     ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                     : ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          >> 5U))) ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[3U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 2U))))
                     ? (QData)((IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr 
                                        >> 0x20U)))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m))
                         ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                         : ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                    >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                              >> 5U)))
                             ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                             : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = ((((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff))) 
                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                         >> 1U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r 
        = (((((((((((((((0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                        | (7U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                       | (3U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                  | (0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r))))) 
                 | (1U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r))))) 
                | (3U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                                    | (0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))))) 
               | (4U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r))))))) 
              | (5U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r))))))) 
             | (6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)))))) 
            | (7U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)))))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | ((0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                   << 6U) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                 >> 6U)) 
                                             << 8U)) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                    << 6U))) | ((0x80U 
                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                      << 5U) 
                                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                        << 7U)) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                           << 7U)) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                            >> 6U)) 
                                                          << 7U)))) 
                                                | ((0x40U 
                                                    & ((0x1fffffc0U 
                                                        & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                            >> 3U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                              << 4U))) 
                                                       | (0xffffffc0U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                << 3U))))) 
                                                   | ((0x20U 
                                                       & (((0xffffffe0U 
                                                            & (((~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                  >> 2U)) 
                                                                << 5U) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                  << 3U))) 
                                                           | (0x1fffffe0U 
                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                  >> 2U) 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                    >> 3U)))) 
                                                          | (0xffffffe0U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                   << 3U))))) 
                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                                          << 4U) 
                                                         | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                                                << 2U) 
                                                               | (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                                     << 1U) 
                                                                    & ((0x7ffffffeU 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                           >> 1U)) 
                                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                                          << 1U))) 
                                                                   | (0xfffffffeU 
                                                                      & (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                                            << 1U) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                                                             << 1U)) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                              >> 6U)) 
                                                                            << 1U)))) 
                                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                          >> 2U) 
                                                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                                     | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                                                        & (~ 
                                                                           ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                            >> 6U)))))))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7c2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r 
        = (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 6U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exthaltff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                       >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                 >> 2U)) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                            >> 1U)) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                       >> 4U)) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                     >> 4U))) ? ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))
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
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r))
            ? (((((0xf0000000U & (- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type))))) 
                  | (0xf0000001U & (- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type)))))) 
                 | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))))) 
                    & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
                        << 0x1fU) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r)))) 
                | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)) 
               | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause_ns 
        = (0xfU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))) 
                     & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                                      >> 0x22U))) | 
                          (1U & (- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))))) 
                         | (2U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r))))) 
                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r))) 
                           & ((0U == (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                            >> 0xdU)))
                               ? 9U : (3U & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                             >> 0xdU)))))) 
                    | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)) 
                   | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r)) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r))
                           ? (((((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)))) 
                                 & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r) 
                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                   & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r)) 
                               | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                                  & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r 
                                     >> 1U))) | ((- (IData)(
                                                            (1U 
                                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r)) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout))
                           : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
            << 0xbU) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                         << 0xaU) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                      << 9U) | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                 << 4U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r))))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                   & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                         >> 0xfU)))) | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt) 
             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & ((((((((- (IData)(
                                                             ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r)))) 
                                                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r) 
                                                 | ((- (IData)(
                                                               ((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r))))) 
                                                    & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
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
                                                        & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec))))) 
                                               | (0x7ffffffeU 
                                                  & ((- (IData)(
                                                                ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                                                                  | ((0U 
                                                                      != (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
                                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r)))) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))))) 
                                                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec))) 
                                              | ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)))) 
                                                 & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout)) 
                                            | ((- (IData)(
                                                          ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume)))) 
                                               & vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 4U)))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffdU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (2U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)) << 1U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                               << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffeU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 3U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = ((0xfffffffffeULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
           | (IData)((IData)((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m)) 
                                & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                      >> 4U))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 0xdU))) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
              & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                   >> 7U) | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                             >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)))) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                 >> 0xdU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__excinfo_wb_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din) 
                   ^ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout)))
            ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r))
            ? (((((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                    & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r 
                       << 1U)) | (0xfffffffeU & ((- (IData)(
                                                            (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                                                                 & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r 
                                                                    >> 0xfU))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi))))) 
                                                 & (((IData)(1U) 
                                                     + vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r) 
                                                    << 1U)))) 
                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                     & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_illegal_inst)) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                    & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r 
                               >> 2U)))) | ((- (IData)(
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))))) 
                                            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r)) 
               | ((- (IData)((1U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r))) 
                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                     & (~ (((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r)))))) 
                  & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__flush_lower_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r
            : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout);
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = ((0xfffffffffdULL & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
           | ((QData)((IData)((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m))) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                                     >> 4U))))) << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U_Plus1_0__DOT__lsu_error_pkt_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffffffULL & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
                                      | (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                 >> 1U))) 
                                     | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc) 
                                        >> 4U))) ? 
                              (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                               >> 2U) : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate 
                    = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
        = ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 1U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (1U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 2U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 3U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & (~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (3U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((3U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (3U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 0U;
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
        = ((0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 1U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & (~ ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (1U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 2U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & (~ ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 3U;
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & (~ ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (3U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (3U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((3U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (3U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     << (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)) 
                    + ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                       << (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                   + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 6U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 9U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi 
        = ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & (0U != (7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                       >> 2U)))) << 1U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                       >> 2U)))) << 1U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       >> 2U)))) << 2U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       << 0x1eU) | 
                                      (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       >> 2U)))) << 2U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                      >> 2U))) << 3U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                      >> 2U))) << 3U) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U) | ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                         >> 2U)) != 
                         (0x3fffffffU & (vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                         >> 2U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
            & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                >> 7U) | ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)) 
                          & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m) 
                              >> 7U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m) 
                                           & (~ ((vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                                  ^ vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m) 
                                                 >> 2U)))))))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                  >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                  >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                             >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
               & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x10U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x20U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                          << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x40U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x80U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x200U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x400U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                           << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x800U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x1000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 9U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x2000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 0xaU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x4000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 0xbU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x8000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            << 0xcU))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfff7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffefU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x10U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              >> 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffdfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x20U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffbfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x40U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 1U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xff7fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x80U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfeffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x100U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 2U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfdffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x200U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 3U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfbffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x400U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                           << 4U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xf7ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x800U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xefffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x1000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 9U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xdfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x2000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xbfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x4000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 7U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0x7fffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x8000U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            << 8U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
            & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                            >> 0x38U)))) 
                             << 0x18U)));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 5U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 6U));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                      >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                       >> 0xaU)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r);
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)
                : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((7U > (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & ((((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                    | (7U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain)) 
                | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)) 
               | (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write))) 
              | (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en))) 
               | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                     : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                        >> 5U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
               : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                     : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                        >> 6U))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (2U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (2U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 1U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (4U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (4U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (8U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (8U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 3U)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
               : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
               : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfff0U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
               : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                   ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                   : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U] 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xff0fU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U] 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xf0ffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U] 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U] 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
}

void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_settle__TOP__rvfpgasim__veerwolf__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                           >> 0x22U)))) 
               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                          >> 0x1eU))) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
            & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg) 
           | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3dU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x39U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren 
        = (((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren 
        = (((0x17U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren 
        = ((((0x38U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3cU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x18U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x22U))))) 
                  & (~ (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
            ? vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata);
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
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
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
                                                                  >> 0x11U))))))))))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg);
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg);
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U)))));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout;
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
        = ((0xff000000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 0x18U)) 
           | (((0x780000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 0x15U)) << 0x13U)) 
               | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x1aU)))) 
                    & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                               >> 0x14U))) << 0x12U) 
                  | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1aU)))) 
                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x13U))) << 0x11U) 
                     | (0x10000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x12U)) 
                                    << 0x10U))))) | 
              (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))));
    if (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                              >> 0x18U))) | (((vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
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
                        & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x18U)))) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
    vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                       ? (vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
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

void Vrvfpgasim_veerwolf_core__B0_Cbebc20::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_veerwolf_core__B0_Cbebc20::_ctor_var_reset\n"); );
    // Body
    __PVT__io_data = VL_RAND_RESET_I(32);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rstn = VL_RAND_RESET_I(1);
    __PVT__dmi_reg_en = VL_RAND_RESET_I(1);
    __PVT__dmi_reg_addr = VL_RAND_RESET_I(7);
    __PVT__dmi_reg_wr_en = VL_RAND_RESET_I(1);
    __PVT__dmi_reg_wdata = VL_RAND_RESET_I(32);
    __PVT__dmi_reg_rdata = VL_RAND_RESET_I(32);
    __PVT__dmi_hard_reset = VL_RAND_RESET_I(1);
    __PVT__o_flash_sclk = VL_RAND_RESET_I(1);
    __PVT__o_flash_cs_n = VL_RAND_RESET_I(1);
    __PVT__o_flash_mosi = VL_RAND_RESET_I(1);
    __PVT__i_flash_miso = VL_RAND_RESET_I(1);
    __PVT__i_uart_rx = VL_RAND_RESET_I(1);
    __PVT__o_uart_tx = VL_RAND_RESET_I(1);
    __PVT__o_ram_awid = VL_RAND_RESET_I(6);
    __PVT__o_ram_awaddr = VL_RAND_RESET_I(32);
    __PVT__o_ram_awlen = VL_RAND_RESET_I(8);
    __PVT__o_ram_awsize = VL_RAND_RESET_I(3);
    __PVT__o_ram_awburst = VL_RAND_RESET_I(2);
    __PVT__o_ram_awlock = VL_RAND_RESET_I(1);
    __PVT__o_ram_awcache = VL_RAND_RESET_I(4);
    __PVT__o_ram_awprot = VL_RAND_RESET_I(3);
    __PVT__o_ram_awregion = VL_RAND_RESET_I(4);
    __PVT__o_ram_awqos = VL_RAND_RESET_I(4);
    __PVT__o_ram_awvalid = VL_RAND_RESET_I(1);
    __PVT__i_ram_awready = VL_RAND_RESET_I(1);
    __PVT__o_ram_arid = VL_RAND_RESET_I(6);
    __PVT__o_ram_araddr = VL_RAND_RESET_I(32);
    __PVT__o_ram_arlen = VL_RAND_RESET_I(8);
    __PVT__o_ram_arsize = VL_RAND_RESET_I(3);
    __PVT__o_ram_arburst = VL_RAND_RESET_I(2);
    __PVT__o_ram_arlock = VL_RAND_RESET_I(1);
    __PVT__o_ram_arcache = VL_RAND_RESET_I(4);
    __PVT__o_ram_arprot = VL_RAND_RESET_I(3);
    __PVT__o_ram_arregion = VL_RAND_RESET_I(4);
    __PVT__o_ram_arqos = VL_RAND_RESET_I(4);
    __PVT__o_ram_arvalid = VL_RAND_RESET_I(1);
    __PVT__i_ram_arready = VL_RAND_RESET_I(1);
    __PVT__o_ram_wdata = VL_RAND_RESET_Q(64);
    __PVT__o_ram_wstrb = VL_RAND_RESET_I(8);
    __PVT__o_ram_wlast = VL_RAND_RESET_I(1);
    __PVT__o_ram_wvalid = VL_RAND_RESET_I(1);
    __PVT__i_ram_wready = VL_RAND_RESET_I(1);
    __PVT__i_ram_bid = VL_RAND_RESET_I(6);
    __PVT__i_ram_bresp = VL_RAND_RESET_I(2);
    __PVT__i_ram_bvalid = VL_RAND_RESET_I(1);
    __PVT__o_ram_bready = VL_RAND_RESET_I(1);
    __PVT__i_ram_rid = VL_RAND_RESET_I(6);
    __PVT__i_ram_rdata = VL_RAND_RESET_Q(64);
    __PVT__i_ram_rresp = VL_RAND_RESET_I(2);
    __PVT__i_ram_rlast = VL_RAND_RESET_I(1);
    __PVT__i_ram_rvalid = VL_RAND_RESET_I(1);
    __PVT__o_ram_rready = VL_RAND_RESET_I(1);
    __PVT__i_ram_init_done = VL_RAND_RESET_I(1);
    __PVT__i_ram_init_error = VL_RAND_RESET_I(1);
    __PVT__AN = VL_RAND_RESET_I(4);
    __PVT__Digits_Bits = VL_RAND_RESET_I(7);
    __PVT__timer_irq = VL_RAND_RESET_I(1);
    __PVT__uart_irq = VL_RAND_RESET_I(1);
    __PVT__spi0_irq = VL_RAND_RESET_I(1);
    __PVT__nmi_vec = VL_RAND_RESET_I(32);
    __PVT__lsu_awvalid = VL_RAND_RESET_I(1);
    __PVT__lsu_arvalid = VL_RAND_RESET_I(1);
    __PVT__lsu_wvalid = VL_RAND_RESET_I(1);
    __PVT__sb_awvalid = VL_RAND_RESET_I(1);
    __PVT__sb_arvalid = VL_RAND_RESET_I(1);
    __PVT__sb_wvalid = VL_RAND_RESET_I(1);
    __PVT__io_awready = VL_RAND_RESET_I(1);
    __PVT__io_arready = VL_RAND_RESET_I(1);
    __PVT__io_wready = VL_RAND_RESET_I(1);
    __PVT__io_bid = VL_RAND_RESET_I(6);
    __PVT__io_bvalid = VL_RAND_RESET_I(1);
    __PVT__io_rid = VL_RAND_RESET_I(6);
    __PVT__io_rdata = VL_RAND_RESET_Q(64);
    __PVT__io_rvalid = VL_RAND_RESET_I(1);
    __PVT__wb_m2s_io_dat = VL_RAND_RESET_I(32);
    __PVT__wb_m2s_io_sel = VL_RAND_RESET_I(4);
    __PVT__wb_m2s_io_we = VL_RAND_RESET_I(1);
    __PVT__wb_m2s_io_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_m2s_io_stb = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_io_dat = VL_RAND_RESET_I(32);
    __PVT__wb_s2m_io_ack = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_io_err = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_spi_flash_ack = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_sys_dat = VL_RAND_RESET_I(32);
    __PVT__wb_s2m_sys_ack = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_uart_ack = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_gpio_dat = VL_RAND_RESET_I(32);
    __PVT__wb_s2m_gpio_ack = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_gpio_err = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_gpio_rty = VL_RAND_RESET_I(1);
    __PVT__wb_s2m_ptc_rty = VL_RAND_RESET_I(1);
    __PVT__wb_adr = VL_RAND_RESET_I(14);
    __PVT__spi_rdt = VL_RAND_RESET_I(8);
    __Vcellinp__spi__adr_i = VL_RAND_RESET_I(3);
    __PVT__gpio_irq = VL_RAND_RESET_I(1);
    __PVT__i_gpio = VL_RAND_RESET_I(32);
    __PVT__o_gpio = VL_RAND_RESET_I(32);
    __PVT__uart_rdt = VL_RAND_RESET_I(8);
    __Vcellinp__rvtop__extintsrc_req = VL_RAND_RESET_I(31);
    io_data__out = VL_RAND_RESET_I(32);
    io_data__en = VL_RAND_RESET_I(32);
    io_data__out__out32 = 0;
    io_data__out__out33 = 0;
    io_data__out__out34 = 0;
    io_data__out__out35 = 0;
    io_data__out__out36 = 0;
    io_data__out__out37 = 0;
    io_data__out__out38 = 0;
    io_data__out__out39 = 0;
    io_data__out__out40 = 0;
    io_data__out__out41 = 0;
    io_data__out__out42 = 0;
    io_data__out__out43 = 0;
    io_data__out__out44 = 0;
    io_data__out__out45 = 0;
    io_data__out__out46 = 0;
    io_data__out__out47 = 0;
    io_data__out__out48 = 0;
    io_data__out__out49 = 0;
    io_data__out__out50 = 0;
    io_data__out__out51 = 0;
    io_data__out__out52 = 0;
    io_data__out__out53 = 0;
    io_data__out__out54 = 0;
    io_data__out__out55 = 0;
    io_data__out__out56 = 0;
    io_data__out__out57 = 0;
    io_data__out__out58 = 0;
    io_data__out__out59 = 0;
    io_data__out__out60 = 0;
    io_data__out__out61 = 0;
    io_data__out__out62 = 0;
    io_data__out__out63 = 0;
    VL_RAND_RESET_W(651, __PVT__axi_intercon__DOT__masters_req);
    VL_RAND_RESET_W(176, __PVT__axi_intercon__DOT__slaves_resp);
    VL_RAND_RESET_W(442, axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o);
    VL_RAND_RESET_W(252, axi_intercon__DOT____Vcellout__axi_xbar__slv_ports_resp_o);
    VL_RAND_RESET_W(1953, __PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs);
    VL_RAND_RESET_W(756, __PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps);
    VL_RAND_RESET_W(1302, __PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs);
    VL_RAND_RESET_W(504, __PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(84, __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = VL_RAND_RESET_I(4);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n = VL_RAND_RESET_Q(48);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = VL_RAND_RESET_Q(48);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(9);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(9);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(84, __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = VL_RAND_RESET_I(4);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n = VL_RAND_RESET_Q(48);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = VL_RAND_RESET_Q(48);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(9);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(9);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(84, __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_empty = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_inp = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_load = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = VL_RAND_RESET_I(1);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_w_fifo__data_o = VL_RAND_RESET_I(4);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(16);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n = VL_RAND_RESET_Q(48);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q = VL_RAND_RESET_Q(48);
    axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(9);
    __PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(9);
    wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o = VL_RAND_RESET_I(6);
    __PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err = VL_RAND_RESET_I(1);
    __PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel = VL_RAND_RESET_I(3);
    __PVT__wb_intercon0__DOT__wb_mux_io__DOT__match = VL_RAND_RESET_I(6);
    __PVT__axi2wb__DOT__hi_32b_w = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    __PVT__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
    __PVT__axi2wb__DOT__aw_req = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__w_req = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__ar_req = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__mtime = VL_RAND_RESET_Q(64);
    __PVT__syscon__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    __PVT__syscon__DOT__sw_irq3 = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq3_edge = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq3_pol = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq3_timer = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq4 = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq4_edge = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq4_pol = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__sw_irq4_timer = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__irq_timer_en = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__irq_timer_cnt = VL_RAND_RESET_I(32);
    __PVT__syscon__DOT__irq_gpio_enable = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__irq_ptc_enable = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__nmi_int = VL_RAND_RESET_I(1);
    __PVT__syscon__DOT__nmi_int_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, __PVT__syscon__DOT__signature_file);
    __PVT__syscon__DOT__f = 0;
    __PVT__syscon__DOT__version = VL_RAND_RESET_I(32);
    __PVT__syscon__DOT__Enables_Reg = VL_RAND_RESET_I(4);
    __PVT__syscon__DOT__Digits_Reg = VL_RAND_RESET_I(32);
    __PVT__syscon__DOT__SegDispl_Ctr__DOT__enable = VL_RAND_RESET_I(16);
    __PVT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat = VL_RAND_RESET_I(16);
    __PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(19);
    __PVT__syscon__DOT__SegDispl_Ctr__DOT__counter18__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(19);
    __PVT__spi__DOT__spcr = VL_RAND_RESET_I(8);
    __PVT__spi__DOT__spsr = VL_RAND_RESET_I(8);
    __PVT__spi__DOT__sper = VL_RAND_RESET_I(8);
    __PVT__spi__DOT__treg = VL_RAND_RESET_I(8);
    __PVT__spi__DOT__ss_r = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wfre = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__rfwe = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__rfre = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wfwe = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wffull = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wfempty = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__state = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__bcnt = VL_RAND_RESET_I(3);
    __PVT__spi__DOT__wb_acc = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wb_wr = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__espr = VL_RAND_RESET_I(4);
    __PVT__spi__DOT__wr_spsr = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__spif = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__wcol = VL_RAND_RESET_I(1);
    __PVT__spi__DOT__clkcnt = VL_RAND_RESET_I(12);
    __PVT__spi__DOT__tcnt = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__spi__DOT__rfifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__spi__DOT__rfifo__DOT__wp = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__rfifo__DOT__rp = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__rfifo__DOT__wp_p1 = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__rfifo__DOT__rp_p1 = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__rfifo__DOT__gb = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__spi__DOT__wfifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__spi__DOT__wfifo__DOT__wp = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__wfifo__DOT__rp = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__wfifo__DOT__wp_p1 = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__wfifo__DOT__rp_p1 = VL_RAND_RESET_I(2);
    __PVT__spi__DOT__wfifo__DOT__gb = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__aux_i = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__clk_pad_i = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__rgpio_in = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_out = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_oe = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_inte = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_ptrig = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_aux = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_ctrl = VL_RAND_RESET_I(2);
    __PVT__gpio_module__DOT__rgpio_ints = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_eclk = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__rgpio_nec = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__sync = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__ext_pad_s = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__in_muxed = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__wb_err = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__wb_dat = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__extc_in = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__pext_clk = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__pextc_sampled = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__nextc_sampled = VL_RAND_RESET_I(32);
    __PVT__gpio_module__DOT__sync_clk = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__clk_s = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__clk_r = VL_RAND_RESET_I(1);
    __PVT__gpio_module__DOT__in_lach = VL_RAND_RESET_I(32);
    __PVT__timer_ptc__DOT__gate_clk_pad_i = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__capt_pad_i = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__pwm_pad_o = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__rptc_cntr = VL_RAND_RESET_I(32);
    __PVT__timer_ptc__DOT__rptc_hrc = VL_RAND_RESET_I(32);
    __PVT__timer_ptc__DOT__rptc_lrc = VL_RAND_RESET_I(32);
    __PVT__timer_ptc__DOT__rptc_ctrl = VL_RAND_RESET_I(9);
    __PVT__timer_ptc__DOT__hrc_match = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__lrc_match = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__cntr_clk = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__hrc_clk = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__lrc_clk = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__eclk_gate = VL_RAND_RESET_I(1);
    __PVT__timer_ptc__DOT__int_ptc = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_dat32_o = VL_RAND_RESET_I(32);
    __PVT__uart16550_0__DOT__we_o = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__re_o = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wb_dat_is = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is = VL_RAND_RESET_I(3);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wre = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__wb_interface__DOT__wbstate = VL_RAND_RESET_I(2);
    __PVT__uart16550_0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    __PVT__uart16550_0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    __PVT__uart16550_0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__dl = VL_RAND_RESET_I(16);
    __PVT__uart16550_0__DOT__regs__DOT__scratch = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    __PVT__uart16550_0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rf_data_out = VL_RAND_RESET_I(11);
    __PVT__uart16550_0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    __PVT__uart16550_0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    __PVT__uart16550_0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    __PVT__uart16550_0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    __PVT__uart16550_0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__fifo_write = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__uart16550_0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }}
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__rvtop__DOT__dccm_ext_in_pkt = VL_RAND_RESET_Q(48);
    __PVT__rvtop__DOT__iccm_ext_in_pkt = VL_RAND_RESET_Q(48);
    __PVT__rvtop__DOT__ic_data_ext_in_pkt = VL_RAND_RESET_Q(48);
    __PVT__rvtop__DOT__ic_tag_ext_in_pkt = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__dccm_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__dccm_rden = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__dccm_wr_addr_lo = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__dccm_wr_addr_hi = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__dccm_wr_data_lo = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__dccm_wr_data_hi = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__dccm_rd_data_lo = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__dccm_rd_data_hi = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__ic_debug_way = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(71, __PVT__rvtop__DOT__ic_debug_rd_data);
    __PVT__rvtop__DOT__ic_eccerr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__ic_parerr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__iccm_rw_addr = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__iccm_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__iccm_rden = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__iccm_wr_size = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(78, __PVT__rvtop__DOT__iccm_wr_data);
    __PVT__rvtop__DOT__iccm_buf_correct_ecc = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__iccm_correction_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, __PVT__rvtop__DOT__iccm_rd_data_ecc);
    __PVT__rvtop__DOT__core_rst_l = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__jtag_tdoEn = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__haddr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__hburst = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__hmastlock = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__hprot = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__hsize = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__htrans = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__hwrite = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__lsu_haddr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__lsu_hburst = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__lsu_hmastlock = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__lsu_hprot = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__lsu_hsize = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__lsu_htrans = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__lsu_hwrite = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__lsu_hwdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__sb_haddr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__sb_hburst = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__sb_hmastlock = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__sb_hprot = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__sb_hsize = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__sb_htrans = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__sb_hwrite = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__sb_hwdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__dma_hrdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__dma_hreadyout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__dma_hresp = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__hwdata_nc = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_awready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_wready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_bvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_bready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_bresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_bid_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_arready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_rvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_rid_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_rdata_ahb = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_rresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu_axi_rlast_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_awready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_wready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_bvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_bready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_bresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_bid_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_arready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_rvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_rid_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_rdata_ahb = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_rresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu_axi_rlast_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_awready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_wready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_bvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_bready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_bresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_bid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_arready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_rvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_rid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_rdata_ahb = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_rresp_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__sb_axi_rlast_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awaddr_ahb = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awsize_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awprot_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awlen_ahb = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_awburst_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_wvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_wdata_ahb = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_wstrb_ahb = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_wlast_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_bready_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arvalid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arid_ahb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_araddr_ahb = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arsize_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arprot_ahb = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arlen_ahb = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_arburst_ahb = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_axi_rready_ahb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, __PVT__rvtop__DOT__veer__DOT__ifu_ic_debug_rd_data);
    VL_RAND_RESET_W(90, __PVT__rvtop__DOT__veer__DOT__dec_tlu_ic_diag_pkt);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_en_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_en_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__gpr_i0_rs1_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__gpr_i0_rs2_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__i0_ap = VL_RAND_RESET_Q(42);
    __PVT__rvtop__DOT__veer__DOT__lsu_trigger_match_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_br_immed_d = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_rs1_bypass_en_d = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_rs2_bypass_en_d = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_alu_decode_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_branch_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_err_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu_flush_final = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_p = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__dec_lsu_valid_raw_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_result_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu_error_pkt_r = VL_RAND_RESET_Q(40);
    __PVT__rvtop__DOT__veer__DOT__lsu_imprecise_error_load_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_imprecise_error_store_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_store_stall_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_idle_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_active = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_fir_error = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_valid_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_inv_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data_tag = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec_nonblock_load_waddr = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec_nonblock_load_wen = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec_csr_ren_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_csr_rddata_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu_csr_rs1_x = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__div_p = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_decode_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pred_correct_npc_x = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dma_dccm_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_iccm_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_mem_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_mem_sz = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_mem_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_mem_wdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dccm_dma_rvalid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dma_dccm_stall_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_iccm_stall_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_dccm_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_pmu_any_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__iccm_dma_sb_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_i0_fa_index = VL_RAND_RESET_I(9);
    __PVT__rvtop__DOT__veer__DOT__dec_fa_error_index = VL_RAND_RESET_I(9);
    __PVT__rvtop__DOT__veer__DOT__dec_i0_predict_p_d = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__veer__DOT__picm_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__picm_rden = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__picm_mken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__picm_rd_data = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg_cmd_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg_cmd_type = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dbg_halt_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg_resume_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg_dma_bubble = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_debug_wdata_rs1_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec_data_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec_ctl_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_trxn = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_busy = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu_pmu_fetch_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu_nonblock_load_data_error = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(104, __PVT__rvtop__DOT__veer__DOT__trace_rv_trace_pkt);
    __PVT__rvtop__DOT__veer__DOT__pic_claimid = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__pic_pl = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__mexintpend = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__mhwakeup = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_active = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__haltsum0_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_unavail = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren_Q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__abmem_addr_core_local = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_arvalid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_awvalid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_wvalid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_read_pend = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_wrdata = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__rst_l_sync = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout = VL_RAND_RESET_I(5);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout = VL_RAND_RESET_I(16);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout = VL_RAND_RESET_I(16);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__rstl_syncff__DOT__din_ff1 = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(5);
    rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_fb_consume2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_single_err = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_dma_access_ok = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_access_fault_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_hit_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_way_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_btb_target_f = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hist1_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hist0_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_poffset_f = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_ret_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_pc4_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_valid_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_fghr_f = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_fa_index_f = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ic_fetch_val_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_f_raw = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__iccm_rd_ecc_double_err = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_uncacheable_bf = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_fetch_req_bf = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc_region_acc_fault_bf = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(142, rvtop__DOT__veer__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_write_ns = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_right2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fb_left = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__miss_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__goto_idle = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fetch_addr_next_1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__next_state = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__dma_stall = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fbwrite_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__fbwrite_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f1_f0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_f2_f1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__fetch_to_f2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf1val = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__sf0val = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndata = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_shift = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_2B = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__shift_4B = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1_shift_2B = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignval = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__firstpc = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__secondpc = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1poffset = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0poffset = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1fghr = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0fghr = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1hist1 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0hist1 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1hist0 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0hist0 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0index = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1index = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignindex = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1pc4 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0pc4 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1ret = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0ret = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1way = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0way = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1brend = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0brend = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignbrend = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignpc4 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignret = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignway = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignhist1 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignhist0 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_ends_f1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_br_start_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1prett = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0prett = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1dbecc = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0dbecc = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f1icaf = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0icaf = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__aligndbecc = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__alignicaf = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__i0_brp_pc4 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__firstpc_hash = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__secondpc_hash = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__first_legal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qwen = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__f0_shift_2B = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0eff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0final = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ptr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0sel = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1eff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ptr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1sel = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__qren = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__consume_fb0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__icaf_eff = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1eff = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0eff = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata1final = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__brdata0final = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__firstbrtag_hash = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__secondbrtag_hash = VL_RAND_RESET_I(5);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout = VL_RAND_RESET_I(7);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle1ff__din = VL_RAND_RESET_I(7);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout = VL_RAND_RESET_I(7);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din = VL_RAND_RESET_I(7);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pceff = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din = VL_RAND_RESET_I(16);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellout__genblk2__DOT__miscff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT____Vcellinp__genblk2__DOT__miscff__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__bundle2ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__bundle2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2pcff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1pcff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pcff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__legal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__o = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l1 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrd = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrs1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdeq1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald = VL_RAND_RESET_I(20);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd = VL_RAND_RESET_I(20);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__genblk2__DOT__miscff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__aln__DOT__genblk2__DOT__miscff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f = VL_RAND_RESET_I(29);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ic_wr_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_w_debug = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_addr_in = VL_RAND_RESET_I(26);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__last_beat = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_addr_bits_hi_3 = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_valid_w_debug = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_ff = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren_w_debug = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr_ff = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_status_wr_addr_ff = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr_w_debug = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_status_wr_addr_w_debug = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_out = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rid_ff = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_w_debug = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_unq_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arready_unq_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arvalid_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rresp_ff = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_data_c1_clk = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__other_tag = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(512, __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_ic_req_ff_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_new_rd_addr_count = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_f_ff__dout = VL_RAND_RESET_I(26);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ic_real_rd_wp_unused = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout = VL_RAND_RESET_I(9);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din = VL_RAND_RESET_I(9);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_parity_1__DOT__ic_wr_parity = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_parity_1__DOT__ic_miss_buff_parity = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(136, __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_parity_1__DOT__ic_wr_16bytes_data);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_valid_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_error_ff__dout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout = VL_RAND_RESET_I(11);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din = VL_RAND_RESET_I(11);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__iccm_index_f__din = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout = VL_RAND_RESET_Q(55);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_scnd_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__imb_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__rgn_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_data_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__misc1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_sigs_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_sigs_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(9);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_sel_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_parity_1__DOT__ifu_debug_data_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__icache_parity_1__DOT__ifu_debug_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_data_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_misc_bits__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_misc_bits__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(11);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_index_f__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_index_f__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ecc_dat0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ecc_dat0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(55);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_ib0_valid_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_decode_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_presync_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_pmu_postsync_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_wen_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wraddr_r = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wrdata_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_rdaddr_d = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_wen_unq_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_any_unq_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_csr_stall_int_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_packet_r = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_illegal_inst = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_i0_trigger_match_d = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_debug_fence_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_waddr = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_nonblock_load_wen = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__div_waddr_wb = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(152, rvtop__DOT__veer__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ib0 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_gpr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__debug_write_csr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata = VL_RAND_RESET_Q(35);
    VL_RAND_RESET_W(96, __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp_raw);
    VL_RAND_RESET_W(96, __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_dp);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1bypass = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2bypass = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_immed_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_mask_x = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_data = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__shift_illegal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_legal_decode_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_div_decode_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_notbr_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_toffset_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_ret_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_br_offset = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_imm = VL_RAND_RESET_I(20);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall_case = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pcall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja_case = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pja = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret_case = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pret = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_predict_br = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs1_class_d = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_rs2_class_d = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_d_c = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__any_csr_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pipe_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_ctl_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_ctl_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_data_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wb_data_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_data_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_i = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_csr_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__presync_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_icaf_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__lsu_idle = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_ren_qual_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_block_raw_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_d = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_d_in = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_in = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__d_t = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__x_t_in = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_t_in = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_wen_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__bitmanip_legal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__data_gate_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__data_gate_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_wen = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_write = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam = VL_RAND_RESET_Q(40);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_in = VL_RAND_RESET_Q(40);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_raw = VL_RAND_RESET_Q(40);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_load_rd = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__found = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_inv_reset_val = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_data_reset_val = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__debug_fence_raw = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_raw = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_x = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_inst_wb = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_itype = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0r = VL_RAND_RESET_I(15);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout = VL_RAND_RESET_I(5);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout = VL_RAND_RESET_Q(37);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__trap_xff__dout = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__trap_r_ff__dout = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0cgff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout = VL_RAND_RESET_I(12);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc1ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc2ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_rddata_x_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__csr_rddata_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(37);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_xff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__trap_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(17);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_x_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_r_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0rdff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0rdff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0xinstff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0xinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0cinstff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0cinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_pc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__0__KET____DOT__cam_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__0__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__1__KET____DOT__cam_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__1__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__2__KET____DOT__cam_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__2__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__3__KET____DOT__cam_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__cam_array__BRA__3__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_npc = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_halted = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_kill_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mstatus_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstretl_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_minstreth_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mepc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcause_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mscause_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtval_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dcsr_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dpc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_meicpct_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_micect_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_miccmect_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdht_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mpmc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpmc_b_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel_ns = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtsel = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__force_halt_ctr_f = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__force_halt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie_ns = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mie = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_ns = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_ns = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6 = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl_ns = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meicurpl = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt_ns = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meipt = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause_ns = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscause = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pause_expired_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad1_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_ns = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad1_raw = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ecall_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fence_i_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ic_perr_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ce_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ext_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__timer_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__soft_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ce_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_timer_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_soft_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer0_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_int_timer1_int = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__synchronous_flush_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstret_enable = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc_r = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npc_r = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__block_interrupts = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_halt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_enabled = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__update_hit_bit_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__inst_acc_r_raw = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc = VL_RAND_RESET_I(19);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timer_stalled = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__fw_halt_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_data = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitctl1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitb1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mitcnt1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__e4e5_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pc0_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_sat = VL_RAND_RESET_I(5);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme_vec = VL_RAND_RESET_Q(40);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_incr = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_incr = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_incr = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_incr = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__event_r = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mvendorid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_marchid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mimpid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_mdseac = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_meihap = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dcsr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dpc = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicawics = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0h = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__csr_dicad1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__presync = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__postsync = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__legal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__wr_mcgc_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1 = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout = VL_RAND_RESET_I(7);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout = VL_RAND_RESET_I(11);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din = VL_RAND_RESET_I(11);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout = VL_RAND_RESET_I(16);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din = VL_RAND_RESET_I(16);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout = VL_RAND_RESET_I(12);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din = VL_RAND_RESET_I(12);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout = VL_RAND_RESET_I(22);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout = VL_RAND_RESET_I(14);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dec_tlu_exc_cause_wb1_raw = VL_RAND_RESET_I(5);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__traceskidff__din = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__dicad1_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk12__DOT__mstatus_ff__dout = VL_RAND_RESET_I(27);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__genblk12__DOT__mstatus_ff__din = VL_RAND_RESET_I(27);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0 = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1 = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout = VL_RAND_RESET_I(24);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffb__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffa__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffb__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffa__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__syncro_ff__DOT__din_ff1 = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__freeff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(11);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpvhalt_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpvhalt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exthaltff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exthaltff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__flush_lower_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__excinfo_wb_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__excinfo_wb_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_bff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_aff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcyclel_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_bff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(24);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_aff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstretl_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mepc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcause_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtval_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdht_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdhs_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__forcehaltctr_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__forcehaltctr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(22);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(17);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dicad0h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcountinhibit_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__traceskidff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__traceskidff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(6);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk7__DOT__dicad1_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk12__DOT__mstatus_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__genblk12__DOT__mstatus_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(992, __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_out);
    VL_RAND_RESET_W(992, __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_in);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w0v = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__w1v = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr_wr_en = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__1__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__2__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__3__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__4__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__5__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__6__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__7__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__8__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__9__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__10__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__11__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__12__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__13__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__14__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__15__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__16__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__17__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__18__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__19__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__20__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__21__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__22__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__23__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__24__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__25__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__26__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__27__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__28__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__29__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__30__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__31__KET____DOT__gprff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__1__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__2__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__3__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__4__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__5__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__6__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__7__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__8__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__9__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__10__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__11__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__12__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__13__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__14__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__15__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__16__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__17__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__18__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__19__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__20__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__21__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__22__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__23__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__24__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__25__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__26__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__27__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__28__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__29__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__30__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__31__KET____DOT__gprff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dec__DOT__arf__DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__dec_i0_trigger_data_match = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_data_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_data_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_bypass_en_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_bypass_en_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs1_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_rs2_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__after_flush_eghr = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__final_predict_mp = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_newp_d = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__flush_in_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__alu_result_x = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__mul_valid_x = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_upper_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_flush_path_d = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_predict_p_d = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i0_branch_x = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__predpipe_x = VL_RAND_RESET_I(21);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__predpipe_r = VL_RAND_RESET_I(21);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__final_predpipe_mp = VL_RAND_RESET_I(21);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_flush_path_x_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_predictpacket_x_ff__dout = VL_RAND_RESET_Q(56);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_x_ff__dout = VL_RAND_RESET_I(12);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_r_ff0__dout = VL_RAND_RESET_Q(57);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_flush_r_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_npc_r_ff__dout = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__exu__DOT____Vcellout__i_misc_ff__dout = VL_RAND_RESET_I(10);
    rvtop__DOT__veer__DOT__exu__DOT__i_flush_path_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_csr_rs1_x_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_csr_rs1_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__exu__DOT__i_predictpacket_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_x_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(21);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_r_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_predpipe_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(21);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_x_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(12);
    rvtop__DOT__veer__DOT__exu__DOT__i_r_ff0__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(57);
    rvtop__DOT__veer__DOT__exu__DOT__i_flush_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    rvtop__DOT__veer__DOT__exu__DOT__i_npc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_misc_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(10);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__aout = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__pcout = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__cond_mispredict = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__target_mispredict = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__eq = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__lt = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__any_jal = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__newhist = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__result = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__actual_taken = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bm = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__shift_extend = VL_RAND_RESET_Q(63);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_a_reverse_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__found = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__brimm_in_ext = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i = 0;
    rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i_pc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(31);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i_result_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__i_result_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_dccm_rden_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_dccm_rden_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_hi_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_datafn_lo_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_corr_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_rdata_hi_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_rdata_lo_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_hi_r = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_data_ecc_lo_r = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__single_ecc_error_hi_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__single_ecc_error_lo_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_single_ecc_error_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_double_ecc_error_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ld_single_ecc_error_r_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_d = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_m = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_pkt_r = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_i0_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_external_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_reqvld_flushed_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_addr_any = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_data_any = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_lo_r_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__sec_data_hi_r_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_hi_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwddata_lo_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_stbuf_commit_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_empty_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_buffer_full_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__is_sideeffects_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_mem_tag_m = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wen = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_pic_wen = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_lo = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dma_dccm_wdata_hi = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busm_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_bus_obuf_c1_clken = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__store_data_r = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT____Vcellout__lsu_raw_fwd_r_ff__dout = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d = VL_RAND_RESET_I(13);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__fir_dccm_access_error_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__fir_nondccm_access_error_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__exc_mscause_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m = VL_RAND_RESET_Q(40);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout = VL_RAND_RESET_I(13);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout = VL_RAND_RESET_I(13);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_mff__dout = VL_RAND_RESET_I(29);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_rff__dout = VL_RAND_RESET_I(29);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_mff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_rff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_exc_valid_rff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_single_ecc_error_rff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout = VL_RAND_RESET_Q(38);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__unmapped_access_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__picm_access_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regpred_access_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regcross_misaligned_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__sideeffect_misaligned_fault_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_mff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_mff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(29);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(29);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U_Plus1_0__DOT__lsu_error_pkt_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U_Plus1_0__DOT__lsu_error_pkt_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(38);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__lsu_double_ecc_error_r_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_lo_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_vld = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(72, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addr);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_data);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__sel_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_reset = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(72, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_datain);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__isdccmst_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_r = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout = VL_RAND_RESET_I(18);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__RdPtrff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT__din_new = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT__din_new = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT__din_new = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(18);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT__din_new = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__is_ldst_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__single_ecc_error_lo_any = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__double_ecc_error_hi_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__double_ecc_error_lo_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_hi_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_lo_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_rplus1ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_hi_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_rplus1ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__sec_data_lo_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_hi_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_lo_rff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__sec_data_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check = VL_RAND_RESET_I(7);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__trigger_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_match_data);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_m_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_r_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_m_clken_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_r_clken_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_m = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_r = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate = VL_RAND_RESET_I(12);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0 = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1 = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bready_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rready_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_q = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_q = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_state_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_rspageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_samedwff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_nomergeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualhiff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_sideeffectff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_unsignff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_writeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_szff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_addrff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_errorff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_state_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_rspageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_samedwff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_nomergeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualhiff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_sideeffectff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_unsignff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_writeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_szff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_addrff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_errorff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_state_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_rspageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_samedwff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_nomergeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualhiff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_sideeffectff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_unsignff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_writeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_szff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_addrff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_errorff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_state_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_rspageff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_samedwff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_nomergeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualhiff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_sideeffectff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_unsignff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_writeff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_szff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_addrff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_byteenff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dataff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_errorff__dout = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tagff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_awready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_wready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_arready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rvalid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rready_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_errorff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_errorff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_errorff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_errorff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_clk_enable = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_clk_enable_grp = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clk = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_reg_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_rd_out = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_rd_out = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_rd_out = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_rd_out = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg_we = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpriority_reg_re = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_reg = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_reg_we = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intenable_reg_re = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg_we = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_config_reg_re = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en);
    VL_RAND_RESET_W(256, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_id);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__prithresh_reg_write = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__prithresh_reg_read = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wren_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_rden_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_raddr_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_waddr_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__mask = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__picm_mken_ff = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pl_in_q = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__extintsrc_req_sync = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__pic_waddr_c1_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clk = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(816, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en);
    VL_RAND_RESET_W(1632, __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__config_reg_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(4);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_valid = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_rpend = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz = VL_RAND_RESET_I(6);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_byteen = VL_RAND_RESET_I(16);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_posted_write = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_tag = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_mid = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_prty = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_cmd_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_pend_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_done_bus_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_bus_en = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_reset = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error_in = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_data_in);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_write_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_addr_in = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_sz_in = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_byteen_in = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_cmd_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_cmd_done_q = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_address_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_alignment_error = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__num_fifo_vld = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_req = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_addr_int = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_sz_int = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_mem_byteen = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_nack_count = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__bus_cmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__bus_cmd_tag = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_full_spec_bus = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dbg_dma_bubble_bus = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__stall_dma_in = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_cmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_vld = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data_vld = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_tag = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_sz = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data = VL_RAND_RESET_Q(64);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteen = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_cmd_sent = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vld = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_tag = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_sz = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_addr = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_priority = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_mstr_sel = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__axi_rsp_sent = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_byteen_dff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_mid_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_prty_dff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_byteen_dff__dout = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_mid_dff__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_prty_dff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_vldff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_data_vldff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_tagff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__wrbuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vldff__DOT__din_new = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_vldff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_tagff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__mstr_prtyff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_mid_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_prty_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__DOT__din_new = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(32);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(3);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(8);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__l1clk = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(64);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_mid_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_prty_dff__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank = VL_RAND_RESET_Q(56);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_even = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_odd = VL_RAND_RESET_I(14);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wrdata = VL_RAND_RESET_Q(39);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken = VL_RAND_RESET_I(4);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__ram__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__ram__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__ram__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__ram__Q = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__ram__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__0__KET____DOT__ram__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__ram__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__1__KET____DOT__ram__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__ram__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__2__KET____DOT__ram__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__ram__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__mem_bank__BRA__3__KET____DOT__ram__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__wren_bank = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__rden_bank = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_clken = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__addr_bank_inc = VL_RAND_RESET_I(17);
    VL_RAND_RESET_W(156, __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_address = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_valid = VL_RAND_RESET_I(2);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1 = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0 = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q = VL_RAND_RESET_I(4);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en = VL_RAND_RESET_I(1);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_address__dout = VL_RAND_RESET_I(16);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_address__dout = VL_RAND_RESET_I(16);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_data__dout = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_data__dout = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout = VL_RAND_RESET_I(3);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout = VL_RAND_RESET_I(2);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__iccm_bank__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__selred0__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__0__KET____DOT__selred1__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__iccm_bank__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__selred0__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__1__KET____DOT__selred1__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__iccm_bank__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__selred0__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__2__KET____DOT__selred1__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__iccm_bank__Q = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__selred0__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__mem_bank__BRA__3__KET____DOT__selred1__dout = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__red_lru__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_address__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_address__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(16);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_valid__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_valid__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_data__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(39);
    rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_data__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_Q(39);
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__0__KET____DOT__iccm_bank__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__0__KET____DOT__iccm_bank__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__1__KET____DOT__iccm_bank__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__1__KET____DOT__iccm_bank__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__2__KET____DOT__iccm_bank__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__2__KET____DOT__iccm_bank__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__3__KET____DOT__iccm_bank__DOT__ROP = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__mem_bank__BRA__3__KET____DOT__iccm_bank__DOT__ram_core[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = VL_RAND_RESET_I(6);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Dec_value = VL_RAND_RESET_I(8);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__1__Enc_value = VL_RAND_RESET_I(3);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Dec_value = VL_RAND_RESET_I(8);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__2__Enc_value = VL_RAND_RESET_I(3);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Dec_value = VL_RAND_RESET_I(8);
    __Vfunc_rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__3__Enc_value = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1___PVT__Digits_Bits[0] = 1U;
    __Vtable1___PVT__Digits_Bits[1] = 0x4fU;
    __Vtable1___PVT__Digits_Bits[2] = 0x12U;
    __Vtable1___PVT__Digits_Bits[3] = 6U;
    __Vtable1___PVT__Digits_Bits[4] = 0x4cU;
    __Vtable1___PVT__Digits_Bits[5] = 0x24U;
    __Vtable1___PVT__Digits_Bits[6] = 0x20U;
    __Vtable1___PVT__Digits_Bits[7] = 0xfU;
    __Vtable1___PVT__Digits_Bits[8] = 0U;
    __Vtable1___PVT__Digits_Bits[9] = 0xcU;
    __Vtable1___PVT__Digits_Bits[10] = 8U;
    __Vtable1___PVT__Digits_Bits[11] = 0x60U;
    __Vtable1___PVT__Digits_Bits[12] = 0x72U;
    __Vtable1___PVT__Digits_Bits[13] = 0x42U;
    __Vtable1___PVT__Digits_Bits[14] = 0x30U;
    __Vtable1___PVT__Digits_Bits[15] = 0x38U;
    __Vtablechg2[0] = 5U;
    __Vtablechg2[1] = 7U;
    __Vtablechg2[2] = 7U;
    __Vtablechg2[3] = 7U;
    __Vtablechg2[4] = 7U;
    __Vtablechg2[5] = 7U;
    __Vtablechg2[6] = 7U;
    __Vtablechg2[7] = 7U;
    __Vtablechg2[8] = 5U;
    __Vtablechg2[9] = 7U;
    __Vtablechg2[10] = 7U;
    __Vtablechg2[11] = 7U;
    __Vtablechg2[12] = 7U;
    __Vtablechg2[13] = 7U;
    __Vtablechg2[14] = 7U;
    __Vtablechg2[15] = 7U;
    __Vtablechg2[16] = 5U;
    __Vtablechg2[17] = 7U;
    __Vtablechg2[18] = 7U;
    __Vtablechg2[19] = 7U;
    __Vtablechg2[20] = 7U;
    __Vtablechg2[21] = 7U;
    __Vtablechg2[22] = 7U;
    __Vtablechg2[23] = 7U;
    __Vtablechg2[24] = 7U;
    __Vtablechg2[25] = 7U;
    __Vtablechg2[26] = 7U;
    __Vtablechg2[27] = 7U;
    __Vtablechg2[28] = 7U;
    __Vtablechg2[29] = 7U;
    __Vtablechg2[30] = 7U;
    __Vtablechg2[31] = 7U;
    __Vtable2___PVT__wb_s2m_uart_ack[0] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[1] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[2] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[3] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[4] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[5] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[6] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[7] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[8] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[9] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[10] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[11] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[12] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[13] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[14] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[15] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[16] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[17] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[18] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[19] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[20] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[21] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[22] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[23] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[24] = 1U;
    __Vtable2___PVT__wb_s2m_uart_ack[25] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[26] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[27] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[28] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[29] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[30] = 0U;
    __Vtable2___PVT__wb_s2m_uart_ack[31] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[0] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[1] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[2] = 2U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[3] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[4] = 3U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[5] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[6] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[7] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[8] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[9] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[10] = 2U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[11] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[12] = 3U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[13] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[14] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[15] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[16] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[17] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[18] = 2U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[19] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[20] = 3U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[21] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[22] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[23] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[24] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[25] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[26] = 2U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[27] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[28] = 3U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[29] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[30] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wbstate[31] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[0] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[1] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[2] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[3] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[4] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[5] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[6] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[7] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[8] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[9] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[10] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[11] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[12] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[13] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[14] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[15] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[16] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[17] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[18] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[19] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[20] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[21] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[22] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[23] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[24] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[25] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[26] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[27] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[28] = 0U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[29] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[30] = 1U;
    __Vtable2___PVT__uart16550_0__DOT__wb_interface__DOT__wre[31] = 1U;
    __Vtableidx3 = 0;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[0] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[1] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[2] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[3] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[4] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[5] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[6] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[7] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[8] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[9] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[10] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[11] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[12] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[13] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[14] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[15] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[16] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[17] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[18] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[19] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[20] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[21] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[22] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[23] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[24] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[25] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[26] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[27] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[28] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[29] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[30] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[31] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[32] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[33] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[34] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[35] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[36] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[37] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[38] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[39] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[40] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[41] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[42] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[43] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[44] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[45] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[46] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[47] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[48] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[49] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[50] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[51] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[52] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[53] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[54] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[55] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[56] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[57] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[58] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[59] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[60] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[61] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[62] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[63] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[64] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[65] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[66] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[67] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[68] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[69] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[70] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[71] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[72] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[73] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[74] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[75] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[76] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[77] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[78] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[79] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[80] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[81] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[82] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[83] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[84] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[85] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[86] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[87] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[88] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[89] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[90] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[91] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[92] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[93] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[94] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[95] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[96] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[97] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[98] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[99] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[100] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[101] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[102] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[103] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[104] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[105] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[106] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[107] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[108] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[109] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[110] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[111] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[112] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[113] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[114] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[115] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[116] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[117] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[118] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[119] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[120] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[121] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[122] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[123] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[124] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[125] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[126] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[127] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[128] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[129] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[130] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[131] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[132] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[133] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[134] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[135] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[136] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[137] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[138] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[139] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[140] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[141] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[142] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[143] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[144] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[145] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[146] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[147] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[148] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[149] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[150] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[151] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[152] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[153] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[154] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[155] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[156] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[157] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[158] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[159] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[160] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[161] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[162] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[163] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[164] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[165] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[166] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[167] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[168] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[169] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[170] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[171] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[172] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[173] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[174] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[175] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[176] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[177] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[178] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[179] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[180] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[181] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[182] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[183] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[184] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[185] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[186] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[187] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[188] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[189] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[190] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[191] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[192] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[193] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[194] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[195] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[196] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[197] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[198] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[199] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[200] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[201] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[202] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[203] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[204] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[205] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[206] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[207] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[208] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[209] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[210] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[211] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[212] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[213] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[214] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[215] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[216] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[217] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[218] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[219] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[220] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[221] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[222] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[223] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[224] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[225] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[226] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[227] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[228] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[229] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[230] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[231] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[232] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[233] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[234] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[235] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[236] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[237] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[238] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[239] = 0xafU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[240] = 0x5fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[241] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[242] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[243] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[244] = 0x67U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[245] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[246] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[247] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[248] = 0x6fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[249] = 0x7fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[250] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[251] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[252] = 0x77U;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[253] = 0x8fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[254] = 0x9fU;
    __Vtable3___PVT__uart16550_0__DOT__regs__DOT__block_value[255] = 0xafU;
    __Vtableidx4 = 0;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[0] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[1] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[2] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[3] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[4] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[5] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[6] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[7] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[8] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[9] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[10] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[11] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[12] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[13] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[14] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[15] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[16] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[17] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[18] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[19] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[20] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[21] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[22] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[23] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[24] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[25] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[26] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[27] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[28] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[29] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[30] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[31] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[32] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[33] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[34] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[35] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[36] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[37] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[38] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[39] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[40] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[41] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[42] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[43] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[44] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[45] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[46] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[47] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[48] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[49] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[50] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[51] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[52] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[53] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[54] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[55] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[56] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[57] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[58] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[59] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[60] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[61] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[62] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[63] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[64] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[65] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[66] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[67] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[68] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[69] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[70] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[71] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[72] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[73] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[74] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[75] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[76] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[77] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[78] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[79] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[80] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[81] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[82] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[83] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[84] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[85] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[86] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[87] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[88] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[89] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[90] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[91] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[92] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[93] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[94] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[95] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[96] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[97] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[98] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[99] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[100] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[101] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[102] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[103] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[104] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[105] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[106] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[107] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[108] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[109] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[110] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[111] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[112] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[113] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[114] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[115] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[116] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[117] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[118] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[119] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[120] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[121] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[122] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[123] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[124] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[125] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[126] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[127] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[128] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[129] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[130] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[131] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[132] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[133] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[134] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[135] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[136] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[137] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[138] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[139] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[140] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[141] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[142] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[143] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[144] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[145] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[146] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[147] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[148] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[149] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[150] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[151] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[152] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[153] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[154] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[155] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[156] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[157] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[158] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[159] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[160] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[161] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[162] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[163] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[164] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[165] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[166] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[167] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[168] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[169] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[170] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[171] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[172] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[173] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[174] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[175] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[176] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[177] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[178] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[179] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[180] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[181] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[182] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[183] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[184] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[185] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[186] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[187] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[188] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[189] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[190] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[191] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[192] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[193] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[194] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[195] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[196] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[197] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[198] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[199] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[200] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[201] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[202] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[203] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[204] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[205] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[206] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[207] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[208] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[209] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[210] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[211] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[212] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[213] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[214] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[215] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[216] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[217] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[218] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[219] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[220] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[221] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[222] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[223] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[224] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[225] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[226] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[227] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[228] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[229] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[230] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[231] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[232] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[233] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[234] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[235] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[236] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[237] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[238] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[239] = 0x2ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[240] = 0x1bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[241] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[242] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[243] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[244] = 0x1dfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[245] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[246] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[247] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[248] = 0x1ffU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[249] = 0x23fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[250] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[251] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[252] = 0x21fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[253] = 0x27fU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[254] = 0x2bfU;
    __Vtable4___PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value[255] = 0x2ffU;
    __Vdly__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __Vdly__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
    __Vdly__syscon__DOT__sw_irq4 = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq3 = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__irq_timer_cnt = VL_RAND_RESET_I(32);
    __Vdly__syscon__DOT__irq_timer_en = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq4_edge = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq4_pol = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq4_timer = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq3_edge = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq3_pol = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__sw_irq3_timer = VL_RAND_RESET_I(1);
    __Vdly__nmi_vec = VL_RAND_RESET_I(32);
    __Vdly__syscon__DOT__irq_gpio_enable = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__irq_ptc_enable = VL_RAND_RESET_I(1);
    __Vdly__syscon__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    __Vdly__syscon__DOT__mtime = VL_RAND_RESET_Q(64);
    __Vdly__wb_s2m_sys_ack = VL_RAND_RESET_I(1);
    __Vdly__spi__DOT__clkcnt = VL_RAND_RESET_I(12);
    __Vdly__spi__DOT__state = VL_RAND_RESET_I(2);
    __Vdly__spi__DOT__bcnt = VL_RAND_RESET_I(3);
    __Vdly__spi__DOT__treg = VL_RAND_RESET_I(8);
    __Vdly__spi__DOT__wfre = VL_RAND_RESET_I(1);
    __Vdly__o_flash_sclk = VL_RAND_RESET_I(1);
    __Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0 = 0;
    __Vdlyvval__spi__DOT__wfifo__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__spi__DOT__wfifo__DOT__mem__v0 = 0;
    __Vdly__gpio_module__DOT__rgpio_ctrl = VL_RAND_RESET_I(2);
    __Vdly__gpio_module__DOT__rgpio_ints = VL_RAND_RESET_I(32);
    __Vdly__timer_ptc__DOT__rptc_ctrl = VL_RAND_RESET_I(9);
    __Vdly__timer_ptc__DOT__rptc_cntr = VL_RAND_RESET_I(32);
    __Vdly__uart16550_0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    __Vdly__uart16550_0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    __Vdly__uart16550_0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    __Vdly__uart16550_0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    __Vdly__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
}
