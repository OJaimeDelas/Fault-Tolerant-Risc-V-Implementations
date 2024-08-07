// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*3:0*/ Vrvfpgasim_rvfpgasim::__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[32];

VL_CTOR_IMP(Vrvfpgasim_rvfpgasim) {
    VL_CELL(veerwolf, Vrvfpgasim_veerwolf_core__B0_Cbebc20);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_rvfpgasim::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vrvfpgasim_rvfpgasim::~Vrvfpgasim_rvfpgasim() {
}

void Vrvfpgasim_rvfpgasim::_initial__TOP__rvfpgasim__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_initial__TOP__rvfpgasim__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_pipe_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_pipe_reg = 0ULL;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_id_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_size_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_burst_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_id_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_size_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_burst_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_count_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_count_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_state_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_state_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_awready_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_wready_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bid_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_bvalid_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_arready_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_pipe_reg = 0U;
    __Vtemp1[0U] = 0x653d2573U;
    __Vtemp1[1U] = 0x5f66696cU;
    __Vtemp1[2U] = 0x696e6974U;
    __Vtemp1[3U] = 0x726f6d5fU;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(4, __Vtemp1),
                                         vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file))) {
        VL_WRITEF("Loading ROM contents from %0s\n",
                  1024,vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file);
        VL_READMEM_N(true, 64, 512, 0, VL_CVT_PACK_STR_NW(32, vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file)
                     , vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.mem
                     , 0, ~0ULL);
    } else {
        vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.mem[0U] = 0x7c029073aaaa02b7ULL;
    }
    vlSymsp->TOP__rvfpgasim__veerwolf__bootrom__ram.mem[1U] = 0x67ULL;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__write_addr_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rid_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rdata_reg = 0ULL;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rlast_reg = 0U;
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__s_axi_rvalid_reg = 0U;
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("jtag_vpi_enable")))) {
        VL_WRITEF("JTAG VPI enabled. Not loading RAM\n");
    } else {
        __Vtemp2[0U] = 0x653d2573U;
        __Vtemp2[1U] = 0x5f66696cU;
        __Vtemp2[2U] = 0x696e6974U;
        __Vtemp2[3U] = 0x72616d5fU;
        if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(4, __Vtemp2),
                                             vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file))) {
            VL_WRITEF("Loading RAM contents from %0s\n",
                      1024,vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file);
            VL_READMEM_N(true, 64, 8192, 0, VL_CVT_PACK_STR_NW(32, vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file)
                         , vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__mem
                         , 0, ~0ULL);
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__ram__DOT__read_addr_reg = 0U;
}

void Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | (0x10U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | ((0x11U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                               >> 2U))));
    vlSymsp->TOP__rvfpgasim.__Vtableidx1 = (((IData)(vlTOPp->i_jtag_tms) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = vlSymsp->TOP__rvfpgasim.__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate
        [vlSymsp->TOP__rvfpgasim.__Vtableidx1];
    vlSymsp->TOP__rvfpgasim.__Vcellinp__veerwolf__rstn 
        = (1U & (~ (IData)(vlTOPp->rst)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlTOPp->i_jtag_tdi))));
    } else {
        if ((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = (0x1fffffffffeULL & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                        = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__veerwolf.__PVT__dmi_reg_rdata)) 
                           << 2U);
                } else {
                    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                    }
                }
            }
        } else {
            if ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                    = (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                        << 4U) | (QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 1U))))));
            } else {
                if ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en = (1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                           >> 2U)))));
}

