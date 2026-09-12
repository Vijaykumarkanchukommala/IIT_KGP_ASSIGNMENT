// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TB/tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel = 0xfU;
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__r_cen)))) {
        vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel 
            = ((~ ((IData)(1U) << (3U & (vlSelfRef.tb__DOT__r_addr 
                                         >> 0xfU)))) 
               & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel));
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

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_reset = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__o_output = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__r_din = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__r_dout = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__r_wen = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__r_cen = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__r_addr = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__u_sram_bank_top__DOT__w_dout[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__mem_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
