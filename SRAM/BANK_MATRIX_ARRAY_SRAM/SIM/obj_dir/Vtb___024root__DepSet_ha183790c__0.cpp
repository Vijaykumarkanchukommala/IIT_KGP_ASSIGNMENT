// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__i_clk__0 
        = vlSelfRef.tb__DOT__i_clk;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_WRITE__2__i_addr;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_addr = 0;
    CData/*7:0*/ __Vtask_tb__DOT__SRAM_WRITE__2__i_data;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_data = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_WRITE__3__i_addr;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_addr = 0;
    CData/*7:0*/ __Vtask_tb__DOT__SRAM_WRITE__3__i_data;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_data = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_WRITE__4__i_addr;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_addr = 0;
    CData/*7:0*/ __Vtask_tb__DOT__SRAM_WRITE__4__i_data;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_data = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_WRITE__5__i_addr;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_addr = 0;
    CData/*7:0*/ __Vtask_tb__DOT__SRAM_WRITE__5__i_data;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_data = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_READ__7__i_addr;
    __Vtask_tb__DOT__SRAM_READ__7__i_addr = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_READ__8__i_addr;
    __Vtask_tb__DOT__SRAM_READ__8__i_addr = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_READ__9__i_addr;
    __Vtask_tb__DOT__SRAM_READ__9__i_addr = 0;
    IData/*16:0*/ __Vtask_tb__DOT__SRAM_READ__10__i_addr;
    __Vtask_tb__DOT__SRAM_READ__10__i_addr = 0;
    // Body
    vlSelfRef.tb__DOT__i_reset = 0U;
    vlSelfRef.tb__DOT__i_clk = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2af8ULL, 
                                         nullptr, "TB/tasks.sv", 
                                         17);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb__DOT__i_reset = 1U;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__2__i_addr = 0U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__2__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__2__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__3__i_addr = 0x3ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__3__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__3__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__4__i_addr = 0x7c00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__4__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__4__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__5__i_addr = 0x7fffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__5__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__5__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 1U;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__2__i_addr = 0x8000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__2__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__2__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__3__i_addr = 0x83ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__3__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__3__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__4__i_addr = 0xfc00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__4__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__4__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__5__i_addr = 0xffffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__5__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__5__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 2U;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__2__i_addr = 0x10000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__2__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__2__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__3__i_addr = 0x103ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__3__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__3__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__4__i_addr = 0x17c00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__4__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__4__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__5__i_addr = 0x17fffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__5__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__5__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 3U;
    __Vtask_tb__DOT__SRAM_WRITE__2__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__2__i_addr = 0x18000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__2__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__2__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__3__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__3__i_addr = 0x183ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__3__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__3__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__4__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__4__i_addr = 0x1fc00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__4__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__4__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_WRITE__5__i_data = (0xffU 
                                              & VL_RANDOM_I());
    __Vtask_tb__DOT__SRAM_WRITE__5__i_addr = 0x1ffffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 0U;
    vlSelfRef.tb__DOT__r_din = __Vtask_tb__DOT__SRAM_WRITE__5__i_data;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_WRITE__5__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM WRITE ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(IData)(vlSelfRef.tb__DOT__r_din));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_din = 0U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 4U;
    __Vtask_tb__DOT__SRAM_READ__7__i_addr = 0U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__7__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__8__i_addr = 0x3ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__8__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__9__i_addr = 0x7c00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__9__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__10__i_addr = 0x7fffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__10__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 1U;
    __Vtask_tb__DOT__SRAM_READ__7__i_addr = 0x8000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__7__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__8__i_addr = 0x83ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__8__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__9__i_addr = 0xfc00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__9__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__10__i_addr = 0xffffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__10__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 2U;
    __Vtask_tb__DOT__SRAM_READ__7__i_addr = 0x10000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__7__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__8__i_addr = 0x103ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__8__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__9__i_addr = 0x17c00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__9__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__10__i_addr = 0x17fffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__10__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 3U;
    __Vtask_tb__DOT__SRAM_READ__7__i_addr = 0x18000U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__7__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__8__i_addr = 0x183ffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__8__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__9__i_addr = 0x1fc00U;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__9__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    __Vtask_tb__DOT__SRAM_READ__10__i_addr = 0x1ffffU;
    vlSelfRef.tb__DOT__r_cen = 0U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = __Vtask_tb__DOT__SRAM_READ__10__i_addr;
    co_await vlSelfRef.__VtrigSched_hed6ec400__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.i_clk)", 
                                                         "TB/tasks.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("SRAM READ ADDRESS:%x  DATA:%x\n",0,
                 17,vlSelfRef.tb__DOT__r_addr,8,(((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                    ? 0U
                                                    : 0xffU) 
                                                  | (((2U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((4U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | ((8U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)))) 
                                                 & ((((1U 
                                                       & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                       ? 0U
                                                       : 0xffU) 
                                                     | (((2U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : 0xffU) 
                                                        | (((4U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : 0xffU) 
                                                           | ((8U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)))) 
                                                    & ((((1U 
                                                          & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                        & ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                            ? 0U
                                                            : 0xffU)) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                             ? 0U
                                                             : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                           & ((2U 
                                                               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                               ? 0U
                                                               : 0xffU)) 
                                                          | ((((4U 
                                                                & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                ? 0U
                                                                : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                              & ((4U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : 0xffU)) 
                                                             | (((8U 
                                                                  & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                  ? 0U
                                                                  : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                                                & ((8U 
                                                                    & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                                    ? 0U
                                                                    : 0xffU))))))));
    vlSelfRef.tb__DOT__r_cen = 1U;
    vlSelfRef.tb__DOT__r_wen = 1U;
    vlSelfRef.tb__DOT__r_addr = 0U;
    vlSelfRef.tb__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "TB/tasks.sv", 
                                         20);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("TB/tasks.sv", 20, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "TB/tb.sv", 
                                             21);
        vlSelfRef.tb__DOT__i_clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__i_clk)));
    }
}

void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel = 0xfU;
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_cen)))) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel 
            = ((~ ((IData)(1U) << (3U & (vlSelfRef.tb__DOT__r_addr 
                                         >> 0xfU)))) 
               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel));
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    SData/*9:0*/ __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    SData/*9:0*/ __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    SData/*9:0*/ __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    SData/*9:0*/ __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0;
    // Body
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0U;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0U;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0U;
    __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_wen)))) {
            __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = vlSelfRef.tb__DOT__r_din;
            __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x1fU & (vlSelfRef.tb__DOT__r_addr 
                            >> 0xaU));
            __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x3ffU & vlSelfRef.tb__DOT__r_addr);
            __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 1U;
        }
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout 
            = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix
            [(0x3ffU & vlSelfRef.tb__DOT__r_addr)][
            (0x1fU & (vlSelfRef.tb__DOT__r_addr >> 0xaU))];
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_wen)))) {
            __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = vlSelfRef.tb__DOT__r_din;
            __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x1fU & (vlSelfRef.tb__DOT__r_addr 
                            >> 0xaU));
            __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x3ffU & vlSelfRef.tb__DOT__r_addr);
            __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 1U;
        }
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout 
            = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix
            [(0x3ffU & vlSelfRef.tb__DOT__r_addr)][
            (0x1fU & (vlSelfRef.tb__DOT__r_addr >> 0xaU))];
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                  >> 2U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_wen)))) {
            __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = vlSelfRef.tb__DOT__r_din;
            __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x1fU & (vlSelfRef.tb__DOT__r_addr 
                            >> 0xaU));
            __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x3ffU & vlSelfRef.tb__DOT__r_addr);
            __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 1U;
        }
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout 
            = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix
            [(0x3ffU & vlSelfRef.tb__DOT__r_addr)][
            (0x1fU & (vlSelfRef.tb__DOT__r_addr >> 0xaU))];
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                  >> 3U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_wen)))) {
            __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = vlSelfRef.tb__DOT__r_din;
            __VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x1fU & (vlSelfRef.tb__DOT__r_addr 
                            >> 0xaU));
            __VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 
                = (0x3ffU & vlSelfRef.tb__DOT__r_addr);
            __VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0 = 1U;
        }
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout 
            = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix
            [(0x3ffU & vlSelfRef.tb__DOT__r_addr)][
            (0x1fU & (vlSelfRef.tb__DOT__r_addr >> 0xaU))];
    }
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly 
        = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel;
    if (__VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0][__VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0] 
            = __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    }
    if (__VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0][__VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0] 
            = __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    }
    if (__VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0][__VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0] 
            = __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    }
    if (__VdlySet__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__VdlyDim1__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0][__VdlyDim0__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0] 
            = __VdlyVal__tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix__v0;
    }
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[0U] 
        = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[1U] 
        = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[2U] 
        = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout;
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[3U] 
        = vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout;
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hed6ec400__0.resume(
                                                   "@(posedge tb.i_clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hed6ec400__0.commit(
                                                   "@(posedge tb.i_clk)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TB/tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TB/tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
