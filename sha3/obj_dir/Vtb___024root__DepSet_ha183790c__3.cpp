// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__7____Vfork_1__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__7____Vfork_1__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*7:0*/> __Vtask_tb__DOT__drive_input__34__msg;
    __Vtask_tb__DOT__drive_input__34__msg.atDefault() = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__34__stall_percent;
    __Vtask_tb__DOT__drive_input__34__stall_percent = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now;
    __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i;
    __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__drive_input__34__idx;
    __Vtask_tb__DOT__drive_input__34__idx = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__35__Vfuncout;
    __Vfunc_tb__DOT__keep_from_count__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__keep_from_count__35__byte_count;
    __Vfunc_tb__DOT__keep_from_count__35__byte_count = 0;
    CData/*3:0*/ __Vfunc_tb__DOT__keep_from_count__35__keep;
    __Vfunc_tb__DOT__keep_from_count__35__keep = 0;
    // Body
    __Vtask_tb__DOT__drive_input__34__stall_percent 
        = vlSelfRef.__Vtask_tb__DOT__run_one_test__1__input_stall_percent;
    __Vtask_tb__DOT__drive_input__34__msg = vlSelfRef.__Vtask_tb__DOT__run_one_test__1__msg;
    {
        __Vtask_tb__DOT__drive_input__34__idx = 0U;
        if ((0U == __Vtask_tb__DOT__drive_input__34__msg.size())) {
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
            goto __Vlabel280;
        }
        while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__34__idx, __Vtask_tb__DOT__drive_input__34__msg.size())) {
            {
                __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now 
                    = (VL_GTS_III(32, 4U, (__Vtask_tb__DOT__drive_input__34__msg.size() 
                                           - __Vtask_tb__DOT__drive_input__34__idx))
                        ? (__Vtask_tb__DOT__drive_input__34__msg.size() 
                           - __Vtask_tb__DOT__drive_input__34__idx)
                        : 4U);
                if ((VL_URANDOM_RANGE_I(0U, 0x63U) 
                     < __Vtask_tb__DOT__drive_input__34__stall_percent)) {
                    vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                    vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                    vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                    vlSelfRef.tb__DOT__saw_input_stall = 1U;
                    co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb.clk)", 
                                                                         "sim/tb.sv", 
                                                                         414);
                    goto __Vlabel281;
                }
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i, __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now)) {
                    vlSelfRef.tb__DOT__s_axis_tdata 
                        = (((~ ((IData)(0xffU) << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i)))) 
                            & vlSelfRef.tb__DOT__s_axis_tdata) 
                           | (0xffffffffULL & (__Vtask_tb__DOT__drive_input__34__msg.at(
                                                                                (__Vtask_tb__DOT__drive_input__34__idx 
                                                                                + __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i)) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i)))));
                    __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i 
                        = ((IData)(1U) + __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__unnamedblk24__DOT__i);
                }
                __Vfunc_tb__DOT__keep_from_count__35__byte_count 
                    = __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now;
                __Vfunc_tb__DOT__keep_from_count__35__keep = 0U;
                __Vfunc_tb__DOT__keep_from_count__35__keep 
                    = ((8U & (IData)(__Vfunc_tb__DOT__keep_from_count__35__keep)) 
                       | ((VL_LTS_III(32, 2U, __Vfunc_tb__DOT__keep_from_count__35__byte_count) 
                           << 2U) | ((VL_LTS_III(32, 1U, __Vfunc_tb__DOT__keep_from_count__35__byte_count) 
                                      << 1U) | VL_LTS_III(32, 0U, __Vfunc_tb__DOT__keep_from_count__35__byte_count))));
                __Vfunc_tb__DOT__keep_from_count__35__keep 
                    = ((7U & (IData)(__Vfunc_tb__DOT__keep_from_count__35__keep)) 
                       | (VL_LTS_III(32, 3U, __Vfunc_tb__DOT__keep_from_count__35__byte_count) 
                          << 3U));
                __Vfunc_tb__DOT__keep_from_count__35__Vfuncout 
                    = __Vfunc_tb__DOT__keep_from_count__35__keep;
                vlSelfRef.tb__DOT__s_axis_tkeep = __Vfunc_tb__DOT__keep_from_count__35__Vfuncout;
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
                __Vtask_tb__DOT__drive_input__34__idx 
                    = (__Vtask_tb__DOT__drive_input__34__idx 
                       + __Vtask_tb__DOT__drive_input__34__unnamedblk23__DOT__bytes_now);
                vlSelfRef.tb__DOT__s_axis_tvalid = 0U;
                vlSelfRef.tb__DOT__s_axis_tkeep = 0U;
                vlSelfRef.tb__DOT__s_axis_tdata = 0U;
                co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb.clk)", 
                                                                     "sim/tb.sv", 
                                                                     432);
                __Vlabel281: ;
            }
        }
        __Vlabel280: ;
    }
    vlSelfRef.__Vfork_1__sync.done("sim/tb.sv", 552);
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__8(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__8\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i;
    __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__45__rounds_i;
    __Vtask_tb__DOT__keccak_p1600__45__rounds_i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__45__round_offset_i;
    __Vtask_tb__DOT__keccak_p1600__45__round_offset_i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__45__a;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__45__a[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__45__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__45__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__45__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__45__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__45__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__45__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__46__Vfuncout;
    __Vfunc_tb__DOT__load_lane__46__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 200> __Vfunc_tb__DOT__load_lane__46__state;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        __Vfunc_tb__DOT__load_lane__46__state[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb__DOT__load_lane__46__x;
    __Vfunc_tb__DOT__load_lane__46__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__load_lane__46__y;
    __Vfunc_tb__DOT__load_lane__46__y = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__46__lane;
    __Vfunc_tb__DOT__load_lane__46__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__47__Vfuncout;
    __Vfunc_tb__DOT__rol64__47__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__47__value;
    __Vfunc_tb__DOT__rol64__47__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__47__sh;
    __Vfunc_tb__DOT__rol64__47__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__48__Vfuncout;
    __Vfunc_tb__DOT__rol64__48__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__48__value;
    __Vfunc_tb__DOT__rol64__48__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__48__sh;
    __Vfunc_tb__DOT__rol64__48__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__49__x;
    __Vfunc_tb__DOT__rho_offset__49__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__49__y;
    __Vfunc_tb__DOT__rho_offset__49__y = 0;
    QData/*63:0*/ __Vfunc_rc__50__Vfuncout;
    __Vfunc_rc__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__50__round;
    __Vfunc_rc__50__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__store_lane__51__x;
    __Vtask_tb__DOT__store_lane__51__x = 0;
    IData/*31:0*/ __Vtask_tb__DOT__store_lane__51__y;
    __Vtask_tb__DOT__store_lane__51__y = 0;
    QData/*63:0*/ __Vtask_tb__DOT__store_lane__51__lane;
    __Vtask_tb__DOT__store_lane__51__lane = 0;
    QData/*63:0*/ __Vtemp_2;
    // Body
    while (VL_LTES_III(32, (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx 
                            + vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate), vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size())) {
        __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i, vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate)) {
            vlSelfRef.tb__DOT____Vlvbound_h570ad72a__0 
                = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i))
                     ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                    [(0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i)]
                     : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i)));
            if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i))))) {
                vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                        & __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i)] 
                    = vlSelfRef.tb__DOT____Vlvbound_h570ad72a__0;
            }
            __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i 
                = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__41__unnamedblk18__DOT__i);
        }
        __Vtask_tb__DOT__keccak_p1600__45__round_offset_i 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__round_offset_i;
        __Vtask_tb__DOT__keccak_p1600__45__rounds_i 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rounds_i;
        __Vfunc_tb__DOT__load_lane__46__y = 0U;
        __Vfunc_tb__DOT__load_lane__46__x = 0U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp1] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 1U;
        __Vfunc_tb__DOT__load_lane__46__x = 0U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp2] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 2U;
        __Vfunc_tb__DOT__load_lane__46__x = 0U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp3] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 3U;
        __Vfunc_tb__DOT__load_lane__46__x = 0U;
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp4] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp4];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 4U;
        __Vfunc_tb__DOT__load_lane__46__x = 0U;
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp5] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp5];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 0U;
        __Vfunc_tb__DOT__load_lane__46__x = 1U;
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp6] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp6];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 1U;
        __Vfunc_tb__DOT__load_lane__46__x = 1U;
        IData/*31:0*/ __Vilp7;
        __Vilp7 = 0U;
        while ((__Vilp7 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp7] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp7];
            __Vilp7 = ((IData)(1U) + __Vilp7);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 2U;
        __Vfunc_tb__DOT__load_lane__46__x = 1U;
        IData/*31:0*/ __Vilp8;
        __Vilp8 = 0U;
        while ((__Vilp8 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp8] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp8];
            __Vilp8 = ((IData)(1U) + __Vilp8);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 3U;
        __Vfunc_tb__DOT__load_lane__46__x = 1U;
        IData/*31:0*/ __Vilp9;
        __Vilp9 = 0U;
        while ((__Vilp9 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp9] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp9];
            __Vilp9 = ((IData)(1U) + __Vilp9);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 4U;
        __Vfunc_tb__DOT__load_lane__46__x = 1U;
        IData/*31:0*/ __Vilp10;
        __Vilp10 = 0U;
        while ((__Vilp10 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp10] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp10];
            __Vilp10 = ((IData)(1U) + __Vilp10);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 0U;
        __Vfunc_tb__DOT__load_lane__46__x = 2U;
        IData/*31:0*/ __Vilp11;
        __Vilp11 = 0U;
        while ((__Vilp11 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp11] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp11];
            __Vilp11 = ((IData)(1U) + __Vilp11);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 1U;
        __Vfunc_tb__DOT__load_lane__46__x = 2U;
        IData/*31:0*/ __Vilp12;
        __Vilp12 = 0U;
        while ((__Vilp12 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp12] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp12];
            __Vilp12 = ((IData)(1U) + __Vilp12);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 2U;
        __Vfunc_tb__DOT__load_lane__46__x = 2U;
        IData/*31:0*/ __Vilp13;
        __Vilp13 = 0U;
        while ((__Vilp13 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp13] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp13];
            __Vilp13 = ((IData)(1U) + __Vilp13);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 3U;
        __Vfunc_tb__DOT__load_lane__46__x = 2U;
        IData/*31:0*/ __Vilp14;
        __Vilp14 = 0U;
        while ((__Vilp14 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp14] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp14];
            __Vilp14 = ((IData)(1U) + __Vilp14);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 4U;
        __Vfunc_tb__DOT__load_lane__46__x = 2U;
        IData/*31:0*/ __Vilp15;
        __Vilp15 = 0U;
        while ((__Vilp15 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp15] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp15];
            __Vilp15 = ((IData)(1U) + __Vilp15);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 0U;
        __Vfunc_tb__DOT__load_lane__46__x = 3U;
        IData/*31:0*/ __Vilp16;
        __Vilp16 = 0U;
        while ((__Vilp16 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp16] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp16];
            __Vilp16 = ((IData)(1U) + __Vilp16);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 1U;
        __Vfunc_tb__DOT__load_lane__46__x = 3U;
        IData/*31:0*/ __Vilp17;
        __Vilp17 = 0U;
        while ((__Vilp17 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp17] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp17];
            __Vilp17 = ((IData)(1U) + __Vilp17);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 2U;
        __Vfunc_tb__DOT__load_lane__46__x = 3U;
        IData/*31:0*/ __Vilp18;
        __Vilp18 = 0U;
        while ((__Vilp18 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp18] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp18];
            __Vilp18 = ((IData)(1U) + __Vilp18);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 3U;
        __Vfunc_tb__DOT__load_lane__46__x = 3U;
        IData/*31:0*/ __Vilp19;
        __Vilp19 = 0U;
        while ((__Vilp19 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp19] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp19];
            __Vilp19 = ((IData)(1U) + __Vilp19);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 4U;
        __Vfunc_tb__DOT__load_lane__46__x = 3U;
        IData/*31:0*/ __Vilp20;
        __Vilp20 = 0U;
        while ((__Vilp20 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp20] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp20];
            __Vilp20 = ((IData)(1U) + __Vilp20);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 0U;
        __Vfunc_tb__DOT__load_lane__46__x = 4U;
        IData/*31:0*/ __Vilp21;
        __Vilp21 = 0U;
        while ((__Vilp21 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp21] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp21];
            __Vilp21 = ((IData)(1U) + __Vilp21);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 1U;
        __Vfunc_tb__DOT__load_lane__46__x = 4U;
        IData/*31:0*/ __Vilp22;
        __Vilp22 = 0U;
        while ((__Vilp22 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp22] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp22];
            __Vilp22 = ((IData)(1U) + __Vilp22);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 2U;
        __Vfunc_tb__DOT__load_lane__46__x = 4U;
        IData/*31:0*/ __Vilp23;
        __Vilp23 = 0U;
        while ((__Vilp23 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp23] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp23];
            __Vilp23 = ((IData)(1U) + __Vilp23);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 3U;
        __Vfunc_tb__DOT__load_lane__46__x = 4U;
        IData/*31:0*/ __Vilp24;
        __Vilp24 = 0U;
        while ((__Vilp24 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp24] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp24];
            __Vilp24 = ((IData)(1U) + __Vilp24);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__46__y = 4U;
        __Vfunc_tb__DOT__load_lane__46__x = 4U;
        IData/*31:0*/ __Vilp25;
        __Vilp25 = 0U;
        while ((__Vilp25 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__46__state[__Vilp25] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [__Vilp25];
            __Vilp25 = ((IData)(1U) + __Vilp25);
        }
        __Vfunc_tb__DOT__load_lane__46__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffff00ULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | (IData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__46__state
                                                                   [
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))]
                                                                    : 0U))));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffff00ffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 8U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffff00ffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x10U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffff00ffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(3U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x18U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffff00ffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(4U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x20U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffff00ffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(5U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x28U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xff00ffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(6U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x30U));
        __Vfunc_tb__DOT__load_lane__46__lane = ((0xffffffffffffffULL 
                                                 & __Vfunc_tb__DOT__load_lane__46__lane) 
                                                | ((QData)((IData)(
                                                                   ((0xc7U 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(7U) 
                                                                         + 
                                                                         (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y)))))
                                                                     ? 
                                                                    __Vfunc_tb__DOT__load_lane__46__state
                                                                    [
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__46__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__46__y))))]
                                                                     : 0U))) 
                                                   << 0x38U));
        __Vfunc_tb__DOT__load_lane__46__Vfuncout = __Vfunc_tb__DOT__load_lane__46__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__46__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__45__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round = 0U;
        while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round, __Vtask_tb__DOT__keccak_p1600__45__rounds_i)) {
            __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
                = (__Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round 
                   + __Vtask_tb__DOT__keccak_p1600__45__round_offset_i);
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__45__a
                      [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__a
                      [0U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                     [0U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                    [0U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][4U]);
            __Vtask_tb__DOT__keccak_p1600__45__c[0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__45__a
                      [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__a
                      [1U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                     [1U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                    [1U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][4U]);
            __Vtask_tb__DOT__keccak_p1600__45__c[1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__45__a
                      [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__a
                      [2U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                     [2U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                    [2U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][4U]);
            __Vtask_tb__DOT__keccak_p1600__45__c[2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__45__a
                      [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__a
                      [3U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                     [3U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                    [3U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][4U]);
            __Vtask_tb__DOT__keccak_p1600__45__c[3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__45__a
                      [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__a
                      [4U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                     [4U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                    [4U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][4U]);
            __Vtask_tb__DOT__keccak_p1600__45__c[4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__c
                   [4U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__47__sh = 1U;
                        __Vfunc_tb__DOT__rol64__47__value 
                            = __Vtask_tb__DOT__keccak_p1600__45__c
                            [1U];
                        __Vfunc_tb__DOT__rol64__47__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__47__sh)
                                ? __Vfunc_tb__DOT__rol64__47__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, __Vfunc_tb__DOT__rol64__47__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__47__sh))));
                    }(), __Vfunc_tb__DOT__rol64__47__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__d[0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__c
                   [0U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__47__sh = 1U;
                        __Vfunc_tb__DOT__rol64__47__value 
                            = __Vtask_tb__DOT__keccak_p1600__45__c
                            [2U];
                        __Vfunc_tb__DOT__rol64__47__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__47__sh)
                                ? __Vfunc_tb__DOT__rol64__47__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, __Vfunc_tb__DOT__rol64__47__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__47__sh))));
                    }(), __Vfunc_tb__DOT__rol64__47__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__d[1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__c
                   [1U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__47__sh = 1U;
                        __Vfunc_tb__DOT__rol64__47__value 
                            = __Vtask_tb__DOT__keccak_p1600__45__c
                            [3U];
                        __Vfunc_tb__DOT__rol64__47__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__47__sh)
                                ? __Vfunc_tb__DOT__rol64__47__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, __Vfunc_tb__DOT__rol64__47__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__47__sh))));
                    }(), __Vfunc_tb__DOT__rol64__47__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__d[2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__c
                   [2U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__47__sh = 1U;
                        __Vfunc_tb__DOT__rol64__47__value 
                            = __Vtask_tb__DOT__keccak_p1600__45__c
                            [4U];
                        __Vfunc_tb__DOT__rol64__47__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__47__sh)
                                ? __Vfunc_tb__DOT__rol64__47__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, __Vfunc_tb__DOT__rol64__47__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__47__sh))));
                    }(), __Vfunc_tb__DOT__rol64__47__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__d[3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__c
                   [3U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__47__sh = 1U;
                        __Vfunc_tb__DOT__rol64__47__value 
                            = __Vtask_tb__DOT__keccak_p1600__45__c
                            [0U];
                        __Vfunc_tb__DOT__rol64__47__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__47__sh)
                                ? __Vfunc_tb__DOT__rol64__47__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, __Vfunc_tb__DOT__rol64__47__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__47__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__47__sh))));
                    }(), __Vfunc_tb__DOT__rol64__47__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__d[4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__a
                   [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__45__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 0U;
            __Vfunc_tb__DOT__rho_offset__49__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel282;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel282;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel282;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel282;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel282;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel282;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel282;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel282;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel282;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel282;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel282;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel282;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel282;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel282;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel282;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel282;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel282;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel282;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel282;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel282;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel282;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel282;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel282;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel282;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel282;
                }
                __Vlabel282: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [0U][0U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 1U;
            __Vfunc_tb__DOT__rho_offset__49__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel283;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel283;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel283;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel283;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel283;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel283;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel283;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel283;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel283;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel283;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel283;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel283;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel283;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel283;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel283;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel283;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel283;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel283;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel283;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel283;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel283;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel283;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel283;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel283;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel283;
                }
                __Vlabel283: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [0U][1U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 2U;
            __Vfunc_tb__DOT__rho_offset__49__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel284;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel284;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel284;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel284;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel284;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel284;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel284;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel284;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel284;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel284;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel284;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel284;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel284;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel284;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel284;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel284;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel284;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel284;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel284;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel284;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel284;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel284;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel284;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel284;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel284;
                }
                __Vlabel284: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [0U][2U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 3U;
            __Vfunc_tb__DOT__rho_offset__49__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel285;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel285;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel285;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel285;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel285;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel285;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel285;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel285;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel285;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel285;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel285;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel285;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel285;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel285;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel285;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel285;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel285;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel285;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel285;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel285;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel285;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel285;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel285;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel285;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel285;
                }
                __Vlabel285: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [0U][3U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 4U;
            __Vfunc_tb__DOT__rho_offset__49__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel286;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel286;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel286;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel286;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel286;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel286;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel286;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel286;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel286;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel286;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel286;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel286;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel286;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel286;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel286;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel286;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel286;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel286;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel286;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel286;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel286;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel286;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel286;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel286;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel286;
                }
                __Vlabel286: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [0U][4U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 0U;
            __Vfunc_tb__DOT__rho_offset__49__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel287;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel287;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel287;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel287;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel287;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel287;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel287;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel287;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel287;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel287;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel287;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel287;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel287;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel287;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel287;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel287;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel287;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel287;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel287;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel287;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel287;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel287;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel287;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel287;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel287;
                }
                __Vlabel287: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [1U][0U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 1U;
            __Vfunc_tb__DOT__rho_offset__49__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel288;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel288;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel288;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel288;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel288;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel288;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel288;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel288;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel288;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel288;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel288;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel288;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel288;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel288;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel288;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel288;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel288;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel288;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel288;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel288;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel288;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel288;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel288;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel288;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel288;
                }
                __Vlabel288: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [1U][1U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 2U;
            __Vfunc_tb__DOT__rho_offset__49__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel289;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel289;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel289;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel289;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel289;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel289;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel289;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel289;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel289;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel289;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel289;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel289;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel289;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel289;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel289;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel289;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel289;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel289;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel289;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel289;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel289;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel289;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel289;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel289;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel289;
                }
                __Vlabel289: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [1U][2U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 3U;
            __Vfunc_tb__DOT__rho_offset__49__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel290;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel290;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel290;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel290;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel290;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel290;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel290;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel290;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel290;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel290;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel290;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel290;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel290;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel290;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel290;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel290;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel290;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel290;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel290;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel290;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel290;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel290;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel290;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel290;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel290;
                }
                __Vlabel290: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [1U][3U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 4U;
            __Vfunc_tb__DOT__rho_offset__49__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel291;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel291;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel291;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel291;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel291;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel291;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel291;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel291;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel291;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel291;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel291;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel291;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel291;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel291;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel291;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel291;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel291;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel291;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel291;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel291;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel291;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel291;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel291;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel291;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel291;
                }
                __Vlabel291: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [1U][4U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 0U;
            __Vfunc_tb__DOT__rho_offset__49__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel292;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel292;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel292;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel292;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel292;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel292;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel292;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel292;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel292;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel292;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel292;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel292;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel292;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel292;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel292;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel292;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel292;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel292;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel292;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel292;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel292;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel292;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel292;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel292;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel292;
                }
                __Vlabel292: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [2U][0U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 1U;
            __Vfunc_tb__DOT__rho_offset__49__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel293;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel293;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel293;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel293;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel293;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel293;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel293;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel293;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel293;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel293;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel293;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel293;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel293;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel293;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel293;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel293;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel293;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel293;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel293;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel293;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel293;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel293;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel293;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel293;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel293;
                }
                __Vlabel293: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [2U][1U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 2U;
            __Vfunc_tb__DOT__rho_offset__49__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel294;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel294;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel294;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel294;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel294;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel294;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel294;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel294;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel294;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel294;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel294;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel294;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel294;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel294;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel294;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel294;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel294;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel294;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel294;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel294;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel294;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel294;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel294;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel294;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel294;
                }
                __Vlabel294: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [2U][2U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 3U;
            __Vfunc_tb__DOT__rho_offset__49__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel295;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel295;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel295;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel295;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel295;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel295;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel295;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel295;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel295;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel295;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel295;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel295;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel295;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel295;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel295;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel295;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel295;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel295;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel295;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel295;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel295;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel295;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel295;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel295;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel295;
                }
                __Vlabel295: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [2U][3U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 4U;
            __Vfunc_tb__DOT__rho_offset__49__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel296;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel296;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel296;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel296;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel296;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel296;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel296;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel296;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel296;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel296;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel296;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel296;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel296;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel296;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel296;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel296;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel296;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel296;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel296;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel296;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel296;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel296;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel296;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel296;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel296;
                }
                __Vlabel296: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [2U][4U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 0U;
            __Vfunc_tb__DOT__rho_offset__49__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel297;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel297;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel297;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel297;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel297;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel297;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel297;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel297;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel297;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel297;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel297;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel297;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel297;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel297;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel297;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel297;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel297;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel297;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel297;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel297;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel297;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel297;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel297;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel297;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel297;
                }
                __Vlabel297: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [3U][0U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 1U;
            __Vfunc_tb__DOT__rho_offset__49__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel298;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel298;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel298;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel298;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel298;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel298;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel298;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel298;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel298;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel298;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel298;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel298;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel298;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel298;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel298;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel298;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel298;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel298;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel298;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel298;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel298;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel298;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel298;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel298;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel298;
                }
                __Vlabel298: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [3U][1U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 2U;
            __Vfunc_tb__DOT__rho_offset__49__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel299;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel299;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel299;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel299;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel299;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel299;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel299;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel299;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel299;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel299;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel299;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel299;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel299;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel299;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel299;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel299;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel299;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel299;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel299;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel299;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel299;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel299;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel299;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel299;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel299;
                }
                __Vlabel299: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [3U][2U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 3U;
            __Vfunc_tb__DOT__rho_offset__49__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel300;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel300;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel300;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel300;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel300;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel300;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel300;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel300;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel300;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel300;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel300;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel300;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel300;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel300;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel300;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel300;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel300;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel300;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel300;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel300;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel300;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel300;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel300;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel300;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel300;
                }
                __Vlabel300: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [3U][3U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 4U;
            __Vfunc_tb__DOT__rho_offset__49__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel301;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel301;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel301;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel301;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel301;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel301;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel301;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel301;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel301;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel301;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel301;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel301;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel301;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel301;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel301;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel301;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel301;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel301;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel301;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel301;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel301;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel301;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel301;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel301;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel301;
                }
                __Vlabel301: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [3U][4U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 0U;
            __Vfunc_tb__DOT__rho_offset__49__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel302;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel302;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel302;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel302;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel302;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel302;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel302;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel302;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel302;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel302;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel302;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel302;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel302;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel302;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel302;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel302;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel302;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel302;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel302;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel302;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel302;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel302;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel302;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel302;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel302;
                }
                __Vlabel302: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [4U][0U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 1U;
            __Vfunc_tb__DOT__rho_offset__49__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel303;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel303;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel303;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel303;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel303;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel303;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel303;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel303;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel303;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel303;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel303;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel303;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel303;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel303;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel303;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel303;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel303;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel303;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel303;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel303;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel303;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel303;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel303;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel303;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel303;
                }
                __Vlabel303: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [4U][1U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 2U;
            __Vfunc_tb__DOT__rho_offset__49__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel304;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel304;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel304;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel304;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel304;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel304;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel304;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel304;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel304;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel304;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel304;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel304;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel304;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel304;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel304;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel304;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel304;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel304;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel304;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel304;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel304;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel304;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel304;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel304;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel304;
                }
                __Vlabel304: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [4U][2U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 3U;
            __Vfunc_tb__DOT__rho_offset__49__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel305;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel305;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel305;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel305;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel305;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel305;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel305;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel305;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel305;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel305;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel305;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel305;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel305;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel305;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel305;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel305;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel305;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel305;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel305;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel305;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel305;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel305;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel305;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel305;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel305;
                }
                __Vlabel305: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [4U][3U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__49__y = 4U;
            __Vfunc_tb__DOT__rho_offset__49__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0U;
                        goto __Vlabel306;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x24U;
                        goto __Vlabel306;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 3U;
                        goto __Vlabel306;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x29U;
                        goto __Vlabel306;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x12U;
                        goto __Vlabel306;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 1U;
                        goto __Vlabel306;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2cU;
                        goto __Vlabel306;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xaU;
                        goto __Vlabel306;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2dU;
                        goto __Vlabel306;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 2U;
                        goto __Vlabel306;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3eU;
                        goto __Vlabel306;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 6U;
                        goto __Vlabel306;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x2bU;
                        goto __Vlabel306;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xfU;
                        goto __Vlabel306;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x3dU;
                        goto __Vlabel306;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1cU;
                        goto __Vlabel306;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x37U;
                        goto __Vlabel306;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x19U;
                        goto __Vlabel306;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x15U;
                        goto __Vlabel306;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x38U;
                        goto __Vlabel306;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x1bU;
                    goto __Vlabel306;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x14U;
                    goto __Vlabel306;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0x27U;
                    goto __Vlabel306;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__49__y)) {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 8U;
                    goto __Vlabel306;
                } else {
                    __Vfunc_tb__DOT__rho_offset__49__Vfuncout = 0xeU;
                    goto __Vlabel306;
                }
                __Vlabel306: ;
            }
            __Vfunc_tb__DOT__rol64__48__sh = __Vfunc_tb__DOT__rho_offset__49__Vfuncout;
            __Vfunc_tb__DOT__rol64__48__value = __Vtask_tb__DOT__keccak_p1600__45__a
                [4U][4U];
            __Vfunc_tb__DOT__rol64__48__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__48__sh)
                  ? __Vfunc_tb__DOT__rol64__48__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, __Vfunc_tb__DOT__rol64__48__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__48__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__48__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__48__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__45__b[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [2U][0U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [2U][1U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [2U][2U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [2U][3U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [2U][4U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [3U][0U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [3U][1U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [3U][2U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [3U][3U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [3U][4U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [4U][0U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [4U][1U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [4U][2U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [4U][3U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [4U][4U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [0U][0U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [0U][1U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [0U][2U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [0U][3U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [0U][4U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [1U][0U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [1U][1U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [1U][2U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [1U][3U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__45__b
                   [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__45__b
                                [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__45__b
                               [1U][4U]));
            __Vtask_tb__DOT__keccak_p1600__45__a[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            __Vtemp_2 = (__Vtask_tb__DOT__keccak_p1600__45__a
                         [0U][0U] ^ ([&]() {
                        __Vfunc_rc__50__round = __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                        {
                            if (((((((((0U == __Vfunc_rc__50__round) 
                                       | (1U == __Vfunc_rc__50__round)) 
                                      | (2U == __Vfunc_rc__50__round)) 
                                     | (3U == __Vfunc_rc__50__round)) 
                                    | (4U == __Vfunc_rc__50__round)) 
                                   | (5U == __Vfunc_rc__50__round)) 
                                  | (6U == __Vfunc_rc__50__round)) 
                                 | (7U == __Vfunc_rc__50__round))) {
                                if ((0U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 1ULL;
                                    goto __Vlabel307;
                                } else if ((1U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8082ULL;
                                    goto __Vlabel307;
                                } else if ((2U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x800000000000808aULL;
                                    goto __Vlabel307;
                                } else if ((3U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000080008000ULL;
                                    goto __Vlabel307;
                                } else if ((4U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x808bULL;
                                    goto __Vlabel307;
                                } else if ((5U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x80000001ULL;
                                    goto __Vlabel307;
                                } else if ((6U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000080008081ULL;
                                    goto __Vlabel307;
                                } else {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000008009ULL;
                                    goto __Vlabel307;
                                }
                            } else if (((((((((8U == __Vfunc_rc__50__round) 
                                              | (9U 
                                                 == __Vfunc_rc__50__round)) 
                                             | (0xaU 
                                                == __Vfunc_rc__50__round)) 
                                            | (0xbU 
                                               == __Vfunc_rc__50__round)) 
                                           | (0xcU 
                                              == __Vfunc_rc__50__round)) 
                                          | (0xdU == __Vfunc_rc__50__round)) 
                                         | (0xeU == __Vfunc_rc__50__round)) 
                                        | (0xfU == __Vfunc_rc__50__round))) {
                                if ((8U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8aULL;
                                    goto __Vlabel307;
                                } else if ((9U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x88ULL;
                                    goto __Vlabel307;
                                } else if ((0xaU == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x80008009ULL;
                                    goto __Vlabel307;
                                } else if ((0xbU == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000aULL;
                                    goto __Vlabel307;
                                } else if ((0xcU == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000808bULL;
                                    goto __Vlabel307;
                                } else if ((0xdU == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x800000000000008bULL;
                                    goto __Vlabel307;
                                } else if ((0xeU == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000008089ULL;
                                    goto __Vlabel307;
                                } else {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000008003ULL;
                                    goto __Vlabel307;
                                }
                            } else if (((((((((0x10U 
                                               == __Vfunc_rc__50__round) 
                                              | (0x11U 
                                                 == __Vfunc_rc__50__round)) 
                                             | (0x12U 
                                                == __Vfunc_rc__50__round)) 
                                            | (0x13U 
                                               == __Vfunc_rc__50__round)) 
                                           | (0x14U 
                                              == __Vfunc_rc__50__round)) 
                                          | (0x15U 
                                             == __Vfunc_rc__50__round)) 
                                         | (0x16U == __Vfunc_rc__50__round)) 
                                        | (0x17U == __Vfunc_rc__50__round))) {
                                if ((0x10U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000008002ULL;
                                    goto __Vlabel307;
                                } else if ((0x11U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000000080ULL;
                                    goto __Vlabel307;
                                } else if ((0x12U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x800aULL;
                                    goto __Vlabel307;
                                } else if ((0x13U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x800000008000000aULL;
                                    goto __Vlabel307;
                                } else if ((0x14U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000080008081ULL;
                                    goto __Vlabel307;
                                } else if ((0x15U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000000008080ULL;
                                    goto __Vlabel307;
                                } else if ((0x16U == __Vfunc_rc__50__round)) {
                                    __Vfunc_rc__50__Vfuncout = 0x80000001ULL;
                                    goto __Vlabel307;
                                } else {
                                    __Vfunc_rc__50__Vfuncout = 0x8000000080008008ULL;
                                    goto __Vlabel307;
                                }
                            } else {
                                __Vfunc_rc__50__Vfuncout = 0ULL;
                                goto __Vlabel307;
                            }
                            __Vlabel307: ;
                        }
                    }(), __Vfunc_rc__50__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__45__a[0U][0U] 
                = __Vtemp_2;
            __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round 
                = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__45__unnamedblk5__DOT__round);
        }
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [0U][0U];
        __Vtask_tb__DOT__store_lane__51__y = 0U;
        __Vtask_tb__DOT__store_lane__51__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [0U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 1U;
        __Vtask_tb__DOT__store_lane__51__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [0U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 2U;
        __Vtask_tb__DOT__store_lane__51__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [0U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 3U;
        __Vtask_tb__DOT__store_lane__51__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [0U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 4U;
        __Vtask_tb__DOT__store_lane__51__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [1U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 0U;
        __Vtask_tb__DOT__store_lane__51__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [1U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 1U;
        __Vtask_tb__DOT__store_lane__51__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [1U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 2U;
        __Vtask_tb__DOT__store_lane__51__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [1U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 3U;
        __Vtask_tb__DOT__store_lane__51__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [1U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 4U;
        __Vtask_tb__DOT__store_lane__51__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [2U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 0U;
        __Vtask_tb__DOT__store_lane__51__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [2U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 1U;
        __Vtask_tb__DOT__store_lane__51__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [2U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 2U;
        __Vtask_tb__DOT__store_lane__51__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [2U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 3U;
        __Vtask_tb__DOT__store_lane__51__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [2U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 4U;
        __Vtask_tb__DOT__store_lane__51__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [3U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 0U;
        __Vtask_tb__DOT__store_lane__51__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [3U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 1U;
        __Vtask_tb__DOT__store_lane__51__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [3U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 2U;
        __Vtask_tb__DOT__store_lane__51__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [3U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 3U;
        __Vtask_tb__DOT__store_lane__51__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [3U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 4U;
        __Vtask_tb__DOT__store_lane__51__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [4U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 0U;
        __Vtask_tb__DOT__store_lane__51__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [4U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 1U;
        __Vtask_tb__DOT__store_lane__51__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [4U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 2U;
        __Vtask_tb__DOT__store_lane__51__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [4U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 3U;
        __Vtask_tb__DOT__store_lane__51__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__51__lane = __Vtask_tb__DOT__keccak_p1600__45__a
            [4U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__51__y = 4U;
        __Vtask_tb__DOT__store_lane__51__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__51__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__51__lane 
                                >> 0x38U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__51__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__51__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx 
            = (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx 
               + vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate);
    }
}
