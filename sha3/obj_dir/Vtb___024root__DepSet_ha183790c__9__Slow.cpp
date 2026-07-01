// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vm_traceActivitySetAll\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__inblocks = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__inlen_partial = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__outblocks = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__outlen_partial = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__mode = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__s_axis_tdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__s_axis_tkeep = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__m_axis_tkeep = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__m_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__tests_run = 0;
    vlSelf->tb__DOT__bytes_checked = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__saw_mode[__Vi0] = 0;
    }
    vlSelf->tb__DOT__saw_msg_len_zero = 0;
    vlSelf->tb__DOT__saw_msg_len_partial_word = 0;
    vlSelf->tb__DOT__saw_msg_len_full_word = 0;
    vlSelf->tb__DOT__saw_msg_len_block_aligned = 0;
    vlSelf->tb__DOT__saw_msg_len_rate_minus_one = 0;
    vlSelf->tb__DOT__saw_msg_len_multi_block = 0;
    vlSelf->tb__DOT__saw_out_len_partial_word = 0;
    vlSelf->tb__DOT__saw_out_len_block_aligned = 0;
    vlSelf->tb__DOT__saw_out_len_multi_block = 0;
    vlSelf->tb__DOT__saw_input_stall = 0;
    vlSelf->tb__DOT__saw_output_stall = 0;
    vlSelf->tb__DOT__unnamedblk29__DOT__mode_i = 0;
    vlSelf->tb__DOT__unnamedblk29__DOT__unnamedblk30__DOT__rate = 0;
    vlSelf->tb__DOT____Vlvbound_h639cd528__0 = 0;
    vlSelf->tb__DOT____Vlvbound_h83f8a995__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_h2bf91d87__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_h45a19556__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_hacfd4734__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_h4bdc605f__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_h63d661c9__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT____Vlvbound_h949cbb31__0 = 0;
    vlSelf->tb__DOT____Vlvbound_h570ad72a__0 = 0;
    vlSelf->tb__DOT____Vlvbound_h54bcd3e1__0 = 0;
    vlSelf->tb__DOT____Vlvbound_h5a85157f__0 = 0;
    vlSelf->tb__DOT____Vlvbound_hbe8357a8__0 = 0;
    vlSelf->tb__DOT__dut__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__state_r = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__kstate_n[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__kstate_r[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__kstate_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__dut__DOT__round_cnt_r = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__round_cnt_offset = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__byte_cnt_r = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__block_cnt_r = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__rdata_mask = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__rdata_masked = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__suffix_word_masked = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__wdata_mask_be = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__valid_inbits = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__sha3_rate = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__sha3_suffix = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__sha3_suffix_word = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__rounds = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb__DOT__dut__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h075e1975__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h49573fc5__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__3 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__rho[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->__Vtask_tb__DOT__run_one_test__1__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__1__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__3__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__3__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__15__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__15__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__15__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__16__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__16__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__16__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__21__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__21__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__21__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__39__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__39__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__41__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__41__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__53__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__53__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__53__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__54__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__54__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__54__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__59__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__59__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__59__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__77__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__77__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__79__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__79__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__91__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__91__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__91__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__92__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__92__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__92__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__97__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__97__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__97__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__115__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__115__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__117__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__117__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__129__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__129__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__129__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__130__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__130__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__130__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__135__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__135__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__135__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__153__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__153__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__154__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__154__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__166__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__166__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__166__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__167__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__167__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__167__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__172__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__172__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__172__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__190__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__190__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__191__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__191__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__203__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__203__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__203__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__204__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__204__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__204__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__209__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__209__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__209__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__227__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__227__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__228__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__228__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__240__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__240__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__240__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__241__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__241__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__241__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__246__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__246__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__246__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__264__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__msg_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__264__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__mode_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__out_len = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__digest.atDefault() = 0;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vtask_tb__DOT__sponge_reference__265__state[__Vi0] = 0;
    }
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__rate = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__round_offset_i = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__msg_idx = 0;
    vlSelf->__Vtask_tb__DOT__sponge_reference__265__out_idx = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__277__rounds_i = 0;
    vlSelf->__Vtask_tb__DOT__keccak_p1600__277__round_offset_i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->__Vtask_tb__DOT__keccak_p1600__277__a[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->__Vfunc_tb__DOT__load_lane__278__state[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb__DOT__load_lane__278__x = 0;
    vlSelf->__Vfunc_tb__DOT__load_lane__278__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__283__x = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__283__y = 0;
    vlSelf->__Vtask_tb__DOT__store_lane__283__lane = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_tb__DOT__run_one_test__302__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__302__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__302__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__302__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__302__got.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__339__out_len = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__339__input_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__339__output_stall_percent = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__339__msg.atDefault() = 0;
    vlSelf->__Vtask_tb__DOT__run_one_test__339__got.atDefault() = 0;
    vlSelf->__Vfunc_rc__377__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_rc__377__round = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
