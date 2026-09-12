// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_cen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"i_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"o_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"o_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"o_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,0,"r_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"r_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"r_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"r_cen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("u_sram_bank_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"o_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"BANK_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"BANK_SEL_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"ROWS_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"COLS_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("w_dout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"w_bank_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"w_bank_sel_dly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("banks[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sram_matrix_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"i_row_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"i_col_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"o_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"r_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("banks[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sram_matrix_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"i_row_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"i_col_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"o_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"r_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("banks[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sram_matrix_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"i_row_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"i_col_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"o_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"r_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("banks[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_sram_matrix_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"NUM_ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"NUM_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"i_row_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+8,0,"i_col_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"i_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"o_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"r_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_sram_addr_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"SEL_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"SEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i_cen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"o_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"o_sel_dly",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"r_bank_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"r_bank_sel_dly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sram_tristate_bus", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+20,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"o_bus_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+26,(8U),32);
    bufp->fullIData(oldp+27,(0x11U),32);
    bufp->fullIData(oldp+28,(4U),32);
    bufp->fullIData(oldp+29,(0x400U),32);
    bufp->fullIData(oldp+30,(0x20U),32);
    bufp->fullCData(oldp+31,(vlSelfRef.tb__DOT__o_output),8);
    bufp->fullBit(oldp+32,(vlSelfRef.tb__DOT__o_valid));
    bufp->fullCData(oldp+33,(vlSelfRef.tb__DOT__r_dout),8);
    bufp->fullIData(oldp+34,(0xfU),32);
    bufp->fullIData(oldp+35,(2U),32);
    bufp->fullIData(oldp+36,(0xaU),32);
    bufp->fullIData(oldp+37,(5U),32);
    bufp->fullIData(oldp+38,(8U),32);
    bufp->fullIData(oldp+39,(0x400U),32);
    bufp->fullIData(oldp+40,(0x20U),32);
    bufp->fullIData(oldp+41,(4U),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__i_reset));
    bufp->fullCData(oldp+2,(vlSelfRef.tb__DOT__r_din),8);
    bufp->fullBit(oldp+3,(vlSelfRef.tb__DOT__r_wen));
    bufp->fullBit(oldp+4,(vlSelfRef.tb__DOT__r_cen));
    bufp->fullIData(oldp+5,(vlSelfRef.tb__DOT__r_addr),17);
    bufp->fullIData(oldp+6,(vlSelfRef.tb__DOT__i),32);
    bufp->fullSData(oldp+7,((0x3ffU & vlSelfRef.tb__DOT__r_addr)),10);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelfRef.tb__DOT__r_addr 
                                      >> 0xaU))),5);
    bufp->fullCData(oldp+9,((3U & (vlSelfRef.tb__DOT__r_addr 
                                   >> 0xfU))),2);
    bufp->fullCData(oldp+10,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel),4);
    bufp->fullBit(oldp+11,((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                  >> 1U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel) 
                                  >> 3U))));
    bufp->fullCData(oldp+15,(((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                 ? 0U : 0xffU) | ((
                                                   (2U 
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
                              & ((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                    ? 0U : 0xffU) | 
                                  (((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                     ? 0U : 0xffU) 
                                   | (((4U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                        ? 0U : 0xffU) 
                                      | ((8U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                          ? 0U : 0xffU)))) 
                                 & ((((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                       ? 0U : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                     & ((1U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                         ? 0U : 0xffU)) 
                                    | ((((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                          ? 0U : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                        & ((2U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                            ? 0U : 0xffU)) 
                                       | ((((4U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                             ? 0U : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                           & ((4U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                               ? 0U
                                               : 0xffU)) 
                                          | (((8U & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                               ? 0U
                                               : (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout)) 
                                             & ((8U 
                                                 & (IData)(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly))
                                                 ? 0U
                                                 : 0xffU)))))))),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[0]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[1]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[2]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__w_dout[3]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__u_sram_addr_decoder__DOT__r_bank_sel_dly),4);
    bufp->fullCData(oldp+21,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__0__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__1__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__2__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb__DOT__u_sram_bank_top__DOT__banks__BRA__3__KET____DOT__u_sram_matrix_array__DOT__r_dout),8);
    bufp->fullBit(oldp+25,(vlSelfRef.tb__DOT__i_clk));
}