void Vrvfpgasim_rvfpgasim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_ctor_var_reset\n"); );
    // Body
    i_sw = VL_RAND_RESET_I(16);
    o_led = VL_RAND_RESET_I(16);
    i_pb = VL_RAND_RESET_I(5);
    AN = VL_RAND_RESET_I(4);
    CA = VL_RAND_RESET_I(1);
    CB = VL_RAND_RESET_I(1);
    CC = VL_RAND_RESET_I(1);
    CD = VL_RAND_RESET_I(1);
    CE = VL_RAND_RESET_I(1);
    CF = VL_RAND_RESET_I(1);
    CG = VL_RAND_RESET_I(1);
    Enables_Reg = VL_RAND_RESET_I(4);
    Digits_Reg = VL_RAND_RESET_I(32);
    tf_push = VL_RAND_RESET_I(1);
    wb_m2s_uart_dat_output = VL_RAND_RESET_I(8);
    LED_B = VL_RAND_RESET_I(1);
    LED_G = VL_RAND_RESET_I(1);
    LED_R = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    i_jtag_tck = VL_RAND_RESET_I(1);
    i_jtag_tms = VL_RAND_RESET_I(1);
    i_jtag_tdi = VL_RAND_RESET_I(1);
    i_jtag_trst_n = VL_RAND_RESET_I(1);
    o_jtag_tdo = VL_RAND_RESET_I(1);
    o_uart_tx = VL_RAND_RESET_I(1);
    o_gpio = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(1024, __PVT__ram_init_file);
    VL_RAND_RESET_W(1024, __PVT__rom_init_file);
    __PVT__dmi_reg_en = VL_RAND_RESET_I(1);
    __PVT__dmi_hard_reset = VL_RAND_RESET_I(1);
    __Vcellinp__veerwolf__rstn = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__read_state_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__read_state_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__write_state_reg = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__write_state_next = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__read_id_reg = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__read_id_next = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    __PVT__ram__DOT__read_addr_next = VL_RAND_RESET_I(16);
    __PVT__ram__DOT__read_count_reg = VL_RAND_RESET_I(8);
    __PVT__ram__DOT__read_count_next = VL_RAND_RESET_I(8);
    __PVT__ram__DOT__read_size_reg = VL_RAND_RESET_I(3);
    __PVT__ram__DOT__read_size_next = VL_RAND_RESET_I(3);
    __PVT__ram__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__read_burst_next = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__write_id_reg = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__write_id_next = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    __PVT__ram__DOT__write_addr_next = VL_RAND_RESET_I(16);
    __PVT__ram__DOT__write_count_reg = VL_RAND_RESET_I(8);
    __PVT__ram__DOT__write_count_next = VL_RAND_RESET_I(8);
    __PVT__ram__DOT__write_size_reg = VL_RAND_RESET_I(3);
    __PVT__ram__DOT__write_size_next = VL_RAND_RESET_I(3);
    __PVT__ram__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__write_burst_next = VL_RAND_RESET_I(2);
    __PVT__ram__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_bid_reg = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__s_axi_bid_next = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rid_reg = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__s_axi_rid_next = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__s_axi_rdata_reg = VL_RAND_RESET_Q(64);
    __PVT__ram__DOT__s_axi_rdata_next = VL_RAND_RESET_Q(64);
    __PVT__ram__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rid_pipe_reg = VL_RAND_RESET_I(5);
    __PVT__ram__DOT__s_axi_rdata_pipe_reg = VL_RAND_RESET_Q(64);
    __PVT__ram__DOT__s_axi_rlast_pipe_reg = VL_RAND_RESET_I(1);
    __PVT__ram__DOT__s_axi_rvalid_pipe_reg = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            __PVT__ram__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    __PVT__ram__DOT__i = VL_RAND_RESET_I(32);
    __PVT__ram__DOT__j = VL_RAND_RESET_I(32);
    __PVT__dmi_wrapper__DOT__dmireset = VL_RAND_RESET_I(1);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = VL_RAND_RESET_I(4);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate = VL_RAND_RESET_I(4);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = VL_RAND_RESET_I(5);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en = VL_RAND_RESET_I(2);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en = VL_RAND_RESET_I(1);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = VL_RAND_RESET_I(3);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[0] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[1] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[2] = 3U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[3] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[4] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[5] = 6U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[6] = 6U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[7] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[8] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[9] = 0xaU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[10] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[11] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[12] = 0xdU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[13] = 0xdU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[14] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[15] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[16] = 0U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[17] = 2U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[18] = 9U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[19] = 5U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[20] = 5U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[21] = 8U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[22] = 7U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[23] = 8U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[24] = 2U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[25] = 0U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[26] = 0xcU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[27] = 0xcU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[28] = 0xfU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[29] = 0xeU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[30] = 0xfU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[31] = 2U;
    __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
}
