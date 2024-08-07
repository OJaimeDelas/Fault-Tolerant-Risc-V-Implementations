// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_RVFPGASIM_H_
#define _VRVFPGASIM_RVFPGASIM_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_VerilatedVcd;
class Vrvfpgasim_veerwolf_core__B0_Cbebc20;


//----------

VL_MODULE(Vrvfpgasim_rvfpgasim) {
  public:
    // CELLS
    Vrvfpgasim_veerwolf_core__B0_Cbebc20* veerwolf;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(i_pb,4,0);
    VL_OUT8(AN,3,0);
    VL_OUT8(CA,0,0);
    VL_OUT8(CB,0,0);
    VL_OUT8(CC,0,0);
    VL_OUT8(CD,0,0);
    VL_OUT8(CE,0,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(CG,0,0);
    VL_OUT8(Enables_Reg,3,0);
    VL_OUT8(tf_push,0,0);
    VL_OUT8(wb_m2s_uart_dat_output,7,0);
    VL_OUT8(LED_B,0,0);
    VL_OUT8(LED_G,0,0);
    VL_OUT8(LED_R,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_IN16(i_sw,15,0);
    VL_OUT16(o_led,15,0);
    VL_OUT16(o_gpio,15,0);
    VL_OUT(Digits_Reg,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__dmi_reg_en;
        CData/*0:0*/ __PVT__dmi_hard_reset;
        CData/*0:0*/ __PVT__ram__DOT__read_state_reg;
        CData/*0:0*/ __PVT__ram__DOT__read_state_next;
        CData/*1:0*/ __PVT__ram__DOT__write_state_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_state_next;
        CData/*0:0*/ __PVT__ram__DOT__mem_wr_en;
        CData/*0:0*/ __PVT__ram__DOT__mem_rd_en;
        CData/*4:0*/ __PVT__ram__DOT__read_id_reg;
        CData/*4:0*/ __PVT__ram__DOT__read_id_next;
        CData/*7:0*/ __PVT__ram__DOT__read_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__read_count_next;
        CData/*2:0*/ __PVT__ram__DOT__read_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__read_size_next;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_next;
        CData/*4:0*/ __PVT__ram__DOT__write_id_reg;
        CData/*4:0*/ __PVT__ram__DOT__write_id_next;
        CData/*7:0*/ __PVT__ram__DOT__write_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__write_count_next;
        CData/*2:0*/ __PVT__ram__DOT__write_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__write_size_next;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_next;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_bid_reg;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_bid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_next;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_rid_reg;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_rid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_next;
        CData/*4:0*/ __PVT__ram__DOT__s_axi_rid_pipe_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_pipe_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_pipe_reg;
        CData/*0:0*/ __PVT__dmi_wrapper__DOT__dmireset;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
        CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
        CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
        CData/*0:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
        SData/*15:0*/ __PVT__ram__DOT__read_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__read_addr_next;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_reg;
        SData/*15:0*/ __PVT__ram__DOT__write_addr_next;
        WData/*1023:0*/ __PVT__ram_init_file[32];
        WData/*1023:0*/ __PVT__rom_init_file[32];
        IData/*31:0*/ __PVT__ram__DOT__i;
        IData/*31:0*/ __PVT__ram__DOT__j;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_reg;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_next;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_pipe_reg;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
    };
    struct {
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
        QData/*63:0*/ __PVT__ram__DOT__mem[8192];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__veerwolf__rstn;
    CData/*4:0*/ __Vtableidx1;
    QData/*40:0*/ __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    static CData/*3:0*/ __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[32];
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);  ///< Copying not allowed
  public:
    Vrvfpgasim_rvfpgasim(const char* name = "TOP");
    ~Vrvfpgasim_rvfpgasim();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    static void _combo__TOP__rvfpgasim__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _combo__TOP__rvfpgasim__12(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__rvfpgasim__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__rvfpgasim__10(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__rvfpgasim__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
