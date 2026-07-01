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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((((((((((vlSelfRef.__Vm_traceActivity
                             [1U] | vlSelfRef.__Vm_traceActivity
                             [2U]) | vlSelfRef.__Vm_traceActivity
                            [3U]) | vlSelfRef.__Vm_traceActivity
                           [4U]) | vlSelfRef.__Vm_traceActivity
                          [5U]) | vlSelfRef.__Vm_traceActivity
                         [6U]) | vlSelfRef.__Vm_traceActivity
                        [7U]) | vlSelfRef.__Vm_traceActivity
                       [8U]) | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__tests_run),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__bytes_checked),32);
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__saw_mode[0]));
        bufp->chgBit(oldp+3,(vlSelfRef.tb__DOT__saw_mode[1]));
        bufp->chgBit(oldp+4,(vlSelfRef.tb__DOT__saw_mode[2]));
        bufp->chgBit(oldp+5,(vlSelfRef.tb__DOT__saw_mode[3]));
        bufp->chgBit(oldp+6,(vlSelfRef.tb__DOT__saw_mode[4]));
        bufp->chgBit(oldp+7,(vlSelfRef.tb__DOT__saw_mode[5]));
        bufp->chgBit(oldp+8,(vlSelfRef.tb__DOT__saw_mode[6]));
        bufp->chgBit(oldp+9,(vlSelfRef.tb__DOT__saw_mode[7]));
        bufp->chgBit(oldp+10,(vlSelfRef.tb__DOT__saw_msg_len_zero));
        bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__saw_msg_len_partial_word));
        bufp->chgBit(oldp+12,(vlSelfRef.tb__DOT__saw_msg_len_full_word));
        bufp->chgBit(oldp+13,(vlSelfRef.tb__DOT__saw_msg_len_block_aligned));
        bufp->chgBit(oldp+14,(vlSelfRef.tb__DOT__saw_msg_len_rate_minus_one));
        bufp->chgBit(oldp+15,(vlSelfRef.tb__DOT__saw_msg_len_multi_block));
        bufp->chgBit(oldp+16,(vlSelfRef.tb__DOT__saw_out_len_partial_word));
        bufp->chgBit(oldp+17,(vlSelfRef.tb__DOT__saw_out_len_block_aligned));
        bufp->chgBit(oldp+18,(vlSelfRef.tb__DOT__saw_out_len_multi_block));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [0xaU] | vlSelfRef.__Vm_traceActivity
                       [0xbU]) | vlSelfRef.__Vm_traceActivity
                      [0xdU])))) {
        bufp->chgQData(oldp+19,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [0U][0U]),64);
        bufp->chgQData(oldp+21,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [0U][1U]),64);
        bufp->chgQData(oldp+23,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [0U][2U]),64);
        bufp->chgQData(oldp+25,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [0U][3U]),64);
        bufp->chgQData(oldp+27,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [0U][4U]),64);
        bufp->chgQData(oldp+29,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [1U][0U]),64);
        bufp->chgQData(oldp+31,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [1U][1U]),64);
        bufp->chgQData(oldp+33,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [1U][2U]),64);
        bufp->chgQData(oldp+35,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [1U][3U]),64);
        bufp->chgQData(oldp+37,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [1U][4U]),64);
        bufp->chgQData(oldp+39,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [2U][0U]),64);
        bufp->chgQData(oldp+41,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [2U][1U]),64);
        bufp->chgQData(oldp+43,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [2U][2U]),64);
        bufp->chgQData(oldp+45,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [2U][3U]),64);
        bufp->chgQData(oldp+47,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [2U][4U]),64);
        bufp->chgQData(oldp+49,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [3U][0U]),64);
        bufp->chgQData(oldp+51,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [3U][1U]),64);
        bufp->chgQData(oldp+53,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [3U][2U]),64);
        bufp->chgQData(oldp+55,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [3U][3U]),64);
        bufp->chgQData(oldp+57,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [3U][4U]),64);
        bufp->chgQData(oldp+59,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [4U][0U]),64);
        bufp->chgQData(oldp+61,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [4U][1U]),64);
        bufp->chgQData(oldp+63,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [4U][2U]),64);
        bufp->chgQData(oldp+65,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [4U][3U]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                [4U][4U]),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0xaU] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU])))) {
        bufp->chgCData(oldp+69,(vlSelfRef.tb__DOT__dut__DOT__round_cnt_offset),5);
        bufp->chgIData(oldp+70,(vlSelfRef.tb__DOT__dut__DOT__rdata_mask),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb__DOT__dut__DOT__rdata_masked),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked),32);
        bufp->chgCData(oldp+73,(vlSelfRef.tb__DOT__dut__DOT__valid_inbits),3);
        bufp->chgCData(oldp+74,(vlSelfRef.tb__DOT__dut__DOT__sha3_rate),8);
        bufp->chgCData(oldp+75,(vlSelfRef.tb__DOT__dut__DOT__sha3_suffix),8);
        bufp->chgIData(oldp+76,(vlSelfRef.tb__DOT__dut__DOT__sha3_suffix_word),32);
        bufp->chgCData(oldp+77,(vlSelfRef.tb__DOT__dut__DOT__rounds),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0xaU] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xdU])))) {
        bufp->chgCData(oldp+78,(vlSelfRef.tb__DOT__m_axis_tkeep),4);
        bufp->chgCData(oldp+79,(vlSelfRef.tb__DOT__dut__DOT__state_n),3);
        bufp->chgIData(oldp+80,(vlSelfRef.tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb__DOT__dut__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb__DOT__dut__DOT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+83,((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))));
        bufp->chgIData(oldp+84,((((((0xc7U >= (0xffU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                                     ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                    [(0xffU & ((IData)(3U) 
                                               + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                                     : 0U) << 0x18U) 
                                  | (((0xc7U >= (0xffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xffU & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                                       : 0U) << 0x10U)) 
                                 | ((((0xc7U >= (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                                       : 0U) << 8U) 
                                    | ((0xc7U >= (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))
                                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                       [vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r]
                                        : 0U)))),32);
        bufp->chgBit(oldp+85,((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))));
        bufp->chgCData(oldp+86,(vlSelfRef.tb__DOT__dut__DOT__state_r),3);
        bufp->chgCData(oldp+87,(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r),5);
        bufp->chgCData(oldp+88,(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r),6);
        bufp->chgCData(oldp+90,((0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))),8);
        bufp->chgQData(oldp+91,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                [0U][0U]),64);
        bufp->chgQData(oldp+93,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                [0U][1U]),64);
        bufp->chgQData(oldp+95,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                [0U][2U]),64);
        bufp->chgQData(oldp+97,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                [0U][3U]),64);
        bufp->chgQData(oldp+99,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                [0U][4U]),64);
        bufp->chgQData(oldp+101,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [1U][0U]),64);
        bufp->chgQData(oldp+103,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [1U][1U]),64);
        bufp->chgQData(oldp+105,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [1U][2U]),64);
        bufp->chgQData(oldp+107,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [1U][3U]),64);
        bufp->chgQData(oldp+109,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [1U][4U]),64);
        bufp->chgQData(oldp+111,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [2U][0U]),64);
        bufp->chgQData(oldp+113,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [2U][1U]),64);
        bufp->chgQData(oldp+115,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [2U][2U]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [2U][3U]),64);
        bufp->chgQData(oldp+119,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [2U][4U]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [3U][0U]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [3U][1U]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [3U][2U]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [3U][3U]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [3U][4U]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [4U][0U]),64);
        bufp->chgQData(oldp+133,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [4U][1U]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [4U][2U]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [4U][3U]),64);
        bufp->chgQData(oldp+139,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                 [4U][4U]),64);
        bufp->chgQData(oldp+141,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [0U][0U]),64);
        bufp->chgQData(oldp+143,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [0U][1U]),64);
        bufp->chgQData(oldp+145,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [0U][2U]),64);
        bufp->chgQData(oldp+147,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [0U][3U]),64);
        bufp->chgQData(oldp+149,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [0U][4U]),64);
        bufp->chgQData(oldp+151,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [1U][0U]),64);
        bufp->chgQData(oldp+153,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [1U][1U]),64);
        bufp->chgQData(oldp+155,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [1U][2U]),64);
        bufp->chgQData(oldp+157,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [1U][3U]),64);
        bufp->chgQData(oldp+159,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [1U][4U]),64);
        bufp->chgQData(oldp+161,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [2U][0U]),64);
        bufp->chgQData(oldp+163,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [2U][1U]),64);
        bufp->chgQData(oldp+165,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [2U][2U]),64);
        bufp->chgQData(oldp+167,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [2U][3U]),64);
        bufp->chgQData(oldp+169,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [2U][4U]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [3U][0U]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [3U][1U]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [3U][2U]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [3U][3U]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [3U][4U]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [4U][0U]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [4U][1U]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [4U][2U]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [4U][3U]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                 [4U][4U]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [0U][0U]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [0U][1U]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [0U][2U]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [0U][3U]),64);
        bufp->chgQData(oldp+199,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [0U][4U]),64);
        bufp->chgQData(oldp+201,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [1U][0U]),64);
        bufp->chgQData(oldp+203,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [1U][1U]),64);
        bufp->chgQData(oldp+205,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [1U][2U]),64);
        bufp->chgQData(oldp+207,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [1U][3U]),64);
        bufp->chgQData(oldp+209,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [1U][4U]),64);
        bufp->chgQData(oldp+211,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [2U][0U]),64);
        bufp->chgQData(oldp+213,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [2U][1U]),64);
        bufp->chgQData(oldp+215,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [2U][2U]),64);
        bufp->chgQData(oldp+217,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [2U][3U]),64);
        bufp->chgQData(oldp+219,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [2U][4U]),64);
        bufp->chgQData(oldp+221,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [3U][0U]),64);
        bufp->chgQData(oldp+223,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [3U][1U]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [3U][2U]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [3U][3U]),64);
        bufp->chgQData(oldp+229,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [3U][4U]),64);
        bufp->chgQData(oldp+231,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [4U][0U]),64);
        bufp->chgQData(oldp+233,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [4U][1U]),64);
        bufp->chgQData(oldp+235,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [4U][2U]),64);
        bufp->chgQData(oldp+237,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [4U][3U]),64);
        bufp->chgQData(oldp+239,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                                 [4U][4U]),64);
        bufp->chgQData(oldp+241,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [0U][0U]),64);
        bufp->chgQData(oldp+243,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [0U][1U]),64);
        bufp->chgQData(oldp+245,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [0U][2U]),64);
        bufp->chgQData(oldp+247,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [0U][3U]),64);
        bufp->chgQData(oldp+249,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [0U][4U]),64);
        bufp->chgQData(oldp+251,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [1U][0U]),64);
        bufp->chgQData(oldp+253,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [1U][1U]),64);
        bufp->chgQData(oldp+255,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [1U][2U]),64);
        bufp->chgQData(oldp+257,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [1U][3U]),64);
        bufp->chgQData(oldp+259,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [1U][4U]),64);
        bufp->chgQData(oldp+261,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [2U][0U]),64);
        bufp->chgQData(oldp+263,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [2U][1U]),64);
        bufp->chgQData(oldp+265,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [2U][2U]),64);
        bufp->chgQData(oldp+267,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [2U][3U]),64);
        bufp->chgQData(oldp+269,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [2U][4U]),64);
        bufp->chgQData(oldp+271,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [3U][0U]),64);
        bufp->chgQData(oldp+273,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [3U][1U]),64);
        bufp->chgQData(oldp+275,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [3U][2U]),64);
        bufp->chgQData(oldp+277,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [3U][3U]),64);
        bufp->chgQData(oldp+279,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [3U][4U]),64);
        bufp->chgQData(oldp+281,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [4U][0U]),64);
        bufp->chgQData(oldp+283,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [4U][1U]),64);
        bufp->chgQData(oldp+285,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [4U][2U]),64);
        bufp->chgQData(oldp+287,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [4U][3U]),64);
        bufp->chgQData(oldp+289,(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
                                 [4U][4U]),64);
    }
    bufp->chgBit(oldp+291,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+292,(vlSelfRef.tb__DOT__rst_n));
    bufp->chgSData(oldp+293,(vlSelfRef.tb__DOT__inblocks),16);
    bufp->chgSData(oldp+294,(vlSelfRef.tb__DOT__inlen_partial),16);
    bufp->chgSData(oldp+295,(vlSelfRef.tb__DOT__outblocks),16);
    bufp->chgSData(oldp+296,(vlSelfRef.tb__DOT__outlen_partial),16);
    bufp->chgCData(oldp+297,(vlSelfRef.tb__DOT__mode),3);
    bufp->chgIData(oldp+298,(vlSelfRef.tb__DOT__s_axis_tdata),32);
    bufp->chgCData(oldp+299,(vlSelfRef.tb__DOT__s_axis_tkeep),4);
    bufp->chgBit(oldp+300,(vlSelfRef.tb__DOT__s_axis_tvalid));
    bufp->chgBit(oldp+301,(vlSelfRef.tb__DOT__m_axis_tready));
    bufp->chgBit(oldp+302,(vlSelfRef.tb__DOT__saw_input_stall));
    bufp->chgBit(oldp+303,(vlSelfRef.tb__DOT__saw_output_stall));
    bufp->chgCData(oldp+304,((0x1fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_offset) 
                                       + (IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r)))),5);
    bufp->chgIData(oldp+305,(((1U == (IData)(vlSelfRef.tb__DOT__s_axis_tkeep))
                               ? 0xff00U : ((2U == 
                                             (0xeU 
                                              & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                                             ? 0xff0000U
                                             : ((4U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                                                 ? 0xff000000U
                                                 : 0U)))),32);
    bufp->chgIData(oldp+306,(vlSelfRef.tb__DOT__unnamedblk29__DOT__mode_i),32);
    bufp->chgIData(oldp+307,(vlSelfRef.tb__DOT__unnamedblk29__DOT__unnamedblk30__DOT__rate),32);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
