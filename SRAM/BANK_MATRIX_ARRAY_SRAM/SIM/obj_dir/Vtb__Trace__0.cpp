// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__i_reset));
        bufp->chgCData(oldp+1,(vlSelfRef.tb__DOT__r_din),8);
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__r_wen));
        bufp->chgBit(oldp+3,(vlSelfRef.tb__DOT__r_cen));
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__r_addr),17);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__i),32);
        bufp->chgSData(oldp+6,((0x3ffU & vlSelfRef.tb__DOT__r_addr)),10);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelfRef.tb__DOT__r_addr 
                                         >> 0xaU))),5);
        bufp->chgCData(oldp+8,((3U & (vlSelfRef.tb__DOT__r_addr 
                                      >> 0xfU))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel),4);
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                     >> 1U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                     >> 3U))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+14,(((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                    ? 0U : 0xffU) | 
                                  (((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                     ? 0U : 0xffU) 
                                   | (((4U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                        ? 0U : 0xffU) 
                                      | ((8U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                          ? 0U : 0xffU)))) 
                                 & ((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                       ? 0U : 0xffU) 
                                     | (((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                          ? 0U : 0xffU) 
                                        | (((4U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                             ? 0U : 0xffU) 
                                           | ((8U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                               ? 0U
                                               : 0xffU)))) 
                                    & ((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                          ? 0U : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                        & ((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                            ? 0U : 0xffU)) 
                                       | ((((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                             ? 0U : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                           & ((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
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
                                                    : 0xffU)))))))),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[0]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[1]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[2]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[3]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly),4);
        bufp->chgCData(oldp+20,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
    }
    bufp->chgBit(oldp+24,(vlSelfRef.tb__DOT__i_clk));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
