// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_dpram64__S1000_MB0.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vrvfpgasim_dpram64__S1000_MB0) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_dpram64__S1000_MB0::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_dpram64__S1000_MB0::~Vrvfpgasim_dpram64__S1000_MB0() {
}

void Vrvfpgasim_dpram64__S1000_MB0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000_MB0::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(8);
    __PVT__din = VL_RAND_RESET_Q(64);
    __PVT__waddr = VL_RAND_RESET_I(12);
    __PVT__raddr = VL_RAND_RESET_I(12);
    __PVT__dout = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            mem[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    __PVT__i = VL_RAND_RESET_I(32);
}
