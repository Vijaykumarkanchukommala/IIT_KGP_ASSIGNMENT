// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__i_clk;
    CData/*0:0*/ tb__DOT__i_reset;
    CData/*7:0*/ tb__DOT__o_output;
    CData/*0:0*/ tb__DOT__o_valid;
    CData/*7:0*/ tb__DOT__r_din;
    CData/*7:0*/ tb__DOT__r_dout;
    CData/*0:0*/ tb__DOT__r_wen;
    CData/*0:0*/ tb__DOT__r_cen;
    CData/*3:0*/ tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel;
    CData/*3:0*/ tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly;
    CData/*7:0*/ tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    CData/*7:0*/ tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    CData/*7:0*/ tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    CData/*7:0*/ tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb__DOT__i;
    IData/*16:0*/ tb__DOT__r_addr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> tb__DOT__u_sram_bank_top__DOT__w_dout;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 32>, 1024> tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 32>, 1024> tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 32>, 1024> tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 32>, 1024> tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hed6ec400__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
