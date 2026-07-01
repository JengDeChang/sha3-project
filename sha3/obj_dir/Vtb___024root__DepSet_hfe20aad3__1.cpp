// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_10__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_10__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__373__expected_len;
    __Vtask_tb__DOT__collect_output__373__expected_len = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__373__stall_percent;
    __Vtask_tb__DOT__collect_output__373__stall_percent = 0;
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__collect_output__373__got;
    __Vtask_tb__DOT__collect_output__373__got.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__373__idx;
    __Vtask_tb__DOT__collect_output__373__idx = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__373__watchdog;
    __Vtask_tb__DOT__collect_output__373__watchdog = 0;
    // Body
    __Vtask_tb__DOT__collect_output__373__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__339__output_stall_percent;
    __Vtask_tb__DOT__collect_output__373__expected_len 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__339__out_len;
    __Vtask_tb__DOT__collect_output__373__idx = 0U;
    __Vtask_tb__DOT__collect_output__373__watchdog = 0U;
    __Vtask_tb__DOT__collect_output__373__got.renew(__Vtask_tb__DOT__collect_output__373__expected_len);
    vlSelfRef.tb__DOT__m_axis_tready = 0U;
    while ((__Vtask_tb__DOT__collect_output__373__idx 
            < __Vtask_tb__DOT__collect_output__373__expected_len)) {
        if ((VL_URANDOM_RANGE_I(0U, 0x63U) < __Vtask_tb__DOT__collect_output__373__stall_percent)) {
            vlSelfRef.tb__DOT__m_axis_tready = 0U;
            if ((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                vlSelfRef.tb__DOT__saw_output_stall = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__m_axis_tready = 1U;
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "sim/tb.sv", 
                                                             458);
        __Vtask_tb__DOT__collect_output__373__watchdog 
            = ((IData)(1U) + __Vtask_tb__DOT__collect_output__373__watchdog);
        if (VL_UNLIKELY((VL_LTS_III(32, 0x30d40U, __Vtask_tb__DOT__collect_output__373__watchdog)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:461: Assertion failed in %Ntb.collect_output: Timeout while waiting for output byte %0d of %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb__DOT__collect_output__373__idx,
                         32,__Vtask_tb__DOT__collect_output__373__expected_len);
            VL_STOP_MT("sim/tb.sv", 461, "", false);
        }
        if (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
             & (IData)(vlSelfRef.tb__DOT__m_axis_tready))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__373__idx 
                                  >= __Vtask_tb__DOT__collect_output__373__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__373__got.atWrite(__Vtask_tb__DOT__collect_output__373__idx) 
                    = ((0xc7U >= (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r]
                        : 0U);
                __Vtask_tb__DOT__collect_output__373__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__373__idx);
            }
            if ((2U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__373__idx 
                                  >= __Vtask_tb__DOT__collect_output__373__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__373__got.atWrite(__Vtask_tb__DOT__collect_output__373__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__373__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__373__idx);
            }
            if ((4U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__373__idx 
                                  >= __Vtask_tb__DOT__collect_output__373__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__373__got.atWrite(__Vtask_tb__DOT__collect_output__373__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(2U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__373__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__373__idx);
            }
            if ((8U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__373__idx 
                                  >= __Vtask_tb__DOT__collect_output__373__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__373__got.atWrite(__Vtask_tb__DOT__collect_output__373__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(3U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__373__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__373__idx);
            }
        }
    }
    vlSelfRef.tb__DOT__m_axis_tready = 0U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "sim/tb.sv", 
                                                         476);
    vlSelfRef.__Vtask_tb__DOT__run_one_test__339__got 
        = __Vtask_tb__DOT__collect_output__373__got;
    vlSelfRef.__Vfork_10__sync.done("sim/tb.sv", 553);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_9__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_9__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__336__expected_len;
    __Vtask_tb__DOT__collect_output__336__expected_len = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__336__stall_percent;
    __Vtask_tb__DOT__collect_output__336__stall_percent = 0;
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__collect_output__336__got;
    __Vtask_tb__DOT__collect_output__336__got.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__336__idx;
    __Vtask_tb__DOT__collect_output__336__idx = 0;
    IData/*31:0*/ __Vtask_tb__DOT__collect_output__336__watchdog;
    __Vtask_tb__DOT__collect_output__336__watchdog = 0;
    // Body
    __Vtask_tb__DOT__collect_output__336__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__302__output_stall_percent;
    __Vtask_tb__DOT__collect_output__336__expected_len 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__302__out_len;
    __Vtask_tb__DOT__collect_output__336__idx = 0U;
    __Vtask_tb__DOT__collect_output__336__watchdog = 0U;
    __Vtask_tb__DOT__collect_output__336__got.renew(__Vtask_tb__DOT__collect_output__336__expected_len);
    vlSelfRef.tb__DOT__m_axis_tready = 0U;
    while ((__Vtask_tb__DOT__collect_output__336__idx 
            < __Vtask_tb__DOT__collect_output__336__expected_len)) {
        if ((VL_URANDOM_RANGE_I(0U, 0x63U) < __Vtask_tb__DOT__collect_output__336__stall_percent)) {
            vlSelfRef.tb__DOT__m_axis_tready = 0U;
            if ((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                vlSelfRef.tb__DOT__saw_output_stall = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__m_axis_tready = 1U;
        }
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "sim/tb.sv", 
                                                             458);
        __Vtask_tb__DOT__collect_output__336__watchdog 
            = ((IData)(1U) + __Vtask_tb__DOT__collect_output__336__watchdog);
        if (VL_UNLIKELY((VL_LTS_III(32, 0x30d40U, __Vtask_tb__DOT__collect_output__336__watchdog)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:461: Assertion failed in %Ntb.collect_output: Timeout while waiting for output byte %0d of %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb__DOT__collect_output__336__idx,
                         32,__Vtask_tb__DOT__collect_output__336__expected_len);
            VL_STOP_MT("sim/tb.sv", 461, "", false);
        }
        if (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
             & (IData)(vlSelfRef.tb__DOT__m_axis_tready))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__336__idx 
                                  >= __Vtask_tb__DOT__collect_output__336__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__336__got.atWrite(__Vtask_tb__DOT__collect_output__336__idx) 
                    = ((0xc7U >= (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r]
                        : 0U);
                __Vtask_tb__DOT__collect_output__336__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__336__idx);
            }
            if ((2U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__336__idx 
                                  >= __Vtask_tb__DOT__collect_output__336__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__336__got.atWrite(__Vtask_tb__DOT__collect_output__336__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__336__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__336__idx);
            }
            if ((4U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__336__idx 
                                  >= __Vtask_tb__DOT__collect_output__336__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__336__got.atWrite(__Vtask_tb__DOT__collect_output__336__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(2U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__336__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__336__idx);
            }
            if ((8U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep))) {
                if (VL_UNLIKELY(((__Vtask_tb__DOT__collect_output__336__idx 
                                  >= __Vtask_tb__DOT__collect_output__336__expected_len)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:467: Assertion failed in %Ntb.collect_output.unnamedblk25: DUT produced more bytes than expected\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/tb.sv", 467, "", false);
                }
                __Vtask_tb__DOT__collect_output__336__got.atWrite(__Vtask_tb__DOT__collect_output__336__idx) 
                    = ((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))
                        ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                       [(0xffU & ((IData)(3U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))]
                        : 0U);
                __Vtask_tb__DOT__collect_output__336__idx 
                    = ((IData)(1U) + __Vtask_tb__DOT__collect_output__336__idx);
            }
        }
    }
    vlSelfRef.tb__DOT__m_axis_tready = 0U;
    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb.clk)", 
                                                         "sim/tb.sv", 
                                                         476);
    vlSelfRef.__Vtask_tb__DOT__run_one_test__302__got 
        = __Vtask_tb__DOT__collect_output__336__got;
    vlSelfRef.__Vfork_9__sync.done("sim/tb.sv", 553);
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__58(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__58\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb__DOT__report_manual_coverage__376__all_modes;
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes = 0;
    // Body
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes = 1U;
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[0U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[1U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[2U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[3U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[4U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[5U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[6U]);
    __Vtask_tb__DOT__report_manual_coverage__376__all_modes 
        = ((IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes) 
           & vlSelfRef.tb__DOT__saw_mode[7U]);
    VL_WRITEF_NX("\nManual coverage summary:\n  all modes covered             : %0#\n  zero-length message           : %0#\n  partial input word            : %0#\n  full input word               : %0#\n  block-aligned input           : %0#\n  rate-1 input remainder        : %0#\n  multi-rate-block input        : %0#\n  partial output word           : %0#\n  block-aligned output          : %0#\n  multi-rate-block output       : %0#\n  input stalls injected         : %0#\n  output stalls observed        : %0#\n",0,
                 1,__Vtask_tb__DOT__report_manual_coverage__376__all_modes,
                 1,(IData)(vlSelfRef.tb__DOT__saw_msg_len_zero),
                 1,vlSelfRef.tb__DOT__saw_msg_len_partial_word,
                 1,(IData)(vlSelfRef.tb__DOT__saw_msg_len_full_word),
                 1,vlSelfRef.tb__DOT__saw_msg_len_block_aligned,
                 1,(IData)(vlSelfRef.tb__DOT__saw_msg_len_rate_minus_one),
                 1,vlSelfRef.tb__DOT__saw_msg_len_multi_block,
                 1,(IData)(vlSelfRef.tb__DOT__saw_out_len_partial_word),
                 1,vlSelfRef.tb__DOT__saw_out_len_block_aligned,
                 1,(IData)(vlSelfRef.tb__DOT__saw_out_len_multi_block),
                 1,vlSelfRef.tb__DOT__saw_input_stall,
                 1,(IData)(vlSelfRef.tb__DOT__saw_output_stall));
    VL_WRITEF_NX("  covergroup coverage           : skipped under Icarus Verilog\n",0);
    if (VL_UNLIKELY(((1U & ((((((((((((~ (IData)(__Vtask_tb__DOT__report_manual_coverage__376__all_modes)) 
                                      | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_zero))) 
                                     | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_partial_word))) 
                                    | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_full_word))) 
                                   | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_block_aligned))) 
                                  | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_rate_minus_one))) 
                                 | (~ (IData)(vlSelfRef.tb__DOT__saw_msg_len_multi_block))) 
                                | (~ (IData)(vlSelfRef.tb__DOT__saw_out_len_partial_word))) 
                               | (~ (IData)(vlSelfRef.tb__DOT__saw_out_len_block_aligned))) 
                              | (~ (IData)(vlSelfRef.tb__DOT__saw_out_len_multi_block))) 
                             | (~ (IData)(vlSelfRef.tb__DOT__saw_input_stall))) 
                            | (~ (IData)(vlSelfRef.tb__DOT__saw_output_stall))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb.sv:600: Assertion failed in %Ntb.report_manual_coverage: Manual coverage goals were not met\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/tb.sv", 600, "", false);
    }
    VL_WRITEF_NX("\nAll SHA-3 tests passed: tests=%0# bytes_checked=%0#\n",0,
                 32,vlSelfRef.tb__DOT__tests_run,32,
                 vlSelfRef.tb__DOT__bytes_checked);
    VL_FINISH_MT("sim/tb.sv", 634, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_n__0 
        = vlSelfRef.tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
