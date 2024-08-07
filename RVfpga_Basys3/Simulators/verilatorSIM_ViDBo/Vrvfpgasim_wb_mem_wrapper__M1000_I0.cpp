// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_wb_mem_wrapper__M1000_I0.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_I0::_settle__TOP__rvfpgasim__veerwolf__bootrom__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_I0::_settle__TOP__rvfpgasim__veerwolf__bootrom__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we 
        = ((0xf0U & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                  >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr)))
               ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel)
               : 0U));
    vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we 
        = ((0xfU & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__mem_we)) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                   >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_we)) 
                & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_adr))
                ? (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_sel)
                : 0U) << 4U));
}

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_I0::_sequent__TOP__rvfpgasim__veerwolf__bootrom__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_I0::_sequent__TOP__rvfpgasim__veerwolf__bootrom__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
             >> 5U) & (IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__wb_m2s_io_stb)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn)))) {
        vlSymsp->TOP__rvfpgasim__veerwolf__bootrom.__PVT__o_wb_ack = 0U;
    }
}
