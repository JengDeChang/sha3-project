// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__56____Vfork_8__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__56____Vfork_8__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__drive_input__296__msg;
    __Vtask_tb__DOT__drive_input__296__msg.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__296__stall_percent;
    __Vtask_tb__DOT__drive_input__296__stall_percent = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now;
    __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i;
    __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__296__idx;
    __Vtask_tb__DOT__drive_input__296__idx = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__297__Vfuncout;
    __Vfunc_tb__DOT__keep_from_count__297__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__keep_from_count__297__byte_count;
    __Vfunc_tb__DOT__keep_from_count__297__byte_count = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__297__keep;
    __Vfunc_tb__DOT__keep_from_count__297__keep = 0;
    // Body
    __Vtask_tb__DOT__drive_input__296__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__264__input_stall_percent;
    __Vtask_tb__DOT__drive_input__296__msg = vlSelfRef.__Vtask_tb__DOT__run_one_test__264__msg;
    {
        __Vtask_tb__DOT__drive_input__296__idx = 0U;
        if ((0U == __Vtask_tb__DOT__drive_input__296__msg.size())) {
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 394);
            vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 398);
            vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            goto __Vlabel840;
        }
        while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__296__idx, __Vtask_tb__DOT__drive_input__296__msg.size())) {
            {
                __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now 
                    = (VL_GTS_III(32, 4U, (__Vtask_tb__DOT__drive_input__296__msg.size() 
                                           - __Vtask_tb__DOT__drive_input__296__idx))
                        ? (__Vtask_tb__DOT__drive_input__296__msg.size() 
                           - __Vtask_tb__DOT__drive_input__296__idx)
                        : 4U);
                if ((VL_URANDOM_RANGE_I(0U, 0x63U) 
                     < __Vtask_tb__DOT__drive_input__296__stall_percent)) {
                    vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                    vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                    vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                    vlSelfRef.tb__DOT__saw_input_stall = 1U;
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         414);
                    goto __Vlabel841;
                }
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i, __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now)) {
                    vlSelfRef.tb__DOT__s_axis_tdata 
                        = (((~ ((IData)(0xffU) << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i)))) 
                            & vlSelfRef.tb__DOT__s_axis_tdata) 
                           | (0xffffffffULL & (__Vtask_tb__DOT__drive_input__296__msg.at(
                                                                                (__Vtask_tb__DOT__drive_input__296__idx 
                                                                                + __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i)) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i)))));
                    __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i 
                        = ((IData)(1U) + __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__unnamedblk24__DOT__i);
                }
                __Vfunc_tb__DOT__keep_from_count__297__byte_count 
                    = __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now;
                __Vfunc_tb__DOT__keep_from_count__297__keep = 0U;
                __Vfunc_tb__DOT__keep_from_count__297__keep 
                    = ((8U & (IData)(__Vfunc_tb__DOT__keep_from_count__297__keep)) 
                       | ((VL_LTS_III(32, 2U, __Vfunc_tb__DOT__keep_from_count__297__byte_count) 
                           << 2U) | ((VL_LTS_III(32, 1U, __Vfunc_tb__DOT__keep_from_count__297__byte_count) 
                                      << 1U) | VL_LTS_III(32, 0U, __Vfunc_tb__DOT__keep_from_count__297__byte_count))));
                __Vfunc_tb__DOT__keep_from_count__297__keep 
                    = ((7U & (IData)(__Vfunc_tb__DOT__keep_from_count__297__keep)) 
                       | (VL_LTS_III(32, 3U, __Vfunc_tb__DOT__keep_from_count__297__byte_count) 
                          << 3U));
                __Vfunc_tb__DOT__keep_from_count__297__Vfuncout 
                    = __Vfunc_tb__DOT__keep_from_count__297__keep;
                vlSelfRef.tb__DOT__s_axis_tkeep = __Vfunc_tb__DOT__keep_from_count__297__Vfuncout;
                vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     425);
                while ((1U & (~ ((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
                                 & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))))) {
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         425);
                }
                __Vtask_tb__DOT__drive_input__296__idx 
                    = (__Vtask_tb__DOT__drive_input__296__idx 
                       + __Vtask_tb__DOT__drive_input__296__unnamedblk23__DOT__bytes_now);
                vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     432);
                __Vlabel841: ;
            }
        }
        __Vlabel840: ;
    }
    vlSelfRef.__Vfork_8__sync.done("sim/tb.sv", 552);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_10__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_10__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__drive_input__371__msg;
    __Vtask_tb__DOT__drive_input__371__msg.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__371__stall_percent;
    __Vtask_tb__DOT__drive_input__371__stall_percent = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now;
    __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i;
    __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__371__idx;
    __Vtask_tb__DOT__drive_input__371__idx = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__372__Vfuncout;
    __Vfunc_tb__DOT__keep_from_count__372__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__keep_from_count__372__byte_count;
    __Vfunc_tb__DOT__keep_from_count__372__byte_count = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__372__keep;
    __Vfunc_tb__DOT__keep_from_count__372__keep = 0;
    // Body
    __Vtask_tb__DOT__drive_input__371__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__339__input_stall_percent;
    __Vtask_tb__DOT__drive_input__371__msg = vlSelfRef.__Vtask_tb__DOT__run_one_test__339__msg;
    {
        __Vtask_tb__DOT__drive_input__371__idx = 0U;
        if ((0U == __Vtask_tb__DOT__drive_input__371__msg.size())) {
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 394);
            vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 398);
            vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            goto __Vlabel842;
        }
        while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__371__idx, __Vtask_tb__DOT__drive_input__371__msg.size())) {
            {
                __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now 
                    = (VL_GTS_III(32, 4U, (__Vtask_tb__DOT__drive_input__371__msg.size() 
                                           - __Vtask_tb__DOT__drive_input__371__idx))
                        ? (__Vtask_tb__DOT__drive_input__371__msg.size() 
                           - __Vtask_tb__DOT__drive_input__371__idx)
                        : 4U);
                if ((VL_URANDOM_RANGE_I(0U, 0x63U) 
                     < __Vtask_tb__DOT__drive_input__371__stall_percent)) {
                    vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                    vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                    vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                    vlSelfRef.tb__DOT__saw_input_stall = 1U;
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         414);
                    goto __Vlabel843;
                }
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i, __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now)) {
                    vlSelfRef.tb__DOT__s_axis_tdata 
                        = (((~ ((IData)(0xffU) << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i)))) 
                            & vlSelfRef.tb__DOT__s_axis_tdata) 
                           | (0xffffffffULL & (__Vtask_tb__DOT__drive_input__371__msg.at(
                                                                                (__Vtask_tb__DOT__drive_input__371__idx 
                                                                                + __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i)) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i)))));
                    __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i 
                        = ((IData)(1U) + __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__unnamedblk24__DOT__i);
                }
                __Vfunc_tb__DOT__keep_from_count__372__byte_count 
                    = __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now;
                __Vfunc_tb__DOT__keep_from_count__372__keep = 0U;
                __Vfunc_tb__DOT__keep_from_count__372__keep 
                    = ((8U & (IData)(__Vfunc_tb__DOT__keep_from_count__372__keep)) 
                       | ((VL_LTS_III(32, 2U, __Vfunc_tb__DOT__keep_from_count__372__byte_count) 
                           << 2U) | ((VL_LTS_III(32, 1U, __Vfunc_tb__DOT__keep_from_count__372__byte_count) 
                                      << 1U) | VL_LTS_III(32, 0U, __Vfunc_tb__DOT__keep_from_count__372__byte_count))));
                __Vfunc_tb__DOT__keep_from_count__372__keep 
                    = ((7U & (IData)(__Vfunc_tb__DOT__keep_from_count__372__keep)) 
                       | (VL_LTS_III(32, 3U, __Vfunc_tb__DOT__keep_from_count__372__byte_count) 
                          << 3U));
                __Vfunc_tb__DOT__keep_from_count__372__Vfuncout 
                    = __Vfunc_tb__DOT__keep_from_count__372__keep;
                vlSelfRef.tb__DOT__s_axis_tkeep = __Vfunc_tb__DOT__keep_from_count__372__Vfuncout;
                vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     425);
                while ((1U & (~ ((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
                                 & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))))) {
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         425);
                }
                __Vtask_tb__DOT__drive_input__371__idx 
                    = (__Vtask_tb__DOT__drive_input__371__idx 
                       + __Vtask_tb__DOT__drive_input__371__unnamedblk23__DOT__bytes_now);
                vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     432);
                __Vlabel843: ;
            }
        }
        __Vlabel842: ;
    }
    vlSelfRef.__Vfork_10__sync.done("sim/tb.sv", 552);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_9__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__57____Vfork_9__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__drive_input__334__msg;
    __Vtask_tb__DOT__drive_input__334__msg.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__334__stall_percent;
    __Vtask_tb__DOT__drive_input__334__stall_percent = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now;
    __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i;
    __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__334__idx;
    __Vtask_tb__DOT__drive_input__334__idx = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__335__Vfuncout;
    __Vfunc_tb__DOT__keep_from_count__335__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__keep_from_count__335__byte_count;
    __Vfunc_tb__DOT__keep_from_count__335__byte_count = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__335__keep;
    __Vfunc_tb__DOT__keep_from_count__335__keep = 0;
    // Body
    __Vtask_tb__DOT__drive_input__334__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__302__input_stall_percent;
    __Vtask_tb__DOT__drive_input__334__msg = vlSelfRef.__Vtask_tb__DOT__run_one_test__302__msg;
    {
        __Vtask_tb__DOT__drive_input__334__idx = 0U;
        if ((0U == __Vtask_tb__DOT__drive_input__334__msg.size())) {
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 394);
            vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb.clk)", 
                                                                 "sim/tb.sv", 
                                                                 398);
            vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
            vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
            vlSelfRef.tb__DOT__s_axis_tdata = 0U;
            goto __Vlabel844;
        }
        while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__334__idx, __Vtask_tb__DOT__drive_input__334__msg.size())) {
            {
                __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now 
                    = (VL_GTS_III(32, 4U, (__Vtask_tb__DOT__drive_input__334__msg.size() 
                                           - __Vtask_tb__DOT__drive_input__334__idx))
                        ? (__Vtask_tb__DOT__drive_input__334__msg.size() 
                           - __Vtask_tb__DOT__drive_input__334__idx)
                        : 4U);
                if ((VL_URANDOM_RANGE_I(0U, 0x63U) 
                     < __Vtask_tb__DOT__drive_input__334__stall_percent)) {
                    vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                    vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                    vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                    vlSelfRef.tb__DOT__saw_input_stall = 1U;
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         414);
                    goto __Vlabel845;
                }
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i, __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now)) {
                    vlSelfRef.tb__DOT__s_axis_tdata 
                        = (((~ ((IData)(0xffU) << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i)))) 
                            & vlSelfRef.tb__DOT__s_axis_tdata) 
                           | (0xffffffffULL & (__Vtask_tb__DOT__drive_input__334__msg.at(
                                                                                (__Vtask_tb__DOT__drive_input__334__idx 
                                                                                + __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i)) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i)))));
                    __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i 
                        = ((IData)(1U) + __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__unnamedblk24__DOT__i);
                }
                __Vfunc_tb__DOT__keep_from_count__335__byte_count 
                    = __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now;
                __Vfunc_tb__DOT__keep_from_count__335__keep = 0U;
                __Vfunc_tb__DOT__keep_from_count__335__keep 
                    = ((8U & (IData)(__Vfunc_tb__DOT__keep_from_count__335__keep)) 
                       | ((VL_LTS_III(32, 2U, __Vfunc_tb__DOT__keep_from_count__335__byte_count) 
                           << 2U) | ((VL_LTS_III(32, 1U, __Vfunc_tb__DOT__keep_from_count__335__byte_count) 
                                      << 1U) | VL_LTS_III(32, 0U, __Vfunc_tb__DOT__keep_from_count__335__byte_count))));
                __Vfunc_tb__DOT__keep_from_count__335__keep 
                    = ((7U & (IData)(__Vfunc_tb__DOT__keep_from_count__335__keep)) 
                       | (VL_LTS_III(32, 3U, __Vfunc_tb__DOT__keep_from_count__335__byte_count) 
                          << 3U));
                __Vfunc_tb__DOT__keep_from_count__335__Vfuncout 
                    = __Vfunc_tb__DOT__keep_from_count__335__keep;
                vlSelfRef.tb__DOT__s_axis_tkeep = __Vfunc_tb__DOT__keep_from_count__335__Vfuncout;
                vlSelfRef.tb__DOT__s_axis_tvalid = 1U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     425);
                while ((1U & (~ ((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
                                 & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))))) {
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         425);
                }
                __Vtask_tb__DOT__drive_input__334__idx 
                    = (__Vtask_tb__DOT__drive_input__334__idx 
                       + __Vtask_tb__DOT__drive_input__334__unnamedblk23__DOT__bytes_now);
                vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     432);
                __Vlabel845: ;
            }
        }
        __Vlabel844: ;
    }
    vlSelfRef.__Vfork_9__sync.done("sim/tb.sv", 552);
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
}

extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_ha02b9d81_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_hb99522a5_0;
extern const VlUnpacked<IData/*31:0*/, 8> Vtb__ConstPool__TABLE_h3e75c2ad_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_h010b2d2f_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_he7b302ea_0;

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
           >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
               - (IData)(1U))) & (((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                  >= (IData)(vlSelfRef.tb__DOT__outlen_partial))) 
         & (0U < (IData)(vlSelfRef.tb__DOT__outlen_partial)))) {
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xeU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                              < (IData)(vlSelfRef.tb__DOT__outlen_partial)));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xdU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(1U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 1U));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((0xbU & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(2U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 2U));
        vlSelfRef.tb__DOT__m_axis_tkeep = ((7U & (IData)(vlSelfRef.tb__DOT__m_axis_tkeep)) 
                                           | ((((IData)(3U) 
                                                + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                               < (IData)(vlSelfRef.tb__DOT__outlen_partial)) 
                                              << 3U));
        vlSelfRef.tb__DOT__dut__DOT__unnamedblk4__DOT__i = 4U;
    } else {
        vlSelfRef.tb__DOT__m_axis_tkeep = 0xfU;
    }
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (1U 
                                                 & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 1U))));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 2U))));
    vlSelfRef.tb__DOT__dut__DOT__valid_inbits = (7U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                        >> 3U))));
    vlSelfRef.tb__DOT__dut__DOT__rdata_mask = ((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                >> 3U)))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                     >> 2U)))) 
                                                      << 0x10U))) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb__DOT__s_axis_tkeep) 
                                                                     >> 1U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))))));
    __Vtableidx1 = vlSelfRef.tb__DOT__mode;
    vlSelfRef.tb__DOT__dut__DOT__sha3_rate = Vtb__ConstPool__TABLE_ha02b9d81_0
        [__Vtableidx1];
    if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                if (vlSelfRef.tb__DOT__s_axis_tvalid) {
                    vlSelfRef.tb__DOT__dut__DOT__unnamedblk1__DOT__i = 4U;
                    if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                           >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                               - (IData)(1U))) & ((0xffffU 
                                                   & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                                      + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                                  >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                         & (0U < (IData)(vlSelfRef.tb__DOT__inlen_partial)))) {
                        if (((IData)(vlSelfRef.tb__DOT__inlen_partial) 
                             != ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                 - (IData)(1U)))) {
                            if ((0xffffffffU != vlSelfRef.tb__DOT__dut__DOT__rdata_mask)) {
                                vlSelfRef.tb__DOT__dut__DOT__unnamedblk2__DOT__i = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__sha3_suffix = Vtb__ConstPool__TABLE_hb99522a5_0
        [__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__sha3_suffix_word = 
        Vtb__ConstPool__TABLE_h3e75c2ad_0[__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__rounds = Vtb__ConstPool__TABLE_h010b2d2f_0
        [__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__round_cnt_offset = 
        Vtb__ConstPool__TABLE_he7b302ea_0[__Vtableidx1];
    vlSelfRef.tb__DOT__dut__DOT__rdata_masked = (vlSelfRef.tb__DOT__s_axis_tdata 
                                                 & vlSelfRef.tb__DOT__dut__DOT__rdata_mask);
    vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked 
        = (((1U == (IData)(vlSelfRef.tb__DOT__s_axis_tkeep))
             ? 0xff00U : ((2U == (0xeU & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                           ? 0xff0000U : ((4U == (0xcU 
                                                  & (IData)(vlSelfRef.tb__DOT__s_axis_tkeep)))
                                           ? 0xff000000U
                                           : 0U))) 
           & vlSelfRef.tb__DOT__dut__DOT__sha3_suffix_word);
    vlSelfRef.tb__DOT__dut__DOT__state_n = vlSelfRef.tb__DOT__dut__DOT__state_r;
    if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
            } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                        >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                            - (IData)(1U)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
                 & (IData)(vlSelfRef.tb__DOT__m_axis_tready))) {
                if ((0U < (IData)(vlSelfRef.tb__DOT__outlen_partial))) {
                    if ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                          >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                              - (IData)(1U))) & (((IData)(4U) 
                                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                                 >= (IData)(vlSelfRef.tb__DOT__outlen_partial)))) {
                        vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
                    } else if ((((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                        vlSelfRef.tb__DOT__dut__DOT__state_n = 6U;
                    }
                } else if ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                             >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                                 - (IData)(1U))) & 
                            (((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                             >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate)))) {
                    vlSelfRef.tb__DOT__dut__DOT__state_n = 0U;
                } else if ((((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                            >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                    vlSelfRef.tb__DOT__dut__DOT__state_n = 6U;
                }
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__state_n = 3U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                 >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                     - (IData)(1U)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 5U;
            }
        } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                    >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                        - (IData)(1U)))) {
            vlSelfRef.tb__DOT__dut__DOT__state_n = 
                ((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                   >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                       - (IData)(1U))) & (0U == (IData)(vlSelfRef.tb__DOT__inlen_partial)))
                  ? 4U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if (((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
             & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))) {
            if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                   >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                       - (IData)(1U))) & ((0xffffU 
                                           & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                              + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                          >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                 & (0U < (IData)(vlSelfRef.tb__DOT__inlen_partial)))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 3U;
            } else if (((0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                        >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))) {
                vlSelfRef.tb__DOT__dut__DOT__state_n = 2U;
            }
        }
    } else if (vlSelfRef.tb__DOT__s_axis_tvalid) {
        vlSelfRef.tb__DOT__dut__DOT__state_n = (((0U 
                                                  == (IData)(vlSelfRef.tb__DOT__inblocks)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb__DOT__inlen_partial)))
                                                 ? 4U
                                                 : 1U);
    }
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[0U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
           [0U][0U] ^ ([&]() {
                vlSelfRef.__Vfunc_rc__377__round = 
                    (0x1fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_offset) 
                              + (IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r)));
                {
                    if (((((((((0U == vlSelfRef.__Vfunc_rc__377__round) 
                               | (1U == vlSelfRef.__Vfunc_rc__377__round)) 
                              | (2U == vlSelfRef.__Vfunc_rc__377__round)) 
                             | (3U == vlSelfRef.__Vfunc_rc__377__round)) 
                            | (4U == vlSelfRef.__Vfunc_rc__377__round)) 
                           | (5U == vlSelfRef.__Vfunc_rc__377__round)) 
                          | (6U == vlSelfRef.__Vfunc_rc__377__round)) 
                         | (7U == vlSelfRef.__Vfunc_rc__377__round))) {
                        if ((0U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 1ULL;
                            goto __Vlabel846;
                        } else if ((1U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8082ULL;
                            goto __Vlabel846;
                        } else if ((2U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000000000808aULL;
                            goto __Vlabel846;
                        } else if ((3U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008000ULL;
                            goto __Vlabel846;
                        } else if ((4U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x808bULL;
                            goto __Vlabel846;
                        } else if ((5U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80000001ULL;
                            goto __Vlabel846;
                        } else if ((6U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008081ULL;
                            goto __Vlabel846;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008009ULL;
                            goto __Vlabel846;
                        }
                    } else if (((((((((8U == vlSelfRef.__Vfunc_rc__377__round) 
                                      | (9U == vlSelfRef.__Vfunc_rc__377__round)) 
                                     | (0xaU == vlSelfRef.__Vfunc_rc__377__round)) 
                                    | (0xbU == vlSelfRef.__Vfunc_rc__377__round)) 
                                   | (0xcU == vlSelfRef.__Vfunc_rc__377__round)) 
                                  | (0xdU == vlSelfRef.__Vfunc_rc__377__round)) 
                                 | (0xeU == vlSelfRef.__Vfunc_rc__377__round)) 
                                | (0xfU == vlSelfRef.__Vfunc_rc__377__round))) {
                        if ((8U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8aULL;
                            goto __Vlabel846;
                        } else if ((9U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x88ULL;
                            goto __Vlabel846;
                        } else if ((0xaU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80008009ULL;
                            goto __Vlabel846;
                        } else if ((0xbU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000aULL;
                            goto __Vlabel846;
                        } else if ((0xcU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000808bULL;
                            goto __Vlabel846;
                        } else if ((0xdU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000000000008bULL;
                            goto __Vlabel846;
                        } else if ((0xeU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008089ULL;
                            goto __Vlabel846;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008003ULL;
                            goto __Vlabel846;
                        }
                    } else if (((((((((0x10U == vlSelfRef.__Vfunc_rc__377__round) 
                                      | (0x11U == vlSelfRef.__Vfunc_rc__377__round)) 
                                     | (0x12U == vlSelfRef.__Vfunc_rc__377__round)) 
                                    | (0x13U == vlSelfRef.__Vfunc_rc__377__round)) 
                                   | (0x14U == vlSelfRef.__Vfunc_rc__377__round)) 
                                  | (0x15U == vlSelfRef.__Vfunc_rc__377__round)) 
                                 | (0x16U == vlSelfRef.__Vfunc_rc__377__round)) 
                                | (0x17U == vlSelfRef.__Vfunc_rc__377__round))) {
                        if ((0x10U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008002ULL;
                            goto __Vlabel846;
                        } else if ((0x11U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000000080ULL;
                            goto __Vlabel846;
                        } else if ((0x12U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800aULL;
                            goto __Vlabel846;
                        } else if ((0x13U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000008000000aULL;
                            goto __Vlabel846;
                        } else if ((0x14U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008081ULL;
                            goto __Vlabel846;
                        } else if ((0x15U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008080ULL;
                            goto __Vlabel846;
                        } else if ((0x16U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80000001ULL;
                            goto __Vlabel846;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008008ULL;
                            goto __Vlabel846;
                        }
                    } else {
                        vlSelfRef.__Vfunc_rc__377__Vfuncout = 0ULL;
                        goto __Vlabel846;
                    }
                    __Vlabel846: ;
                }
            }(), vlSelfRef.__Vfunc_rc__377__Vfuncout));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0U] = (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                             [0U]
                                                             [0U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[1U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[2U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[3U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[4U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[5U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[6U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[7U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [0U]
                                                              [0U] 
                                                              >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x28U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [0U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x29U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x2fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][1U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x50U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [0U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x51U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x52U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x53U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x54U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x55U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x56U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x57U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][2U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x78U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [0U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x79U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x7fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][3U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa0U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [0U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa1U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa2U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa3U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa4U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa5U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa6U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa7U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [0U][4U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[8U] = (0xffU 
                                                   & (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                             [1U]
                                                             [0U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[9U] = (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                                                              [1U]
                                                              [0U] 
                                                              >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xaU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xcU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xdU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xeU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xfU] = 
        (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                          [1U][0U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x30U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [1U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x31U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x32U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x33U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x34U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x35U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x36U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x37U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][1U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x58U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [1U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x59U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x5fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][2U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x80U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [1U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x81U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x82U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x83U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x84U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x85U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x86U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x87U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][3U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa8U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [1U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xa9U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xaaU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xabU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xacU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xadU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xaeU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xafU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [1U][4U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x10U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [2U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x11U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x12U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x13U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x14U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x15U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x16U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x17U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][0U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x38U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [2U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x39U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x3fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][1U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x60U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [2U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x61U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x62U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x63U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x64U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x65U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x66U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x67U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][2U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x88U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [2U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x89U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x8fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][3U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb0U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [2U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb1U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb2U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb3U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb4U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb5U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb6U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb7U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [2U][4U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x18U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [3U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x19U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x1fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][0U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x40U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [3U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x41U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x42U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x43U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x44U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x45U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x46U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x47U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][1U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x68U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [3U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x69U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x6fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][2U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x90U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [3U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x91U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x92U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x93U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x94U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x95U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x96U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x97U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][3U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb8U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [3U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xb9U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbaU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbbU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbcU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbdU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbeU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xbfU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [3U][4U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x20U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [4U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x21U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x22U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x23U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x24U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x25U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x26U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x27U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][0U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x48U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [4U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x49U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x4fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][1U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x70U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [4U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x71U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x72U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x73U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x74U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x75U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x76U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x77U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][2U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x98U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [4U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x99U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9aU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9bU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9cU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9dU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9eU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0x9fU] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][3U] >> 0x38U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc0U] 
        = (0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                           [4U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc1U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 8U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc2U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x10U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc3U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x18U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc4U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x20U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc5U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x28U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc6U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x30U)));
    vlSelfRef.tb__DOT__dut__DOT__kstate_out[0xc7U] 
        = (0xffU & (IData)((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota
                            [4U][4U] >> 0x38U)));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp1] 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_r
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                IData/*31:0*/ __Vilp2;
                __Vilp2 = 0U;
                while ((__Vilp2 <= 0xc7U)) {
                    vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp2] 
                        = vlSelfRef.tb__DOT__dut__DOT__kstate_r
                        [__Vilp2];
                    __Vilp2 = ((IData)(1U) + __Vilp2);
                }
            } else {
                IData/*31:0*/ __Vilp3;
                __Vilp3 = 0U;
                while ((__Vilp3 <= 0xc7U)) {
                    vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp3] 
                        = vlSelfRef.tb__DOT__dut__DOT__kstate_out
                        [__Vilp3];
                    __Vilp3 = ((IData)(1U) + __Vilp3);
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0xc7U)) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp4] 
                    = vlSelfRef.tb__DOT__dut__DOT__kstate_r
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__kstate_n[0U] 
                = (vlSelfRef.tb__DOT__dut__DOT__kstate_r
                   [0U] ^ (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_suffix));
            vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__3 
                = (0x80U ^ ((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                - (IData)(1U))))
                             ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                            [(0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                       - (IData)(1U)))]
                             : 0U));
            if ((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                    - (IData)(1U))))) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                       & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                          - (IData)(1U)))] 
                    = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__3;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0xc7U)) {
            vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp5] 
                = vlSelfRef.tb__DOT__dut__DOT__kstate_out
                [__Vilp5];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
    } else if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
        if (vlSelfRef.tb__DOT__s_axis_tvalid) {
            vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0 
                = (0xffU & (((0xc7U >= (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))
                              ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                             [(0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))]
                              : 0U) ^ vlSelfRef.tb__DOT__dut__DOT__rdata_masked));
            if ((0xc7U >= (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xfcU 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))] 
                    = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0;
            }
            vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0 
                = (0xffU & (((0xc7U >= (0xffU & ((IData)(1U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                              ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                             [(0xffU & ((IData)(1U) 
                                        + (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                              : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                       >> 8U)));
            if ((0xc7U >= (0xffU & ((IData)(1U) + (0xfcU 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (0xfcU 
                                                           & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                    = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0;
            }
            vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0 
                = (0xffU & (((0xc7U >= (0xffU & ((IData)(2U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                              ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                             [(0xffU & ((IData)(2U) 
                                        + (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                              : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                       >> 0x10U)));
            if ((0xc7U >= (0xffU & ((IData)(2U) + (0xfcU 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0xfcU 
                                                           & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                    = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0;
            }
            vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0 
                = (0xffU & (((0xc7U >= (0xffU & ((IData)(3U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                              ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                             [(0xffU & ((IData)(3U) 
                                        + (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                              : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                       >> 0x18U)));
            if ((0xc7U >= (0xffU & ((IData)(3U) + (0xfcU 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0xfcU 
                                                           & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                    = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h22a8ff8e__0;
            }
            if (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                   >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                       - (IData)(1U))) & ((0xffffU 
                                           & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                              + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                          >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                 & (0U < (IData)(vlSelfRef.tb__DOT__inlen_partial)))) {
                if (((IData)(vlSelfRef.tb__DOT__inlen_partial) 
                     == ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                         - (IData)(1U)))) {
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__0 
                        = (((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                - (IData)(1U))))
                             ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                            [(0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                       - (IData)(1U)))]
                             : 0U) ^ (0x80U | (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_suffix)));
                    if ((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                                  - (IData)(1U)))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__0;
                    }
                } else if ((0xffffffffU == vlSelfRef.tb__DOT__dut__DOT__rdata_mask)) {
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h075e1975__0 
                        = (((0xc7U >= (0xffU & ((IData)(4U) 
                                                + (0xfcU 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                             ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                            [(0xffU & ((IData)(4U) 
                                       + (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                             : 0U) ^ (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_suffix));
                    if ((0xc7U >= (0xffU & ((IData)(4U) 
                                            + (0xfcU 
                                               & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (0xfcU 
                                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h075e1975__0;
                    }
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__1 
                        = (0x80U ^ ((0xc7U >= (0xffU 
                                               & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                  - (IData)(1U))))
                                     ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                    [(0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                               - (IData)(1U)))]
                                     : 0U));
                    if ((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                                  - (IData)(1U)))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__1;
                    }
                } else {
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0 
                        = (0xffU & ((((0xc7U >= (0xfcU 
                                                 & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))]
                                       : 0U) ^ vlSelfRef.tb__DOT__dut__DOT__rdata_masked) 
                                    ^ vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked));
                    if ((0xc7U >= (0xfcU & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xfcU 
                                                               & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0;
                    }
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0 
                        = (0xffU & ((((0xc7U >= (0xffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xfcU 
                                                     & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xffU & ((IData)(1U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                                       : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                                >> 8U)) 
                                    ^ (vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked 
                                       >> 8U)));
                    if ((0xc7U >= (0xffU & ((IData)(1U) 
                                            + (0xfcU 
                                               & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (0xfcU 
                                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0;
                    }
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0 
                        = (0xffU & ((((0xc7U >= (0xffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0xfcU 
                                                     & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xffU & ((IData)(2U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                                       : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                                >> 0x10U)) 
                                    ^ (vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked 
                                       >> 0x10U)));
                    if ((0xc7U >= (0xffU & ((IData)(2U) 
                                            + (0xfcU 
                                               & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (0xfcU 
                                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0;
                    }
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0 
                        = (0xffU & ((((0xc7U >= (0xffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0xfcU 
                                                     & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))
                                       ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                      [(0xffU & ((IData)(3U) 
                                                 + 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))]
                                       : 0U) ^ (vlSelfRef.tb__DOT__dut__DOT__rdata_masked 
                                                >> 0x18U)) 
                                    ^ (vlSelfRef.tb__DOT__dut__DOT__suffix_word_masked 
                                       >> 0x18U)));
                    if ((0xc7U >= (0xffU & ((IData)(3U) 
                                            + (0xfcU 
                                               & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (0xfcU 
                                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r))))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h49573fc5__0;
                    }
                    vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__2 
                        = (0x80U ^ ((0xc7U >= (0xffU 
                                               & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                  - (IData)(1U))))
                                     ? vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                    [(0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                               - (IData)(1U)))]
                                     : 0U));
                    if ((0xc7U >= (0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb__DOT__dut__DOT__kstate_n[(0xffU 
                                                               & ((IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate) 
                                                                  - (IData)(1U)))] 
                            = vlSelfRef.tb__DOT__dut__DOT____Vlvbound_h1c9f0a89__2;
                    }
                }
            }
        }
    } else {
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0xc7U)) {
            vlSelfRef.tb__DOT__dut__DOT__kstate_n[__Vilp6] = 0U;
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__5(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__6(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__7(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__8(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__9(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
        Vtb___024root___nba_sequent__TOP__4(vlSelf);
        Vtb___024root___nba_sequent__TOP__5(vlSelf);
        Vtb___024root___nba_sequent__TOP__6(vlSelf);
        Vtb___024root___nba_sequent__TOP__7(vlSelf);
        Vtb___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb__DOT__dut__DOT__byte_cnt_r;
    __Vdly__tb__DOT__dut__DOT__byte_cnt_r = 0;
    CData/*5:0*/ __Vdly__tb__DOT__dut__DOT__block_cnt_r;
    __Vdly__tb__DOT__dut__DOT__block_cnt_r = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v0;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v1;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v2;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v3;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v4;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v5;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v6;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v7;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v8;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v9;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v9 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v10;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v10 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v11;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v11 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v12;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v13;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v13 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v14;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v14 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v15;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v15 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v16;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v16 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v17;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v17 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v18;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v18 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v19;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v19 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v20;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v20 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v21;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v21 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v22;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v22 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v23;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v23 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v24;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v24 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v25;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v25 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v26;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v26 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v27;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v27 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v28;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v28 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v29;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v29 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v30;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v30 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v31;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v31 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v32;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v32 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v33;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v33 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v34;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v34 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v35;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v35 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v36;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v36 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v37;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v37 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v38;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v38 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v39;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v39 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v40;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v40 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v41;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v41 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v42;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v42 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v43;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v43 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v44;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v44 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v45;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v45 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v46;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v46 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v47;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v47 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v48;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v48 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v49;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v49 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v50;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v50 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v51;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v51 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v52;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v52 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v53;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v53 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v54;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v54 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v55;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v55 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v56;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v56 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v57;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v57 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v58;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v58 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v59;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v59 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v60;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v60 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v61;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v61 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v62;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v62 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v63;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v63 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v64;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v64 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v65;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v65 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v66;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v66 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v67;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v67 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v68;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v68 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v69;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v69 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v70;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v70 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v71;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v71 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v72;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v72 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v73;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v73 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v74;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v74 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v75;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v75 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v76;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v76 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v77;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v77 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v78;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v78 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v79;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v79 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v80;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v80 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v81;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v81 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v82;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v82 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v83;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v83 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v84;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v84 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v85;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v85 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v86;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v86 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v87;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v87 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v88;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v88 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v89;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v89 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v90;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v90 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v91;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v91 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v92;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v92 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v93;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v93 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v94;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v94 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v95;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v95 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v96;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v96 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v97;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v97 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v98;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v98 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v99;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v99 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v100;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v100 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v101;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v101 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v102;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v102 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v103;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v103 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v104;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v104 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v105;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v105 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v106;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v106 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v107;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v107 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v108;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v108 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v109;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v109 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v110;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v110 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v111;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v111 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v112;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v112 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v113;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v113 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v114;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v114 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v115;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v115 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v116;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v116 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v117;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v117 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v118;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v118 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v119;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v119 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v120;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v120 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v121;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v121 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v122;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v122 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v123;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v123 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v124;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v124 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v125;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v125 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v126;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v126 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v127;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v127 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v128;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v128 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v129;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v129 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v130;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v130 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v131;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v131 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v132;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v132 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v133;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v133 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v134;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v134 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v135;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v135 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v136;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v136 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v137;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v137 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v138;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v138 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v139;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v139 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v140;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v140 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v141;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v141 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v142;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v142 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v143;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v143 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v144;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v144 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v145;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v145 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v146;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v146 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v147;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v147 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v148;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v148 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v149;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v149 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v150;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v150 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v151;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v151 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v152;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v152 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v153;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v153 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v154;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v154 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v155;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v155 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v156;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v156 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v157;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v157 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v158;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v158 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v159;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v159 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v160;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v160 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v161;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v161 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v162;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v162 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v163;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v163 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v164;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v164 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v165;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v165 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v166;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v166 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v167;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v167 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v168;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v168 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v169;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v169 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v170;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v170 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v171;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v171 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v172;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v172 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v173;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v173 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v174;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v174 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v175;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v175 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v176;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v176 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v177;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v177 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v178;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v178 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v179;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v179 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v180;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v180 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v181;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v181 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v182;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v182 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v183;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v183 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v184;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v184 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v185;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v185 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v186;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v186 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v187;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v187 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v188;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v188 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v189;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v189 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v190;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v190 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v191;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v191 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v192;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v192 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v193;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v193 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v194;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v194 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v195;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v195 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v196;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v196 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v197;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v197 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v198;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v198 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__kstate_r__v199;
    __VdlyVal__tb__DOT__dut__DOT__kstate_r__v199 = 0;
    // Body
    __Vdly__tb__DOT__dut__DOT__byte_cnt_r = vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r;
    __Vdly__tb__DOT__dut__DOT__block_cnt_r = vlSelfRef.tb__DOT__dut__DOT__block_cnt_r;
    if (vlSelfRef.tb__DOT__rst_n) {
        if ((1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((IData)(vlSelfRef.tb__DOT__s_axis_tvalid) 
                 & (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))) {
                __Vdly__tb__DOT__dut__DOT__byte_cnt_r 
                    = (0xffU & ((0U < (IData)(vlSelfRef.tb__DOT__inlen_partial))
                                 ? (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                                       >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                                           - (IData)(1U))) 
                                      & ((0xffffU & 
                                          ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                           + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                         >= (IData)(vlSelfRef.tb__DOT__inlen_partial))) 
                                     | ((0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                                  + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                        >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate)))
                                     ? 0U : ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                             + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits)))
                                 : (((0xffU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                               + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits))) 
                                     >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))
                                     ? 0U : ((IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r) 
                                             + (IData)(vlSelfRef.tb__DOT__dut__DOT__valid_inbits)))));
            }
        } else if ((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
                 & (IData)(vlSelfRef.tb__DOT__m_axis_tready))) {
                __Vdly__tb__DOT__dut__DOT__byte_cnt_r 
                    = (0xffU & ((0U < (IData)(vlSelfRef.tb__DOT__outlen_partial))
                                 ? (((((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                                       >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                                           - (IData)(1U))) 
                                      & (((IData)(4U) 
                                          + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                         >= (IData)(vlSelfRef.tb__DOT__outlen_partial))) 
                                     | (((IData)(4U) 
                                         + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                        >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate)))
                                     ? 0U : ((IData)(4U) 
                                             + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))
                                 : ((((IData)(4U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)) 
                                     >= (IData)(vlSelfRef.tb__DOT__dut__DOT__sha3_rate))
                                     ? 0U : ((IData)(4U) 
                                             + (IData)(vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r)))));
            }
        } else {
            __Vdly__tb__DOT__dut__DOT__byte_cnt_r = 0U;
        }
        if ((4U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                    __Vdly__tb__DOT__dut__DOT__block_cnt_r 
                        = vlSelfRef.tb__DOT__dut__DOT__block_cnt_r;
                } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                            >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                                - (IData)(1U)))) {
                    __Vdly__tb__DOT__dut__DOT__block_cnt_r 
                        = (((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                            >= ((IData)(vlSelfRef.tb__DOT__outblocks) 
                                - (IData)(1U))) ? 0U
                            : (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r))));
                }
            } else {
                __Vdly__tb__DOT__dut__DOT__block_cnt_r 
                    = vlSelfRef.tb__DOT__dut__DOT__block_cnt_r;
            }
        } else if ((2U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) {
                __Vdly__tb__DOT__dut__DOT__block_cnt_r = 0U;
            } else if (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                        >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                            - (IData)(1U)))) {
                __Vdly__tb__DOT__dut__DOT__block_cnt_r 
                    = (((IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r) 
                        >= ((IData)(vlSelfRef.tb__DOT__inblocks) 
                            - (IData)(1U))) ? 0U : 
                       (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r))));
            }
        } else {
            __Vdly__tb__DOT__dut__DOT__block_cnt_r 
                = ((1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))
                    ? (IData)(vlSelfRef.tb__DOT__dut__DOT__block_cnt_r)
                    : 0U);
        }
        vlSelfRef.tb__DOT__dut__DOT__round_cnt_r = 
            ((((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)) 
               || (3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r))) 
              || (6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__state_r)))
              ? (((IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r) 
                  >= ((IData)(vlSelfRef.tb__DOT__dut__DOT__rounds) 
                      - (IData)(1U))) ? 0U : (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb__DOT__dut__DOT__round_cnt_r))))
              : 0U);
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v0 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v1 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [1U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v2 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [2U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v3 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [3U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v4 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [4U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v5 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [5U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v6 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [6U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v7 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [7U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v8 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [8U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v9 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [9U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v10 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xaU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v11 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v12 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xcU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v13 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xdU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v14 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xeU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v15 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xfU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v16 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x10U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v17 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x11U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v18 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x12U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v19 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x13U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v20 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x14U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v21 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x15U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v22 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x16U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v23 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x17U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v24 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x18U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v25 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x19U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v26 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v27 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v28 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v29 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v30 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v31 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x1fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v32 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x20U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v33 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x21U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v34 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x22U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v35 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x23U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v36 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x24U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v37 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x25U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v38 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x26U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v39 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x27U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v40 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x28U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v41 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x29U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v42 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v43 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v44 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v45 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v46 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v47 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x2fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v48 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x30U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v49 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x31U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v50 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x32U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v51 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x33U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v52 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x34U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v53 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x35U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v54 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x36U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v55 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x37U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v56 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x38U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v57 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x39U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v58 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v59 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v60 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v61 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v62 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v63 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x3fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v64 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x40U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v65 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x41U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v66 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x42U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v67 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x43U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v68 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x44U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v69 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x45U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v70 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x46U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v71 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x47U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v72 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x48U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v73 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x49U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v74 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v75 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v76 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v77 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v78 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v79 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x4fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v80 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x50U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v81 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x51U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v82 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x52U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v83 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x53U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v84 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x54U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v85 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x55U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v86 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x56U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v87 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x57U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v88 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x58U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v89 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x59U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v90 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v91 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v92 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v93 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v94 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v95 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x5fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v96 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x60U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v97 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x61U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v98 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x62U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v99 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x63U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v100 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x64U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v101 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x65U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v102 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x66U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v103 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x67U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v104 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x68U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v105 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x69U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v106 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v107 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v108 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v109 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v110 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v111 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x6fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v112 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x70U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v113 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x71U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v114 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x72U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v115 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x73U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v116 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x74U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v117 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x75U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v118 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x76U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v119 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x77U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v120 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x78U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v121 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x79U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v122 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v123 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v124 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v125 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v126 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v127 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x7fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v128 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x80U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v129 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x81U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v130 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x82U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v131 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x83U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v132 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x84U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v133 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x85U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v134 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x86U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v135 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x87U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v136 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x88U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v137 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x89U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v138 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v139 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v140 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v141 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v142 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v143 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x8fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v144 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x90U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v145 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x91U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v146 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x92U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v147 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x93U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v148 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x94U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v149 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x95U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v150 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x96U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v151 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x97U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v152 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x98U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v153 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x99U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v154 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9aU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v155 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9bU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v156 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9cU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v157 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9dU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v158 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9eU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v159 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0x9fU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v160 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa0U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v161 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa1U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v162 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa2U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v163 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa3U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v164 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa4U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v165 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa5U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v166 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa6U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v167 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa7U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v168 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa8U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v169 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xa9U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v170 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xaaU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v171 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xabU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v172 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xacU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v173 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xadU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v174 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xaeU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v175 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xafU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v176 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb0U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v177 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb1U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v178 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb2U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v179 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb3U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v180 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb4U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v181 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb5U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v182 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb6U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v183 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb7U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v184 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb8U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v185 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xb9U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v186 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbaU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v187 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbbU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v188 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbcU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v189 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbdU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v190 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbeU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v191 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xbfU];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v192 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc0U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v193 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc1U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v194 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc2U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v195 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc3U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v196 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc4U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v197 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc5U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v198 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc6U];
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v199 
            = vlSelfRef.tb__DOT__dut__DOT__kstate_n
            [0xc7U];
        vlSelfRef.tb__DOT__dut__DOT__state_r = vlSelfRef.tb__DOT__dut__DOT__state_n;
    } else {
        __Vdly__tb__DOT__dut__DOT__byte_cnt_r = 0U;
        __Vdly__tb__DOT__dut__DOT__block_cnt_r = 0U;
        vlSelfRef.tb__DOT__dut__DOT__round_cnt_r = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v0 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v1 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v2 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v3 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v4 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v5 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v6 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v7 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v8 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v9 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v10 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v11 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v12 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v13 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v14 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v15 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v16 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v17 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v18 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v19 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v20 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v21 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v22 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v23 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v24 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v25 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v26 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v27 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v28 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v29 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v30 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v31 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v32 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v33 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v34 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v35 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v36 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v37 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v38 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v39 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v40 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v41 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v42 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v43 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v44 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v45 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v46 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v47 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v48 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v49 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v50 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v51 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v52 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v53 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v54 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v55 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v56 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v57 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v58 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v59 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v60 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v61 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v62 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v63 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v64 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v65 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v66 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v67 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v68 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v69 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v70 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v71 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v72 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v73 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v74 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v75 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v76 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v77 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v78 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v79 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v80 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v81 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v82 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v83 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v84 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v85 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v86 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v87 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v88 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v89 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v90 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v91 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v92 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v93 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v94 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v95 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v96 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v97 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v98 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v99 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v100 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v101 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v102 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v103 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v104 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v105 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v106 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v107 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v108 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v109 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v110 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v111 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v112 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v113 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v114 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v115 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v116 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v117 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v118 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v119 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v120 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v121 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v122 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v123 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v124 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v125 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v126 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v127 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v128 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v129 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v130 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v131 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v132 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v133 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v134 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v135 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v136 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v137 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v138 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v139 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v140 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v141 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v142 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v143 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v144 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v145 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v146 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v147 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v148 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v149 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v150 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v151 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v152 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v153 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v154 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v155 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v156 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v157 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v158 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v159 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v160 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v161 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v162 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v163 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v164 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v165 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v166 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v167 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v168 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v169 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v170 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v171 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v172 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v173 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v174 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v175 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v176 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v177 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v178 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v179 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v180 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v181 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v182 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v183 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v184 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v185 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v186 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v187 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v188 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v189 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v190 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v191 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v192 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v193 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v194 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v195 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v196 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v197 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v198 = 0U;
        __VdlyVal__tb__DOT__dut__DOT__kstate_r__v199 = 0U;
        vlSelfRef.tb__DOT__dut__DOT__state_r = 0U;
    }
    vlSelfRef.tb__DOT__dut__DOT__byte_cnt_r = __Vdly__tb__DOT__dut__DOT__byte_cnt_r;
    vlSelfRef.tb__DOT__dut__DOT__block_cnt_r = __Vdly__tb__DOT__dut__DOT__block_cnt_r;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v0;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[1U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v1;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[2U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v2;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[3U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v3;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[4U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v4;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[5U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v5;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[6U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v6;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[7U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v7;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[8U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v8;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[9U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v9;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xaU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v10;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v11;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xcU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v12;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xdU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v13;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xeU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v14;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xfU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v15;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x10U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v16;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x11U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v17;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x12U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v18;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x13U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v19;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x14U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v20;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x15U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v21;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x16U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v22;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x17U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v23;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x18U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v24;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x19U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v25;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v26;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v27;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v28;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v29;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v30;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x1fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v31;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x20U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v32;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x21U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v33;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x22U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v34;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x23U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v35;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x24U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v36;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x25U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v37;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x26U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v38;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x27U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v39;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x28U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v40;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x29U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v41;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v42;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v43;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v44;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v45;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v46;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x2fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v47;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x30U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v48;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x31U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v49;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x32U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v50;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x33U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v51;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x34U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v52;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x35U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v53;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x36U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v54;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x37U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v55;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x38U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v56;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x39U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v57;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v58;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v59;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v60;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v61;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v62;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x3fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v63;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x40U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v64;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x41U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v65;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x42U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v66;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x43U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v67;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x44U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v68;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x45U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v69;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x46U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v70;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x47U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v71;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x48U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v72;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x49U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v73;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v74;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v75;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v76;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v77;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v78;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x4fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v79;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x50U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v80;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x51U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v81;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x52U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v82;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x53U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v83;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x54U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v84;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x55U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v85;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x56U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v86;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x57U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v87;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x58U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v88;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x59U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v89;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v90;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v91;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v92;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v93;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v94;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x5fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v95;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x60U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v96;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x61U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v97;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x62U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v98;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x63U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v99;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x64U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v100;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x65U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v101;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x66U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v102;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x67U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v103;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x68U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v104;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x69U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v105;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v106;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v107;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v108;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v109;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v110;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x6fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v111;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x70U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v112;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x71U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v113;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x72U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v114;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x73U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v115;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x74U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v116;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x75U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v117;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x76U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v118;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x77U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v119;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x78U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v120;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x79U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v121;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v122;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v123;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v124;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v125;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v126;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x7fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v127;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x80U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v128;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x81U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v129;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x82U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v130;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x83U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v131;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x84U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v132;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x85U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v133;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x86U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v134;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x87U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v135;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x88U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v136;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x89U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v137;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v138;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v139;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v140;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v141;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v142;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x8fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v143;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x90U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v144;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x91U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v145;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x92U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v146;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x93U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v147;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x94U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v148;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x95U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v149;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x96U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v150;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x97U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v151;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x98U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v152;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x99U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v153;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9aU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v154;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9bU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v155;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9cU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v156;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9dU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v157;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9eU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v158;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0x9fU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v159;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa0U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v160;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa1U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v161;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa2U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v162;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa3U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v163;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa4U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v164;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa5U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v165;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa6U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v166;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa7U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v167;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa8U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v168;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xa9U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v169;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xaaU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v170;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xabU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v171;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xacU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v172;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xadU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v173;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xaeU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v174;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xafU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v175;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb0U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v176;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb1U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v177;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb2U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v178;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb3U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v179;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb4U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v180;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb5U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v181;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb6U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v182;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb7U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v183;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb8U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v184;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xb9U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v185;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbaU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v186;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbbU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v187;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbcU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v188;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbdU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v189;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbeU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v190;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xbfU] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v191;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc0U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v192;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc1U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v193;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc2U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v194;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc3U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v195;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc4U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v196;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc5U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v197;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc6U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v198;
    vlSelfRef.tb__DOT__dut__DOT__kstate_r[0xc7U] = __VdlyVal__tb__DOT__dut__DOT__kstate_r__v199;
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [1U])) << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [2U])) << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [3U])) << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [4U])) << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [5U])) << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [6U])) << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [7U])) << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x28U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x29U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x2fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x50U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x51U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x52U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x53U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x54U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x55U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x56U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x57U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x78U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x79U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x7fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xa0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[0U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [0U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [9U])) << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaU])) << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbU])) << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xcU])) << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xdU])) << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xeU])) << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xfU])) << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x30U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x31U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x32U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x33U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x34U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x35U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x36U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x37U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x58U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x59U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x5fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x80U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x81U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x82U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x83U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x84U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x85U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x86U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x87U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xa8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xa9U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaaU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xabU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xacU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xadU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xaeU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[1U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [1U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xafU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x10U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x11U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x12U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x13U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x14U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x15U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x16U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x17U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x38U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x39U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x3fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x60U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x61U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x62U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x63U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x64U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x65U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x66U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x67U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x88U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x89U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x8fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xb0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[2U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [2U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x18U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x19U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x1fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x40U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x41U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x42U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x43U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x44U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x45U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x46U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x47U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x68U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x69U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x6fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x90U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x91U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x92U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x93U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x94U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x95U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x96U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x97U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xb8U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xb9U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbaU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbbU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbcU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbdU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbeU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[3U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [3U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xbfU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x20U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x21U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x22U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x23U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x24U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x25U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x26U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][0U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][0U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x27U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x48U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x49U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][1U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][1U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x4fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x70U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x71U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x72U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x73U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x74U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x75U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x76U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][2U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][2U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x77U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0x98U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x99U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9aU])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9bU])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9cU])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9dU])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9eU])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][3U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][3U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0x9fU])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffffff00ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | (IData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                        [0xc0U])));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffff00ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc1U])) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffff00ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc2U])) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffff00ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc3U])) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffff00ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc4U])) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffff00ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc5U])) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xff00ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc6U])) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s[4U][4U] 
        = ((0xffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
            [4U][4U]) | ((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__kstate_r
                                         [0xc7U])) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [0U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][0U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][0U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [0U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [1U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][1U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][1U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [1U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [0U]
                                                        [2U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [1U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[0U][2U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [0U]
                                                          [2U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [4U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [4U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [4U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [4U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [1U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [1U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [1U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [1U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
}
